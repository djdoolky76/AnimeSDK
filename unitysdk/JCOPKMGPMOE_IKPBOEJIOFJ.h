#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HOHPKEKHBIN;

#define JCOPKMGPMOE_IKPBOEJIOFJ_COMPARE_OFFSET UNITYSDK_OFFSET(0x14FA7A00)
#define JCOPKMGPMOE_IKPBOEJIOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA7D80)

inline static constexpr unsigned int JCOPKMGPMOE_IKPBOEJIOFJ_TypeDefinitionIndex = 43554;

class JCOPKMGPMOE_IKPBOEJIOFJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOPKMGPMOE_IKPBOEJIOFJ__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::HOHPKEKHBIN* HAAEBCOBKFF, ::HOHPKEKHBIN* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::HOHPKEKHBIN*, ::HOHPKEKHBIN*))((::PBYTE)hIl2Cpp + JCOPKMGPMOE_IKPBOEJIOFJ_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
