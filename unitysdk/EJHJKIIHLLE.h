#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EJHJKIIHLLE;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EJHJKIIHLLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD906A0)
#define EJHJKIIHLLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CD90820)
#define EJHJKIIHLLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CD907F0)
#define EJHJKIIHLLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD906B0)
#define EJHJKIIHLLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD90670)

	class EJHJKIIHLLE : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHJKIIHLLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + EJHJKIIHLLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + EJHJKIIHLLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + EJHJKIIHLLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::EJHJKIIHLLE* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::EJHJKIIHLLE*))((::PBYTE)hIl2Cpp + EJHJKIIHLLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
