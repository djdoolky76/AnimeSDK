#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGGKOHLKNBP.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define GJDLKFAMLAC___C_BIELFIILIJB_OFFSET UNITYSDK_OFFSET(0x15F23810)
#define GJDLKFAMLAC___C_CIIOBCAGCLH_OFFSET UNITYSDK_OFFSET(0x15F237F0)
#define GJDLKFAMLAC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F237A0)
#define GJDLKFAMLAC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F237E0)

inline static constexpr unsigned int GJDLKFAMLAC___c_TypeDefinitionIndex = 39919;

class GJDLKFAMLAC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::OGGKOHLKNBP>** StaticGet___9__23_3()
	{
		return (::System::Comparison_1<::OGGKOHLKNBP>**)Il2CppClass::FromTypeDefinitionIndex(GJDLKFAMLAC___c_TypeDefinitionIndex)->GetStaticField(0x46370);
	}
	static ::System::Comparison_1<::OGGKOHLKNBP>** StaticGet___9__23_4()
	{
		return (::System::Comparison_1<::OGGKOHLKNBP>**)Il2CppClass::FromTypeDefinitionIndex(GJDLKFAMLAC___c_TypeDefinitionIndex)->GetStaticField(0x46378);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GJDLKFAMLAC___c_TypeDefinitionIndex)->GetStaticField(0x46380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJDLKFAMLAC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLKFAMLAC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CIIOBCAGCLH(::OGGKOHLKNBP EJCBEJMGFAJ, ::OGGKOHLKNBP EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::OGGKOHLKNBP, ::OGGKOHLKNBP))((::PBYTE)hIl2Cpp + GJDLKFAMLAC___C_CIIOBCAGCLH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 BIELFIILIJB(::OGGKOHLKNBP EBFCACIEKBC, ::OGGKOHLKNBP EJCBEJMGFAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::OGGKOHLKNBP, ::OGGKOHLKNBP))((::PBYTE)hIl2Cpp + GJDLKFAMLAC___C_BIELFIILIJB_OFFSET))(this, EBFCACIEKBC, EJCBEJMGFAJ);
	}
};
