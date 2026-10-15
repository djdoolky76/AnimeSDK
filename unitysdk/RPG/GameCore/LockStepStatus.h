#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockStepStatus; }

#define RPG_GAMECORE_LOCKSTEPSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4170)
#define RPG_GAMECORE_LOCKSTEPSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C4180)
#define RPG_GAMECORE_LOCKSTEPSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockStepStatus_TypeDefinitionIndex = 23597;

	class LockStepStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EnumStatusType BuffType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::EntityType>* SourceTypes; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockStepStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockStepStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
