#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PIPIGCPDNBO;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define PIPIGCPDNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C41B0)
#define PIPIGCPDNBO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2C4390)
#define PIPIGCPDNBO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2C4360)
#define PIPIGCPDNBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2C41C0)
#define PIPIGCPDNBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2C4180)

inline static constexpr unsigned int PIPIGCPDNBO_TypeDefinitionIndex = 24204;

	class PIPIGCPDNBO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NJLICGGKCAB; // 0x20
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPIGCPDNBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + PIPIGCPDNBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + PIPIGCPDNBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + PIPIGCPDNBO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + PIPIGCPDNBO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
