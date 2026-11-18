#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define BDCOCPBIOGB___C_PIHLDDFPINO_OFFSET UNITYSDK_OFFSET(0x1822A630)
#define BDCOCPBIOGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822A5E0)
#define BDCOCPBIOGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1822A620)

inline static constexpr unsigned int BDCOCPBIOGB___c_TypeDefinitionIndex = 69350;

class BDCOCPBIOGB___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::HFIAMAJCAOA>** StaticGet___9__58_0()
	{
		return (::System::Converter_2<::System::Int32, ::HFIAMAJCAOA>**)Il2CppClass::FromTypeDefinitionIndex(BDCOCPBIOGB___c_TypeDefinitionIndex)->GetStaticField(0x3A420);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDCOCPBIOGB___c_TypeDefinitionIndex)->GetStaticField(0x3A428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDCOCPBIOGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCOCPBIOGB___C__CTOR_OFFSET))(this);
	}

	::HFIAMAJCAOA PIHLDDFPINO(::System::Int32 HAAEBCOBKFF)
	{
		return ((::HFIAMAJCAOA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDCOCPBIOGB___C_PIHLDDFPINO_OFFSET))(this, HAAEBCOBKFF);
	}
};
