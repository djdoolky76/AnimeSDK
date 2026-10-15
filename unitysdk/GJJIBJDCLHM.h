#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class GJJIBJDCLHM;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define GJJIBJDCLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE28000)
#define GJJIBJDCLHM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE282B0)
#define GJJIBJDCLHM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE28260)
#define GJJIBJDCLHM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE28020)
#define GJJIBJDCLHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE27FB0)

inline static constexpr unsigned int GJJIBJDCLHM_TypeDefinitionIndex = 21500;

	class GJJIBJDCLHM : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* MNLINFEODPJ; // 0x20
		::RPG::GameCore::ChenLingFesProperty FODBMMCKAEN; // 0x28
		::RPG::GameCore::CompareType EHCHAPPGJDJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJIBJDCLHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + GJJIBJDCLHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + GJJIBJDCLHM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + GJJIBJDCLHM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GJJIBJDCLHM* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GJJIBJDCLHM*))((::PBYTE)hIl2Cpp + GJJIBJDCLHM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
