#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BDDC0)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BDDD0)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BDC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireEffectAction_TypeDefinitionIndex = 18738;

	class FiveDimFireEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::System::Boolean SkipWhenCullByCamera; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
