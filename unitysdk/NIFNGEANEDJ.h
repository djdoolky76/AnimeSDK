#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"
#include "unitysdk/NJGNEOJDPBE.h"

namespace MoleMole::Battle { class Entity; }

#define NIFNGEANEDJ_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x11F7F510)
#define NIFNGEANEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F7F4A0)

inline static constexpr unsigned int NIFNGEANEDJ_TypeDefinitionIndex = 59964;

class NIFNGEANEDJ : public ::ENHHCBBAADE
{
public:
	::NJGNEOJDPBE OOLHLBGPBHD; // 0x20
	::NJGNEOJDPBE JDPFELHBDFB; // 0x30

	::System::Void _ctor(::NJGNEOJDPBE& COBOGEIAJFB, ::NJGNEOJDPBE& MAOBPACFJPI)
	{
		return ((::System::Void(*)(::PVOID, ::NJGNEOJDPBE&, ::NJGNEOJDPBE&))((::PBYTE)hIl2Cpp + NIFNGEANEDJ__CTOR_OFFSET))(this, COBOGEIAJFB, MAOBPACFJPI);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + NIFNGEANEDJ_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
