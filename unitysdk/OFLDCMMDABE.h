#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class MNBNFBAMKKI;
class OFLDCMMDABE;

#define OFLDCMMDABE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE3EB00)
#define OFLDCMMDABE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3EBF0)
#define OFLDCMMDABE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBE3EBA0)
#define OFLDCMMDABE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE3EB50)
#define OFLDCMMDABE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE3EAB0)

inline static constexpr unsigned int OFLDCMMDABE_TypeDefinitionIndex = 54077;

	class OFLDCMMDABE : public ::CMPGEAFHHDC
	{
	public:
		::MNBNFBAMKKI* EAEJGPLLGMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCMMDABE_CTOR_OFFSET))(this);
		}

		::OFLDCMMDABE* KPJGDHLENIP(::MNBNFBAMKKI* a1)
		{
			return ((::OFLDCMMDABE*(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + OFLDCMMDABE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCMMDABE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCMMDABE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLDCMMDABE_GETEVENTTYPE_OFFSET))(this);
		}

	};
