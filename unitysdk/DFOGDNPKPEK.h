#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class DFOGDNPKPEK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define DFOGDNPKPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E0B50)
#define DFOGDNPKPEK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E7E0DD0)
#define DFOGDNPKPEK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E7E0D70)
#define DFOGDNPKPEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7E0B90)
#define DFOGDNPKPEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7E0AF0)

inline static constexpr unsigned int DFOGDNPKPEK_TypeDefinitionIndex = 23635;

	class DFOGDNPKPEK : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOGDNPKPEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DFOGDNPKPEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFOGDNPKPEK*))((::PBYTE)hIl2Cpp + DFOGDNPKPEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DFOGDNPKPEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DFOGDNPKPEK*))((::PBYTE)hIl2Cpp + DFOGDNPKPEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::DFOGDNPKPEK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DFOGDNPKPEK*))((::PBYTE)hIl2Cpp + DFOGDNPKPEK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::DFOGDNPKPEK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::DFOGDNPKPEK*))((::PBYTE)hIl2Cpp + DFOGDNPKPEK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
