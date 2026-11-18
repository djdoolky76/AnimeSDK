#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BDKBJNCGCDI___C_HNKMNHGAGDM_OFFSET UNITYSDK_OFFSET(0x1506A7D0)
#define BDKBJNCGCDI___C_JINPDDJFIJK_OFFSET UNITYSDK_OFFSET(0x1506A9B0)
#define BDKBJNCGCDI___C_PCHLLCCLHIA_OFFSET UNITYSDK_OFFSET(0x1506A8C0)
#define BDKBJNCGCDI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1506A780)
#define BDKBJNCGCDI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1506A7C0)

inline static constexpr unsigned int BDKBJNCGCDI___c_TypeDefinitionIndex = 63743;

class BDKBJNCGCDI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BDKBJNCGCDI___c_TypeDefinitionIndex)->GetStaticField(0x50020);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDKBJNCGCDI___c_TypeDefinitionIndex)->GetStaticField(0x50028);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BDKBJNCGCDI___c_TypeDefinitionIndex)->GetStaticField(0x50030);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BDKBJNCGCDI___c_TypeDefinitionIndex)->GetStaticField(0x50038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDKBJNCGCDI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HNKMNHGAGDM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI___C_HNKMNHGAGDM_OFFSET))(this);
	}

	::System::Boolean PCHLLCCLHIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI___C_PCHLLCCLHIA_OFFSET))(this);
	}

	::System::Boolean JINPDDJFIJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKBJNCGCDI___C_JINPDDJFIJK_OFFSET))(this);
	}
};
