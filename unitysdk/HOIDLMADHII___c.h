#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define HOIDLMADHII___C_PNFDKFMHEAC_OFFSET UNITYSDK_OFFSET(0x15387BD0)
#define HOIDLMADHII___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15387B80)
#define HOIDLMADHII___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15387BC0)

inline static constexpr unsigned int HOIDLMADHII___c_TypeDefinitionIndex = 38759;

class HOIDLMADHII___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOIDLMADHII___c_TypeDefinitionIndex)->GetStaticField(0x44340);
	}
	static ::System::Comparison_1<::System::Single>** StaticGet___9__50_0()
	{
		return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HOIDLMADHII___c_TypeDefinitionIndex)->GetStaticField(0x44348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOIDLMADHII___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIDLMADHII___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PNFDKFMHEAC(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOIDLMADHII___C_PNFDKFMHEAC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
