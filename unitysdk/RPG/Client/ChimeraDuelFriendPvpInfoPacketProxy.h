#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelFriendPvpInfoPacketProxy; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CREATE_OFFSET UNITYSDK_OFFSET(0xCB213B0)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xCB21420)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB217B0)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_SEND_OFFSET UNITYSDK_OFFSET(0xCB21430)
#define RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__ONRECEIVE_OFFSET UNITYSDK_OFFSET(0xCB21830)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelFriendPvpInfoPacketProxy_TypeDefinitionIndex = 63337;

	class ChimeraDuelFriendPvpInfoPacketProxy : public ::System::Object
	{
	public:
		::System::Action* _FinishCallback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelFriendPvpInfoPacketProxy* Create()
		{
			return ((::RPG::Client::ChimeraDuelFriendPvpInfoPacketProxy*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_CREATE_OFFSET))();
		}

		::System::Void Send(::System::Action* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_SEND_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnReceive(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELFRIENDPVPINFOPACKETPROXY__ONRECEIVE_OFFSET))(this, a1, a2);
		}

	};
}
