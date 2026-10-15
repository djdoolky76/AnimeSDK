#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JHCLGCAFPLE;

#define JHCLGCAFPLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AA120)
#define JHCLGCAFPLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB1AA0D0)
#define JHCLGCAFPLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB1AA080)
#define JHCLGCAFPLE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB1AA020)

	class JHCLGCAFPLE : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x18
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLGCAFPLE_CTOR_OFFSET))(this);
		}

		::JHCLGCAFPLE* KPJGDHLENIP(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::JHCLGCAFPLE*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JHCLGCAFPLE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLGCAFPLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLGCAFPLE_GETEVENTTYPE_OFFSET))(this);
		}

	};
