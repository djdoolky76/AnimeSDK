#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class OOADBMLOOEI;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define OOADBMLOOEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D279690)
#define OOADBMLOOEI_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2798B0)
#define OOADBMLOOEI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D279850)
#define OOADBMLOOEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2796D0)
#define OOADBMLOOEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D279630)

inline static constexpr unsigned int OOADBMLOOEI_TypeDefinitionIndex = 19905;

	class OOADBMLOOEI : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOADBMLOOEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + OOADBMLOOEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + OOADBMLOOEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + OOADBMLOOEI_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::OOADBMLOOEI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::OOADBMLOOEI*))((::PBYTE)hIl2Cpp + OOADBMLOOEI_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
