#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/CoreBase/ComponentMask.h"
#include "unitysdk/PJIGCKIIMPJ.h"
#include "unitysdk/System/ValueType.h"

#define JLFKLCLEHOJ_GKKDHDGNGDK__CTOR_OFFSET UNITYSDK_OFFSET(0x998E00)

inline static constexpr unsigned int JLFKLCLEHOJ_GKKDHDGNGDK_TypeDefinitionIndex = 28679;

struct alignas(4) JLFKLCLEHOJ_GKKDHDGNGDK
{
	::PJIGCKIIMPJ JJPEDAMOOLA; // 0x10
	::System::Byte _padding0[0x4];
	::MoleMole::Arcade::CoreBase::ComponentMask LBMPDPJKNJH; // 0x18

	::System::Void _ctor(::PJIGCKIIMPJ GEJCKFFFKCL, ::MoleMole::Arcade::CoreBase::ComponentMask& LBPIPEAKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::PJIGCKIIMPJ, ::MoleMole::Arcade::CoreBase::ComponentMask&))((::PBYTE)hIl2Cpp + JLFKLCLEHOJ_GKKDHDGNGDK__CTOR_OFFSET))(this, GEJCKFFFKCL, LBPIPEAKPDG);
	}
};
