#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKCDGBEIKLF.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
class IGDCNPMKMEB;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define IGDCNPMKMEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC9F40)
#define IGDCNPMKMEB_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CECA250)
#define IGDCNPMKMEB_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CECA220)
#define IGDCNPMKMEB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEC9F50)
#define IGDCNPMKMEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC9F10)

inline static constexpr unsigned int IGDCNPMKMEB_TypeDefinitionIndex = 19915;

	class IGDCNPMKMEB : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* FEHABNJEENK; // 0x20
		::Il2CppArray<::System::UInt32>* PLGIENFBKDB; // 0x28
		::System::Boolean DKFAKDGFDGD; // 0x30
		::System::Byte _padding0[0x3];
		::NKCDGBEIKLF ELINAHCICBC; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDCNPMKMEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + IGDCNPMKMEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + IGDCNPMKMEB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + IGDCNPMKMEB_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::IGDCNPMKMEB* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::IGDCNPMKMEB*))((::PBYTE)hIl2Cpp + IGDCNPMKMEB_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
