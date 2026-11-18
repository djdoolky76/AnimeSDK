#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HLPONKGFMCA___C_ENDDCPKNNNP_OFFSET UNITYSDK_OFFSET(0x17E5FA50)
#define HLPONKGFMCA___C_INACMLCKNNB_OFFSET UNITYSDK_OFFSET(0x17E5FB10)
#define HLPONKGFMCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5FA00)
#define HLPONKGFMCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5FA40)

inline static constexpr unsigned int HLPONKGFMCA___c_TypeDefinitionIndex = 52894;

class HLPONKGFMCA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HLPONKGFMCA___c_TypeDefinitionIndex)->GetStaticField(0x37B40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLPONKGFMCA___c_TypeDefinitionIndex)->GetStaticField(0x37B48);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HLPONKGFMCA___c_TypeDefinitionIndex)->GetStaticField(0x37B50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPONKGFMCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean ENDDCPKNNNP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA___C_ENDDCPKNNNP_OFFSET))(this);
	}

	::System::Boolean INACMLCKNNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA___C_INACMLCKNNB_OFFSET))(this);
	}
};
