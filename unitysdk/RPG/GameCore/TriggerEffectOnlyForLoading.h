#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerEffectOnlyForLoading; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC244C0)
#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC244D0)
#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC24490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectOnlyForLoading_TypeDefinitionIndex = 20271;

	class TriggerEffectOnlyForLoading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Boolean SyncLoad; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectOnlyForLoading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectOnlyForLoading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
