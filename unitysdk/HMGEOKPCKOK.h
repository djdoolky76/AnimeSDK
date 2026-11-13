#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersBrickModifierTypeConfig.h"
class FCOEMCEDLNL;
class HMGEOKPCKOK;
namespace SimpleJSON { class JSONNode; }

#define HMGEOKPCKOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E837C80)
#define HMGEOKPCKOK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E837E70)
#define HMGEOKPCKOK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E837E40)
#define HMGEOKPCKOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E837C90)
#define HMGEOKPCKOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E837C50)

inline static constexpr unsigned int HMGEOKPCKOK_TypeDefinitionIndex = 21954;

	class HMGEOKPCKOK : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTowersBrickModifierTypeConfig JMNJLFACCLM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGEOKPCKOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + HMGEOKPCKOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + HMGEOKPCKOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + HMGEOKPCKOK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::HMGEOKPCKOK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::HMGEOKPCKOK*))((::PBYTE)hIl2Cpp + HMGEOKPCKOK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
