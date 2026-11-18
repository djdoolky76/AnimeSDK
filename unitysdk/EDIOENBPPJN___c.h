#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define EDIOENBPPJN___C_MFFGFOFAJLI_OFFSET UNITYSDK_OFFSET(0x148CCCF0)
#define EDIOENBPPJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148CCCA0)
#define EDIOENBPPJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148CCCE0)

inline static constexpr unsigned int EDIOENBPPJN___c_TypeDefinitionIndex = 68493;

class EDIOENBPPJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EDIOENBPPJN___c_TypeDefinitionIndex)->GetStaticField(0x3AAE0);
	}
	static ::System::Comparison_1<::System::DateTime>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(EDIOENBPPJN___c_TypeDefinitionIndex)->GetStaticField(0x3AAE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDIOENBPPJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIOENBPPJN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MFFGFOFAJLI(::System::DateTime EJCBEJMGFAJ, ::System::DateTime EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + EDIOENBPPJN___C_MFFGFOFAJLI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
