#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BindTimeRewindParent; }
namespace RPG::GameCore { class TimeRewindChildConfig; }
namespace RPG::GameCore { class TimeRewindParentPropStateConfig; }

#define RPG_GAMECORE_BINDTIMEREWINDPARENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46E0A0)
#define RPG_GAMECORE_BINDTIMEREWINDPARENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D46E0B0)
#define RPG_GAMECORE_BINDTIMEREWINDPARENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D46E070)

namespace RPG::GameCore
{
	class BindTimeRewindParent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimeRewindParentPropStateConfig*>* PropStateConfig; // 0x18
		::System::Single RotationSpeed; // 0x20
		::System::Single ChildInstanceID; // 0x24
		::RPG::MVector3 ChildOffset; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TimeRewindChildConfig*>* ChildConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindTimeRewindParent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindTimeRewindParent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BindTimeRewindParent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BindTimeRewindParent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDPARENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
