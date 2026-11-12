#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class NMMLFGJDEFN;
namespace RPG::GameCore { class AdventureModifierInstance; }

#define NMMLFGJDEFN_CLEAR_OFFSET UNITYSDK_OFFSET(0xC5760E0)
#define NMMLFGJDEFN_CTOR_OFFSET UNITYSDK_OFFSET(0xC576240)
#define NMMLFGJDEFN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC5761F0)
#define NMMLFGJDEFN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC576150)
#define NMMLFGJDEFN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC576090)

inline static constexpr unsigned int NMMLFGJDEFN_TypeDefinitionIndex = 57845;

	class NMMLFGJDEFN : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::AdventureModifierInstance* EAEJGPLLGMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLFGJDEFN_CTOR_OFFSET))(this);
		}

		::NMMLFGJDEFN* KPJGDHLENIP(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::NMMLFGJDEFN*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + NMMLFGJDEFN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLFGJDEFN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLFGJDEFN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLFGJDEFN_GETEVENTTYPE_OFFSET))(this);
		}

	};
