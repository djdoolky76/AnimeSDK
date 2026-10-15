#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchHandLiftToAnchor; }

#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB427A0)
#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB427B0)
#define RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandLiftToAnchor_TypeDefinitionIndex = 20962;

	class SwitchHandLiftToAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* AnchorID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandLiftToAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandLiftToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandLiftToAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandLiftToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLIFTTOANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
