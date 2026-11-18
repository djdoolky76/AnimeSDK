#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDOBLDMEGB;
namespace System { template <typename T> class Comparison_1; }

#define EBHIBDPOCGG___C_MOADLMFIKGC_OFFSET UNITYSDK_OFFSET(0x1ADCF2B0)
#define EBHIBDPOCGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADCF260)
#define EBHIBDPOCGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCF2A0)

inline static constexpr unsigned int EBHIBDPOCGG___c_TypeDefinitionIndex = 10416;

class EBHIBDPOCGG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EBHIBDPOCGG___c_TypeDefinitionIndex)->GetStaticField(0x7600);
	}
	static ::System::Comparison_1<::BPDOBLDMEGB*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::BPDOBLDMEGB*>**)Il2CppClass::FromTypeDefinitionIndex(EBHIBDPOCGG___c_TypeDefinitionIndex)->GetStaticField(0x7608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBHIBDPOCGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIBDPOCGG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MOADLMFIKGC(::BPDOBLDMEGB* EJCBEJMGFAJ, ::BPDOBLDMEGB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::BPDOBLDMEGB*, ::BPDOBLDMEGB*))((::PBYTE)hIl2Cpp + EBHIBDPOCGG___C_MOADLMFIKGC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
