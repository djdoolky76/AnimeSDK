#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefGraphDynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46190)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB461A0)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB469F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGraphDynamicFloat_TypeDefinitionIndex = 17520;

	class SwitchRefGraphDynamicFloat : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICFLOAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
