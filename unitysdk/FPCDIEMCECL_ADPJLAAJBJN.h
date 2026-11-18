#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LOIHDEPANLG;

#define FPCDIEMCECL_ADPJLAAJBJN_HGGHMMELICA_OFFSET UNITYSDK_OFFSET(0x179C2890)
#define FPCDIEMCECL_ADPJLAAJBJN__CTOR_OFFSET UNITYSDK_OFFSET(0x179C2880)

inline static constexpr unsigned int FPCDIEMCECL_ADPJLAAJBJN_TypeDefinitionIndex = 53814;

class FPCDIEMCECL_ADPJLAAJBJN : public ::System::Object
{
public:
	::System::Int32 EOKAGAOFCCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCDIEMCECL_ADPJLAAJBJN__CTOR_OFFSET))(this);
	}

	::System::Boolean HGGHMMELICA(::LOIHDEPANLG* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LOIHDEPANLG*))((::PBYTE)hIl2Cpp + FPCDIEMCECL_ADPJLAAJBJN_HGGHMMELICA_OFFSET))(this, IMLLDOHDCNC);
	}
};
