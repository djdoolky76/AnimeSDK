#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PFFMFIIINIJ;

#define CKPAOOFMPKC_GNGEMCACABA_IEEMBMGMOND_OFFSET UNITYSDK_OFFSET(0x159DFEA0)
#define CKPAOOFMPKC_GNGEMCACABA_JLOIOFIIAOM_OFFSET UNITYSDK_OFFSET(0x159E0010)
#define CKPAOOFMPKC_GNGEMCACABA__CTOR_OFFSET UNITYSDK_OFFSET(0x159DFE90)

inline static constexpr unsigned int CKPAOOFMPKC_GNGEMCACABA_TypeDefinitionIndex = 90501;

class CKPAOOFMPKC_GNGEMCACABA : public ::System::Object
{
public:
	::PFFMFIIINIJ* DDKICDNCJCF; // 0x10
	::System::Int32 FMJPOIFLFOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GNGEMCACABA__CTOR_OFFSET))(this);
	}

	::System::Int32 IEEMBMGMOND(::System::Int32 MIPMFJPJENO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GNGEMCACABA_IEEMBMGMOND_OFFSET))(this, MIPMFJPJENO);
	}

	::System::Boolean JLOIOFIIAOM(::PFFMFIIINIJ* LMLPPLMKLFL)
	{
		return ((::System::Boolean(*)(::PVOID, ::PFFMFIIINIJ*))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GNGEMCACABA_JLOIOFIIAOM_OFFSET))(this, LMLPPLMKLFL);
	}
};
