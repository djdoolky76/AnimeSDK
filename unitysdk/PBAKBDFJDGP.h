#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
class MNBNFBAMKKI;
class PBAKBDFJDGP;

#define PBAKBDFJDGP_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFE07C0)
#define PBAKBDFJDGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE08F0)
#define PBAKBDFJDGP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBFE0860)
#define PBAKBDFJDGP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBFE0810)
#define PBAKBDFJDGP_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xBFE08D0)
#define PBAKBDFJDGP_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xBFE08B0)
#define PBAKBDFJDGP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBFE0760)
#define PBAKBDFJDGP_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0xBFE08E0)
#define PBAKBDFJDGP_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xBFE08C0)

inline static constexpr unsigned int PBAKBDFJDGP_TypeDefinitionIndex = 54079;

	class PBAKBDFJDGP : public ::CMPGEAFHHDC
	{
	public:
		::MNBNFBAMKKI* _ModifierInstance_k__BackingField; // 0x18
		::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_CTOR_OFFSET))(this);
		}

		::PBAKBDFJDGP* KPJGDHLENIP(::MNBNFBAMKKI* a1, ::RPG::GameCore::ModifierDeathSource a2)
		{
			return ((::PBAKBDFJDGP*(*)(::PVOID, ::MNBNFBAMKKI*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_GETEVENTTYPE_OFFSET))(this);
		}

		::MNBNFBAMKKI* get_ModifierInstance()
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_GET_MODIFIERINSTANCE_OFFSET))(this);
		}

		::System::Void set_ModifierInstance(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ModifierDeathSource get_DeathSource()
		{
			return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_GET_DEATHSOURCE_OFFSET))(this);
		}

		::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + PBAKBDFJDGP_SET_DEATHSOURCE_OFFSET))(this, a1);
		}

	};
