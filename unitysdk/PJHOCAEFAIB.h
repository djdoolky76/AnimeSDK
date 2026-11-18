#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMDJLKPMLMM.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;

#define PJHOCAEFAIB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1556FDD0)
#define PJHOCAEFAIB_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x1556FD50)
#define PJHOCAEFAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1556FD40)

inline static constexpr unsigned int PJHOCAEFAIB_TypeDefinitionIndex = 83523;

class PJHOCAEFAIB : public ::System::Object
{
public:
	::OMDJLKPMLMM JEGLGNNEPEI; // 0x10
	::System::Int32 IDLHFIIJPEM; // 0x14
	::System::Int32 KBAMOLIPODI; // 0x18
	::ProtoScript::NodeState EEKCLNEKBPD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHOCAEFAIB__CTOR_OFFSET))(this);
	}

	::System::Boolean PADHEHLKBDO(::PJHOCAEFAIB* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::PJHOCAEFAIB*))((::PBYTE)hIl2Cpp + PJHOCAEFAIB_PADHEHLKBDO_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void BBOMJDBNHIC(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + PJHOCAEFAIB_BBOMJDBNHIC_OFFSET))(this, CDKCJAKODPN);
	}
};
