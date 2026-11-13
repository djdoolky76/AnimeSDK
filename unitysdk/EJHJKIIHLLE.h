#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class EJHJKIIHLLE;
class FCOEMCEDLNL;
namespace SimpleJSON { class JSONNode; }

#define EJHJKIIHLLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11B440)
#define EJHJKIIHLLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1F11B5C0)
#define EJHJKIIHLLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1F11B590)
#define EJHJKIIHLLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F11B450)
#define EJHJKIIHLLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F11B410)

inline static constexpr unsigned int EJHJKIIHLLE_TypeDefinitionIndex = 10245;

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
