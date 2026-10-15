#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BDKIHEDECCJ;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define BDKIHEDECCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCEDF0)
#define BDKIHEDECCJ_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CCCEFA0)
#define BDKIHEDECCJ_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CCCEF70)
#define BDKIHEDECCJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCCEE00)
#define BDKIHEDECCJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCEDC0)

inline static constexpr unsigned int BDKIHEDECCJ_TypeDefinitionIndex = 20124;

	class BDKIHEDECCJ : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIHEDECCJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + BDKIHEDECCJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + BDKIHEDECCJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + BDKIHEDECCJ_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::BDKIHEDECCJ* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::BDKIHEDECCJ*))((::PBYTE)hIl2Cpp + BDKIHEDECCJ_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
