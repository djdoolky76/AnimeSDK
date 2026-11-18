#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DNAGMHIBOFA___C_INMCNHDKEIM_OFFSET UNITYSDK_OFFSET(0x7FD3660)
#define DNAGMHIBOFA___C_KLINCJHKLNN_OFFSET UNITYSDK_OFFSET(0x7FD3650)
#define DNAGMHIBOFA___C_OAGEEPIHJPL_OFFSET UNITYSDK_OFFSET(0x7FD3630)
#define DNAGMHIBOFA___C_OLECCMHPFGC_OFFSET UNITYSDK_OFFSET(0x7FD3640)
#define DNAGMHIBOFA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FD35E0)
#define DNAGMHIBOFA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD3620)

inline static constexpr unsigned int DNAGMHIBOFA___c_TypeDefinitionIndex = 56366;

class DNAGMHIBOFA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__252_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DNAGMHIBOFA___c_TypeDefinitionIndex)->GetStaticField(0x37390);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__69_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DNAGMHIBOFA___c_TypeDefinitionIndex)->GetStaticField(0x37398);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DNAGMHIBOFA___c_TypeDefinitionIndex)->GetStaticField(0x373A0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__252_1()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DNAGMHIBOFA___c_TypeDefinitionIndex)->GetStaticField(0x373A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OAGEEPIHJPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C_OAGEEPIHJPL_OFFSET))(this);
	}

	::System::Boolean OLECCMHPFGC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C_OLECCMHPFGC_OFFSET))(this);
	}

	::System::Boolean KLINCJHKLNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C_KLINCJHKLNN_OFFSET))(this);
	}

	::System::Void INMCNHDKEIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA___C_INMCNHDKEIM_OFFSET))(this);
	}
};
