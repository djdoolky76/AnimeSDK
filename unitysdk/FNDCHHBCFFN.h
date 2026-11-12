#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FNDCHHBCFFN;

#define FNDCHHBCFFN_CTOR_OFFSET UNITYSDK_OFFSET(0x167DC690)
#define FNDCHHBCFFN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x167DC640)
#define FNDCHHBCFFN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x167DC5F0)
#define FNDCHHBCFFN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x167DC590)

inline static constexpr unsigned int FNDCHHBCFFN_TypeDefinitionIndex = 55379;

	class FNDCHHBCFFN : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::FixPoint NMCLEENBEAL; // 0x18
		::RPG::GameCore::FixPoint GBOEIMOIMJG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDCHHBCFFN_CTOR_OFFSET))(this);
		}

		::FNDCHHBCFFN* KPJGDHLENIP(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::FNDCHHBCFFN*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FNDCHHBCFFN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDCHHBCFFN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDCHHBCFFN_GETEVENTTYPE_OFFSET))(this);
		}

	};
