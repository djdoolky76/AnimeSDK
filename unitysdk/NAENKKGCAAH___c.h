#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
namespace System { template <typename T> class Func_1; }

#define NAENKKGCAAH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x120DD2E0)
#define NAENKKGCAAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120DD290)
#define NAENKKGCAAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120DD2D0)

inline static constexpr unsigned int NAENKKGCAAH___c_TypeDefinitionIndex = 83546;

class NAENKKGCAAH___c : public ::System::Object
{
public:
	static ::System::Func_1<::ConfigMainCityObject*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::ConfigMainCityObject*>**)Il2CppClass::FromTypeDefinitionIndex(NAENKKGCAAH___c_TypeDefinitionIndex)->GetStaticField(0x4AEE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NAENKKGCAAH___c_TypeDefinitionIndex)->GetStaticField(0x4AEE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAENKKGCAAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENKKGCAAH___C__CTOR_OFFSET))(this);
	}

	::ConfigMainCityObject* LPCHADDECLC()
	{
		return ((::ConfigMainCityObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENKKGCAAH___C_LPCHADDECLC_OFFSET))(this);
	}
};
