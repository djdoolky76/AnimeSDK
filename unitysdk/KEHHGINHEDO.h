#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define KEHHGINHEDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC05210)
#define KEHHGINHEDO_DGNLBCEKBGH_OFFSET UNITYSDK_OFFSET(0xBC05580)
#define KEHHGINHEDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC05850)
#define KEHHGINHEDO_EHBBMDMLBLF_OFFSET UNITYSDK_OFFSET(0xBC05760)
#define KEHHGINHEDO_HGHFKLCGJLP_OFFSET UNITYSDK_OFFSET(0xBC05700)
#define KEHHGINHEDO_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xBC058A0)
#define KEHHGINHEDO_KDLOAOCCMHH_OFFSET UNITYSDK_OFFSET(0xBC05350)
#define KEHHGINHEDO_MDNEACBIHEP_OFFSET UNITYSDK_OFFSET(0xBC054F0)
#define KEHHGINHEDO_PEAOIBKBPDO_OFFSET UNITYSDK_OFFSET(0xBC05260)

inline static constexpr unsigned int KEHHGINHEDO_TypeDefinitionIndex = 77778;

	class KEHHGINHEDO : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Int32 AHIGEEDCHEM; // 0x18
		::System::Int32 LDKANGOFJMG; // 0x1C
		::System::Boolean AFLGDFPEMNP; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + KEHHGINHEDO_CTOR_OFFSET))(this, a1);
		}

		::System::Void PEAOIBKBPDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHHGINHEDO_PEAOIBKBPDO_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* KDLOAOCCMHH()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHHGINHEDO_KDLOAOCCMHH_OFFSET))(this);
		}

		::System::Void MDNEACBIHEP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + KEHHGINHEDO_MDNEACBIHEP_OFFSET))(this, a1);
		}

		::System::Void DGNLBCEKBGH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KEHHGINHEDO_DGNLBCEKBGH_OFFSET))(this, a1);
		}

		::System::Void HGHFKLCGJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHHGINHEDO_HGHFKLCGJLP_OFFSET))(this);
		}

		::System::Void EHBBMDMLBLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHHGINHEDO_EHBBMDMLBLF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHHGINHEDO_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KEHHGINHEDO_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
