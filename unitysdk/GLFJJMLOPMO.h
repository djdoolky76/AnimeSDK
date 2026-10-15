#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
class FCOEMCEDLNL;
class GLFJJMLOPMO;
namespace SimpleJSON { class JSONNode; }

#define GLFJJMLOPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE63920)
#define GLFJJMLOPMO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE63AE0)
#define GLFJJMLOPMO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE63AB0)
#define GLFJJMLOPMO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE63930)
#define GLFJJMLOPMO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE638F0)

inline static constexpr unsigned int GLFJJMLOPMO_TypeDefinitionIndex = 24202;

	class GLFJJMLOPMO : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::RtBehaviorFlag FNPGDNFLMPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFJJMLOPMO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + GLFJJMLOPMO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + GLFJJMLOPMO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + GLFJJMLOPMO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::GLFJJMLOPMO* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::GLFJJMLOPMO*))((::PBYTE)hIl2Cpp + GLFJJMLOPMO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
