#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFBCFAIOIEK.h"
#include "unitysdk/System/Object.h"
class FCKNFOKENDN;
namespace RPG::Client { class ChatMessageExtendData; }
namespace RPG::GameCore { class ChatInviteConfigRow; }

#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_ADDEXPIREDNOTIFYTIMER_OFFSET UNITYSDK_OFFSET(0x1D7AF860)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7AF2F0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF2E0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D7AF840)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_INVITECONFIGROW_OFFSET UNITYSDK_OFFSET(0x1D7AF7E0)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D7AF660)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1D7AF850)
#define RPG_CLIENT_CHATMESSAGEEXTENDDATA__ADDEXPIREDNOTIFYTIMER_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D7AFA10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatMessageExtendData_TypeDefinitionIndex = 64658;

	class ChatMessageExtendData : public ::System::Object
	{
	public:
		::System::UInt32 _ConfigID_k__BackingField; // 0x10
		::System::UInt32 _CreateTimeStamp; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChatMessageExtendData* Create(::BFBCFAIOIEK a1, ::System::UInt32 a2, ::FCKNFOKENDN* a3)
		{
			return ((::RPG::Client::ChatMessageExtendData*(*)(::BFBCFAIOIEK, ::System::UInt32, ::FCKNFOKENDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_ISVALID_OFFSET))(this);
		}

		::RPG::GameCore::ChatInviteConfigRow* get_InviteConfigRow()
		{
			return ((::RPG::GameCore::ChatInviteConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_INVITECONFIGROW_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::Void AddExpiredNotifyTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA_ADDEXPIREDNOTIFYTIMER_OFFSET))(this);
		}

		::System::Void _AddExpiredNotifyTimer_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATMESSAGEEXTENDDATA__ADDEXPIREDNOTIFYTIMER_B__10_0_OFFSET))(this);
		}

	};
}
