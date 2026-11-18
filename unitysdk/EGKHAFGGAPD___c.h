#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKDDEPIPKOH;
namespace System { template <typename T> class Comparison_1; }

#define EGKHAFGGAPD___C_DLBJPPFCPGG_OFFSET UNITYSDK_OFFSET(0x19AE49A0)
#define EGKHAFGGAPD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AE4950)
#define EGKHAFGGAPD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE4990)

inline static constexpr unsigned int EGKHAFGGAPD___c_TypeDefinitionIndex = 14922;

class EGKHAFGGAPD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGKHAFGGAPD___c_TypeDefinitionIndex)->GetStaticField(0x7900);
	}
	static ::System::Comparison_1<::CKDDEPIPKOH*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::CKDDEPIPKOH*>**)Il2CppClass::FromTypeDefinitionIndex(EGKHAFGGAPD___c_TypeDefinitionIndex)->GetStaticField(0x7908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGKHAFGGAPD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKHAFGGAPD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DLBJPPFCPGG(::CKDDEPIPKOH* EJCBEJMGFAJ, ::CKDDEPIPKOH* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::CKDDEPIPKOH*, ::CKDDEPIPKOH*))((::PBYTE)hIl2Cpp + EGKHAFGGAPD___C_DLBJPPFCPGG_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
