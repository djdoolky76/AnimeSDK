#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class OGCLOOJEPDE;
namespace RPG::GameCore { class AdventureModifierInstance; }

#define OGCLOOJEPDE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE53560)
#define OGCLOOJEPDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE536C0)
#define OGCLOOJEPDE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE53670)
#define OGCLOOJEPDE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE535D0)
#define OGCLOOJEPDE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE53510)

	class OGCLOOJEPDE : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::AdventureModifierInstance* EAEJGPLLGMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCLOOJEPDE_CTOR_OFFSET))(this);
		}

		::OGCLOOJEPDE* KPJGDHLENIP(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::OGCLOOJEPDE*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + OGCLOOJEPDE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCLOOJEPDE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCLOOJEPDE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCLOOJEPDE_GETEVENTTYPE_OFFSET))(this);
		}

	};
