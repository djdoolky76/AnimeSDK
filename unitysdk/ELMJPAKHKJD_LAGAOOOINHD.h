#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ELMJPAKHKJD_HJCNCABLGEO.h"

namespace System { class String; }

#define ELMJPAKHKJD_LAGAOOOINHD_LAMIIGFGNKC_OFFSET UNITYSDK_OFFSET(0x10F43F00)
#define ELMJPAKHKJD_LAGAOOOINHD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F43BB0)

inline static constexpr unsigned int ELMJPAKHKJD_LAGAOOOINHD_TypeDefinitionIndex = 43203;

class ELMJPAKHKJD_LAGAOOOINHD : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_LAGAOOOINHD__CTOR_OFFSET))(this);
	}

	::System::Boolean LAMIIGFGNKC(::ELMJPAKHKJD_HJCNCABLGEO IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELMJPAKHKJD_HJCNCABLGEO))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_LAGAOOOINHD_LAMIIGFGNKC_OFFSET))(this, IPMMCGDMODG);
	}
};
