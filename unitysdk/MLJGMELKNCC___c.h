#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDOGFPCLFLM;
namespace System { template <typename T> class Comparison_1; }

#define MLJGMELKNCC___C_OFAMCIMDGDE_OFFSET UNITYSDK_OFFSET(0x174A7120)
#define MLJGMELKNCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A70D0)
#define MLJGMELKNCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7110)

inline static constexpr unsigned int MLJGMELKNCC___c_TypeDefinitionIndex = 78692;

class MLJGMELKNCC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MLJGMELKNCC___c_TypeDefinitionIndex)->GetStaticField(0x32D00);
	}
	static ::System::Comparison_1<::HDOGFPCLFLM*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::HDOGFPCLFLM*>**)Il2CppClass::FromTypeDefinitionIndex(MLJGMELKNCC___c_TypeDefinitionIndex)->GetStaticField(0x32D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJGMELKNCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJGMELKNCC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OFAMCIMDGDE(::HDOGFPCLFLM* EJCBEJMGFAJ, ::HDOGFPCLFLM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::HDOGFPCLFLM*, ::HDOGFPCLFLM*))((::PBYTE)hIl2Cpp + MLJGMELKNCC___C_OFAMCIMDGDE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
