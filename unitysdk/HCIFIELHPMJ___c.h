#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCIFIELHPMJ;

#define HCIFIELHPMJ___C_CHKGKFAHJJK_OFFSET UNITYSDK_OFFSET(0x1FFC57C0)
#define HCIFIELHPMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFC5770)
#define HCIFIELHPMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFC57B0)

inline static constexpr unsigned int HCIFIELHPMJ___c_TypeDefinitionIndex = 18281;

class HCIFIELHPMJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HCIFIELHPMJ___c_TypeDefinitionIndex)->GetStaticField(0x8570);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIFIELHPMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFIELHPMJ___C__CTOR_OFFSET))(this);
	}

	::HCIFIELHPMJ* CHKGKFAHJJK()
	{
		return ((::HCIFIELHPMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFIELHPMJ___C_CHKGKFAHJJK_OFFSET))(this);
	}
};
