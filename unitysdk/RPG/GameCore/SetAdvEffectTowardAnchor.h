#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetAdvEffectTowardAnchor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93780)
#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA93790)
#define RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvEffectTowardAnchor_TypeDefinitionIndex = 22319;

	class SetAdvEffectTowardAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ConfigName; // 0x20
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAdvEffectTowardAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAdvEffectTowardAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVEFFECTTOWARDANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
