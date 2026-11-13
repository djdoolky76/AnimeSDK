#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarDemoConfigRow; }

#define RPG_CLIENT_ROLETRIALINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0D260)
#define RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD0D3D0)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AD0D4B0)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x1AD0D560)
#define RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AD0D360)
#define RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET UNITYSDK_OFFSET(0x1AD0D470)
#define RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0x1AD0D5A0)
#define RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AD0D320)
#define RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AD0D430)

namespace RPG::Client
{
	inline static constexpr unsigned int RoleTrialInstance_TypeDefinitionIndex = 69829;

	class RoleTrialInstance : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarDemoConfigRow* _Row; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::Boolean _CanChangeLineupLeader; // 0x1C
		::System::Boolean IsFirstEnterTrial; // 0x1D
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void LeaveRoleTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_LEAVEROLETRIAL_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarDemoConfigRow* get_Row()
		{
			return ((::RPG::GameCore::AvatarDemoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_AVATARID_OFFSET))(this);
		}

		::System::Boolean get_CanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_GET_CANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Void set_CanChangeLineupLeader(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROLETRIALINSTANCE_SET_CANCHANGELINEUPLEADER_OFFSET))(this, a1);
		}

	};
}
