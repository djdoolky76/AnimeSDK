#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define AOENILNKACO___C_DCBBFGMHDPJ_OFFSET UNITYSDK_OFFSET(0x1266FDA0)
#define AOENILNKACO___C_FDNIFJAGMBC_OFFSET UNITYSDK_OFFSET(0x1266FD90)
#define AOENILNKACO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1266FD40)
#define AOENILNKACO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1266FD80)

inline static constexpr unsigned int AOENILNKACO___c_TypeDefinitionIndex = 66346;

class AOENILNKACO___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_5()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AOENILNKACO___c_TypeDefinitionIndex)->GetStaticField(0x30B00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AOENILNKACO___c_TypeDefinitionIndex)->GetStaticField(0x30B08);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_9()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AOENILNKACO___c_TypeDefinitionIndex)->GetStaticField(0x30B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOENILNKACO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOENILNKACO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean FDNIFJAGMBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOENILNKACO___C_FDNIFJAGMBC_OFFSET))(this);
	}

	::System::Boolean DCBBFGMHDPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOENILNKACO___C_DCBBFGMHDPJ_OFFSET))(this);
	}
};
