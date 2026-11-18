#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKADCAILBDC.h"

namespace MoleMole { class EventRange; }

#define COLFEOBBAII__CTOR_OFFSET UNITYSDK_OFFSET(0x193EB6A0)

inline static constexpr unsigned int COLFEOBBAII_TypeDefinitionIndex = 71996;

class COLFEOBBAII : public ::CKADCAILBDC
{
public:
	::System::Void _ctor(::MoleMole::EventRange* HICLHPFMJEN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + COLFEOBBAII__CTOR_OFFSET))(this, HICLHPFMJEN);
	}
};
