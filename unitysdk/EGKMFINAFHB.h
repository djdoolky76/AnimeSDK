#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EGKMFINAFHB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define EGKMFINAFHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E360)
#define EGKMFINAFHB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD7E370)
#define EGKMFINAFHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD7E330)

inline static constexpr unsigned int EGKMFINAFHB_TypeDefinitionIndex = 23159;

	class EGKMFINAFHB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BDEMOIAOHJC; // 0x18
		::RPG::GameCore::DynamicFloat* KKCKMCDGCGK; // 0x20
		::RPG::GameCore::SilverWolf999UltraSkillUIState MEPFOEEGBEA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKMFINAFHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGKMFINAFHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGKMFINAFHB*))((::PBYTE)hIl2Cpp + EGKMFINAFHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGKMFINAFHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGKMFINAFHB*))((::PBYTE)hIl2Cpp + EGKMFINAFHB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
