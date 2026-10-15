#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class ECADOJALGKJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define ECADOJALGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD35400)
#define ECADOJALGKJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD35680)
#define ECADOJALGKJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD35620)
#define ECADOJALGKJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD35440)
#define ECADOJALGKJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD353A0)

inline static constexpr unsigned int ECADOJALGKJ_TypeDefinitionIndex = 24105;

	class ECADOJALGKJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Boolean FBPONNMOHCG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADOJALGKJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + ECADOJALGKJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + ECADOJALGKJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + ECADOJALGKJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::ECADOJALGKJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ECADOJALGKJ*))((::PBYTE)hIl2Cpp + ECADOJALGKJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
