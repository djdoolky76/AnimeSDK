#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class FPLMADDJDIO;
class MNBNFBAMKKI;

#define FPLMADDJDIO_CLEAR_OFFSET UNITYSDK_OFFSET(0x187832B0)
#define FPLMADDJDIO_CTOR_OFFSET UNITYSDK_OFFSET(0x187833A0)
#define FPLMADDJDIO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18783350)
#define FPLMADDJDIO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18783300)
#define FPLMADDJDIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18783250)

inline static constexpr unsigned int FPLMADDJDIO_TypeDefinitionIndex = 55242;

	class FPLMADDJDIO : public ::CMPGEAFHHDC
	{
	public:
		::MNBNFBAMKKI* EAEJGPLLGMI; // 0x18
		::System::Int32 AAPOHKBAPFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLMADDJDIO_CTOR_OFFSET))(this);
		}

		::FPLMADDJDIO* KPJGDHLENIP(::MNBNFBAMKKI* a1, ::System::Int32 a2)
		{
			return ((::FPLMADDJDIO*(*)(::PVOID, ::MNBNFBAMKKI*, ::System::Int32))((::PBYTE)hIl2Cpp + FPLMADDJDIO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLMADDJDIO_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLMADDJDIO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLMADDJDIO_GETEVENTTYPE_OFFSET))(this);
		}

	};
