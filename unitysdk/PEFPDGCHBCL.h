#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CatGodInteractCountType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class PEFPDGCHBCL;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define PEFPDGCHBCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A6170)
#define PEFPDGCHBCL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2A6490)
#define PEFPDGCHBCL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2A6450)
#define PEFPDGCHBCL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2A6180)
#define PEFPDGCHBCL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A6130)

inline static constexpr unsigned int PEFPDGCHBCL_TypeDefinitionIndex = 10206;

	class PEFPDGCHBCL : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GJEAIKIINML; // 0x20
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x28
		::RPG::Client::CatGodInteractCountType PGNPPEOFCDL; // 0x2C
		::System::Boolean OHBLKLKGIOH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFPDGCHBCL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + PEFPDGCHBCL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + PEFPDGCHBCL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + PEFPDGCHBCL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::PEFPDGCHBCL* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::PEFPDGCHBCL*))((::PBYTE)hIl2Cpp + PEFPDGCHBCL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
