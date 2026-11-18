#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMCBEJIGFIN;
namespace System { template <typename T> class Comparison_1; }

#define MABDCMABEGN___C_AKCLGOEAFMH_OFFSET UNITYSDK_OFFSET(0x16C6E6A0)
#define MABDCMABEGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C6E650)
#define MABDCMABEGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6E690)

inline static constexpr unsigned int MABDCMABEGN___c_TypeDefinitionIndex = 62685;

class MABDCMABEGN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MABDCMABEGN___c_TypeDefinitionIndex)->GetStaticField(0x3BC00);
	}
	static ::System::Comparison_1<::LMCBEJIGFIN*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::LMCBEJIGFIN*>**)Il2CppClass::FromTypeDefinitionIndex(MABDCMABEGN___c_TypeDefinitionIndex)->GetStaticField(0x3BC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MABDCMABEGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABDCMABEGN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 AKCLGOEAFMH(::LMCBEJIGFIN* EJCBEJMGFAJ, ::LMCBEJIGFIN* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::LMCBEJIGFIN*, ::LMCBEJIGFIN*))((::PBYTE)hIl2Cpp + MABDCMABEGN___C_AKCLGOEAFMH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
