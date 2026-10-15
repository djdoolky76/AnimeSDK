#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetAdvEffectToAnchor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA935C0)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA935D0)
#define RPG_GAMECORE_SETADVEFFECTTOANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectToAnchor_TypeDefinitionIndex = 22320;

	class SetAdvEffectToAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectToAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectToAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
