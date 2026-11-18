#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PBLHCBBMJJN___C_CMDIIIGPJPH_OFFSET UNITYSDK_OFFSET(0x14B52A10)
#define PBLHCBBMJJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B529C0)
#define PBLHCBBMJJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B52A00)

inline static constexpr unsigned int PBLHCBBMJJN___c_TypeDefinitionIndex = 91942;

class PBLHCBBMJJN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Single>** StaticGet___9__17_0()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PBLHCBBMJJN___c_TypeDefinitionIndex)->GetStaticField(0x3FA50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBLHCBBMJJN___c_TypeDefinitionIndex)->GetStaticField(0x3FA58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBLHCBBMJJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLHCBBMJJN___C__CTOR_OFFSET))(this);
	}

	::System::Single CMDIIIGPJPH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLHCBBMJJN___C_CMDIIIGPJPH_OFFSET))(this);
	}
};
