#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class JCDELEMIIME;
namespace SimpleJSON { class JSONNode; }

#define JCDELEMIIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D016750)
#define JCDELEMIIME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D016910)
#define JCDELEMIIME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D0168E0)
#define JCDELEMIIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D016760)
#define JCDELEMIIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D016720)

inline static constexpr unsigned int JCDELEMIIME_TypeDefinitionIndex = 24313;

	class JCDELEMIIME : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ExpeditionBattleFlowStateType EANMENOIJOM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDELEMIIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + JCDELEMIIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + JCDELEMIIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + JCDELEMIIME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::JCDELEMIIME* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::JCDELEMIIME*))((::PBYTE)hIl2Cpp + JCDELEMIIME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
