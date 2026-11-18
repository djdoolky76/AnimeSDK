#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOIILKHFBMH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FDJFFMFPBEM_FNKNMFJMAGM_OFFSET UNITYSDK_OFFSET(0x156B78A0)
#define FDJFFMFPBEM_PMHCOODEDDN_OFFSET UNITYSDK_OFFSET(0x156B77D0)
#define FDJFFMFPBEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156B77B0)
#define FDJFFMFPBEM__CTOR_OFFSET UNITYSDK_OFFSET(0x156B77A0)

inline static constexpr unsigned int FDJFFMFPBEM_TypeDefinitionIndex = 52034;

class FDJFFMFPBEM : public ::System::Object
{
public:
	::System::String* HFEIPMCNCNI; // 0x10
	::DOIILKHFBMH FNLGDLHAEGD; // 0x18
	::System::Int32 LPOFIPNKFOF; // 0x1C
	::System::Single FFHIBIDAHNP; // 0x20
	::System::Single AFLBKDHDNBN; // 0x24
	::System::Int32 MALLIFNIPCL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJFFMFPBEM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* AELLPLBJELA, ::DOIILKHFBMH FLGBFLGMEDE, ::System::Int32 IIFMJFJOOCK, ::System::Single PIEAKILBLHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DOIILKHFBMH, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FDJFFMFPBEM__CTOR_1_OFFSET))(this, AELLPLBJELA, FLGBFLGMEDE, IIFMJFJOOCK, PIEAKILBLHG);
	}

	::System::Void PMHCOODEDDN(::System::String* BHDNBGLCNOM, ::System::Boolean HJHAMICPOJB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDJFFMFPBEM_PMHCOODEDDN_OFFSET))(this, BHDNBGLCNOM, HJHAMICPOJB);
	}

	::System::Void FNKNMFJMAGM(::System::String* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDJFFMFPBEM_FNKNMFJMAGM_OFFSET))(this, BHDNBGLCNOM);
	}
};
