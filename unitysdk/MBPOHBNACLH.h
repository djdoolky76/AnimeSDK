#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
class MBPOHBNACLH;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MBPOHBNACLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D138B90)
#define MBPOHBNACLH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D138E50)
#define MBPOHBNACLH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D138E20)
#define MBPOHBNACLH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D138BA0)
#define MBPOHBNACLH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D138B60)

	class MBPOHBNACLH : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x20
		::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x28
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x30
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPOHBNACLH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + MBPOHBNACLH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + MBPOHBNACLH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + MBPOHBNACLH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + MBPOHBNACLH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
