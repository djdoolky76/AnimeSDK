#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define FJDPGLELBND___C_JGOEDFPAGJC_OFFSET UNITYSDK_OFFSET(0x116B63E0)
#define FJDPGLELBND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116B6390)
#define FJDPGLELBND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116B63D0)

inline static constexpr unsigned int FJDPGLELBND___c_TypeDefinitionIndex = 49832;

class FJDPGLELBND___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__7_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FJDPGLELBND___c_TypeDefinitionIndex)->GetStaticField(0x408F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FJDPGLELBND___c_TypeDefinitionIndex)->GetStaticField(0x408F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJDPGLELBND___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDPGLELBND___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 JGOEDFPAGJC(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJDPGLELBND___C_JGOEDFPAGJC_OFFSET))(this, HAAEBCOBKFF);
	}
};
