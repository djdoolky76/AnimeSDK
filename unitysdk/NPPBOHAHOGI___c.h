#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NPPBOHAHOGI___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0xFB37720)
#define NPPBOHAHOGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB376D0)
#define NPPBOHAHOGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB37710)

inline static constexpr unsigned int NPPBOHAHOGI___c_TypeDefinitionIndex = 90535;

class NPPBOHAHOGI___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPPBOHAHOGI___c_TypeDefinitionIndex)->GetStaticField(0x51A90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPPBOHAHOGI___c_TypeDefinitionIndex)->GetStaticField(0x51A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPBOHAHOGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBOHAHOGI___C__CTOR_OFFSET))(this);
	}

	::System::Boolean JHMPNJLFHKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPBOHAHOGI___C_JHMPNJLFHKC_OFFSET))(this);
	}
};
