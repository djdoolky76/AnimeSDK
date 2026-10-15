#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PDHJJNFJCJF;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define PDHJJNFJCJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A0C20)
#define PDHJJNFJCJF_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2A0E40)
#define PDHJJNFJCJF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2A0E10)
#define PDHJJNFJCJF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2A0C30)
#define PDHJJNFJCJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A0BF0)

inline static constexpr unsigned int PDHJJNFJCJF_TypeDefinitionIndex = 24199;

	class PDHJJNFJCJF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
		::RPG::GameCore::TargetEvaluator* NJLICGGKCAB; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHJJNFJCJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + PDHJJNFJCJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + PDHJJNFJCJF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + PDHJJNFJCJF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PDHJJNFJCJF* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PDHJJNFJCJF*))((::PBYTE)hIl2Cpp + PDHJJNFJCJF_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
