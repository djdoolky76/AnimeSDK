#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class LNCKPENJCCC;
namespace SimpleJSON { class JSONNode; }

#define LNCKPENJCCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D119030)
#define LNCKPENJCCC_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D119200)
#define LNCKPENJCCC_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D1191D0)
#define LNCKPENJCCC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D119040)
#define LNCKPENJCCC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D119000)

	class LNCKPENJCCC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackType>* DHJDHHLCDME; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCKPENJCCC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + LNCKPENJCCC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + LNCKPENJCCC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + LNCKPENJCCC_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::LNCKPENJCCC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::LNCKPENJCCC*))((::PBYTE)hIl2Cpp + LNCKPENJCCC_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
