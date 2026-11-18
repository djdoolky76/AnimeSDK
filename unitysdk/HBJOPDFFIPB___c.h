#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHEIAPDAGEH;
namespace System { template <typename T> class Comparison_1; }

#define HBJOPDFFIPB___C_JDPAAOCBCGF_OFFSET UNITYSDK_OFFSET(0x14D0B6B0)
#define HBJOPDFFIPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D0B660)
#define HBJOPDFFIPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0B6A0)

inline static constexpr unsigned int HBJOPDFFIPB___c_TypeDefinitionIndex = 80132;

class HBJOPDFFIPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HBJOPDFFIPB___c_TypeDefinitionIndex)->GetStaticField(0x49CB0);
	}
	static ::System::Comparison_1<::DHEIAPDAGEH*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::DHEIAPDAGEH*>**)Il2CppClass::FromTypeDefinitionIndex(HBJOPDFFIPB___c_TypeDefinitionIndex)->GetStaticField(0x49CB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJOPDFFIPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJOPDFFIPB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JDPAAOCBCGF(::DHEIAPDAGEH* EJCBEJMGFAJ, ::DHEIAPDAGEH* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::DHEIAPDAGEH*, ::DHEIAPDAGEH*))((::PBYTE)hIl2Cpp + HBJOPDFFIPB___C_JDPAAOCBCGF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
