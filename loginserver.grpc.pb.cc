// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: loginserver.proto

#include "loginserver.pb.h"
#include "loginserver.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace sintol {

static const char* LoginServer_method_names[] = {
  "/sintol.LoginServer/Login",
};

std::unique_ptr< LoginServer::Stub> LoginServer::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< LoginServer::Stub> stub(new LoginServer::Stub(channel));
  return stub;
}

LoginServer::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Login_(LoginServer_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status LoginServer::Stub::Login(::grpc::ClientContext* context, const ::sintol::LoginRequest& request, ::sintol::LoginReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Login_, context, request, response);
}

void LoginServer::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::sintol::LoginRequest* request, ::sintol::LoginReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, std::move(f));
}

void LoginServer::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sintol::LoginReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, std::move(f));
}

void LoginServer::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::sintol::LoginRequest* request, ::sintol::LoginReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, reactor);
}

void LoginServer::Stub::experimental_async::Login(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::sintol::LoginReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Login_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::sintol::LoginReply>* LoginServer::Stub::AsyncLoginRaw(::grpc::ClientContext* context, const ::sintol::LoginRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::sintol::LoginReply>::Create(channel_.get(), cq, rpcmethod_Login_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::sintol::LoginReply>* LoginServer::Stub::PrepareAsyncLoginRaw(::grpc::ClientContext* context, const ::sintol::LoginRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::sintol::LoginReply>::Create(channel_.get(), cq, rpcmethod_Login_, context, request, false);
}

LoginServer::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      LoginServer_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< LoginServer::Service, ::sintol::LoginRequest, ::sintol::LoginReply>(
          [](LoginServer::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::sintol::LoginRequest* req,
             ::sintol::LoginReply* resp) {
               return service->Login(ctx, req, resp);
             }, this)));
}

LoginServer::Service::~Service() {
}

::grpc::Status LoginServer::Service::Login(::grpc::ServerContext* context, const ::sintol::LoginRequest* request, ::sintol::LoginReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace sintol

