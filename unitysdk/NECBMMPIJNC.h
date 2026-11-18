#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMPEJJFALLA.h"

class ANHOLIOLKHH;
namespace System { class String; }

#define NECBMMPIJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB1E90)

inline static constexpr unsigned int NECBMMPIJNC_TypeDefinitionIndex = 90949;

class NECBMMPIJNC : public ::NMPEJJFALLA
{
public:
	::ANHOLIOLKHH* AMBBJKIHCLB; // 0x10
	::System::String* KIPPGJJKLMM; // 0x18

	::System::Void _ctor(::ANHOLIOLKHH* AMBBJKIHCLB)
	{
		return ((::System::Void(*)(::PVOID, ::ANHOLIOLKHH*))((::PBYTE)hIl2Cpp + NECBMMPIJNC__CTOR_OFFSET))(this, AMBBJKIHCLB);
	}
};
