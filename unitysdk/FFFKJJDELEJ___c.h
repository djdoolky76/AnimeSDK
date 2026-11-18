#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define FFFKJJDELEJ___C_OPAEIGDPLPA_OFFSET UNITYSDK_OFFSET(0x11D72D10)
#define FFFKJJDELEJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D72CC0)
#define FFFKJJDELEJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D72D00)

inline static constexpr unsigned int FFFKJJDELEJ___c_TypeDefinitionIndex = 79297;

class FFFKJJDELEJ___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FFFKJJDELEJ___c_TypeDefinitionIndex)->GetStaticField(0x3DB50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFFKJJDELEJ___c_TypeDefinitionIndex)->GetStaticField(0x3DB58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFFKJJDELEJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKJJDELEJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OPAEIGDPLPA(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FFFKJJDELEJ___C_OPAEIGDPLPA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
