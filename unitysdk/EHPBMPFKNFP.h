#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EHPBMPFKNFP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPredicateItemCondition; }
namespace SimpleJSON { class JSONNode; }

#define EHPBMPFKNFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56980)
#define EHPBMPFKNFP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD56B90)
#define EHPBMPFKNFP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD56B50)
#define EHPBMPFKNFP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD56990)
#define EHPBMPFKNFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD56940)

inline static constexpr unsigned int EHPBMPFKNFP_TypeDefinitionIndex = 21508;

	class EHPBMPFKNFP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ChenLingFesPredicateItemCondition* LGPMCJDBDIA; // 0x20
		::RPG::GameCore::ChenLingFesPredicateItemCondition* EKIJFPIPCKF; // 0x28
		::RPG::GameCore::LogicOperationType NDJKPABPJHO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPBMPFKNFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + EHPBMPFKNFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + EHPBMPFKNFP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + EHPBMPFKNFP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EHPBMPFKNFP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EHPBMPFKNFP*))((::PBYTE)hIl2Cpp + EHPBMPFKNFP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
