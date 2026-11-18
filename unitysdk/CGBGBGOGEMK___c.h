#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CGBGBGOGEMK_FPNPNNAIPDI.h"

#define CGBGBGOGEMK___C_NHPFCOELFEO_OFFSET UNITYSDK_OFFSET(0x14799AE0)
#define CGBGBGOGEMK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14799A90)
#define CGBGBGOGEMK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14799AD0)

inline static constexpr unsigned int CGBGBGOGEMK___c_TypeDefinitionIndex = 88857;

class CGBGBGOGEMK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK___c_TypeDefinitionIndex)->GetStaticField(0x47C30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBGBGOGEMK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NHPFCOELFEO(::CGBGBGOGEMK_FPNPNNAIPDI EJCBEJMGFAJ, ::CGBGBGOGEMK_FPNPNNAIPDI EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CGBGBGOGEMK_FPNPNNAIPDI, ::CGBGBGOGEMK_FPNPNNAIPDI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK___C_NHPFCOELFEO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
