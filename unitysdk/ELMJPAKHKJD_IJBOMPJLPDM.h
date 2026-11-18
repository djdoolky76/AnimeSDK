#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ELMJPAKHKJD_HJCNCABLGEO.h"

namespace System { class String; }

#define ELMJPAKHKJD_IJBOMPJLPDM_HDANHIJPEBG_OFFSET UNITYSDK_OFFSET(0x11A9C9A0)
#define ELMJPAKHKJD_IJBOMPJLPDM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9C990)

inline static constexpr unsigned int ELMJPAKHKJD_IJBOMPJLPDM_TypeDefinitionIndex = 43202;

class ELMJPAKHKJD_IJBOMPJLPDM : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_IJBOMPJLPDM__CTOR_OFFSET))(this);
	}

	::System::Boolean HDANHIJPEBG(::ELMJPAKHKJD_HJCNCABLGEO IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::ELMJPAKHKJD_HJCNCABLGEO))((::PBYTE)hIl2Cpp + ELMJPAKHKJD_IJBOMPJLPDM_HDANHIJPEBG_OFFSET))(this, IPMMCGDMODG);
	}
};
