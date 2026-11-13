#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class FDNCLPGAKOA;
class FGAOALCCIJB;

#define FGAOALCCIJB_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A76D00)
#define FGAOALCCIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x18A76DF0)
#define FGAOALCCIJB_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18A76DA0)
#define FGAOALCCIJB_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18A76D50)
#define FGAOALCCIJB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18A76CB0)

inline static constexpr unsigned int FGAOALCCIJB_TypeDefinitionIndex = 54861;

	class FGAOALCCIJB : public ::CMPGEAFHHDC
	{
	public:
		::FDNCLPGAKOA* LIFHGBNGGHK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOALCCIJB_CTOR_OFFSET))(this);
		}

		::FGAOALCCIJB* KPJGDHLENIP(::FDNCLPGAKOA* a1)
		{
			return ((::FGAOALCCIJB*(*)(::PVOID, ::FDNCLPGAKOA*))((::PBYTE)hIl2Cpp + FGAOALCCIJB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOALCCIJB_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOALCCIJB_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOALCCIJB_GETEVENTTYPE_OFFSET))(this);
		}

	};
