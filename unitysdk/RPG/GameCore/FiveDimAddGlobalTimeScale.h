#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimAddGlobalTimeScale; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6806E0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D680710)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D680680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddGlobalTimeScale_TypeDefinitionIndex = 21445;

	class FiveDimAddGlobalTimeScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TimeScaleKey; // 0x18
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicString*>* IgnoreEntityID; // 0x28
		::System::Boolean IsPlayerIgnore; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
