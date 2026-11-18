#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBACBMHNGBL.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define IOKOCBHGGPI_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x1943A640)
#define IOKOCBHGGPI_MMJNFKGOADK_OFFSET UNITYSDK_OFFSET(0x1943AD00)
#define IOKOCBHGGPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1943A630)

inline static constexpr unsigned int IOKOCBHGGPI_TypeDefinitionIndex = 50057;

class IOKOCBHGGPI : public ::BBACBMHNGBL
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* NKAKNBFNKAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + IOKOCBHGGPI__CTOR_OFFSET))(this, NKAKNBFNKAN);
	}

	::System::Void CCNCFOBJCHG(::System::String* MCOHLHMKLIP, ::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IOKOCBHGGPI_CCNCFOBJCHG_OFFSET))(this, MCOHLHMKLIP, FLMNJOFKIKI);
	}

	::System::Void MMJNFKGOADK(::System::String* MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IOKOCBHGGPI_MMJNFKGOADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
