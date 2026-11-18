#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DMFLBONOFGG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x148B3D80)
#define DMFLBONOFGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B3D30)
#define DMFLBONOFGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148B3D70)

inline static constexpr unsigned int DMFLBONOFGG___c_TypeDefinitionIndex = 48268;

class DMFLBONOFGG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMFLBONOFGG___c_TypeDefinitionIndex)->GetStaticField(0x3A9C0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(DMFLBONOFGG___c_TypeDefinitionIndex)->GetStaticField(0x3A9C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFLBONOFGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFLBONOFGG___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFLBONOFGG___C_LPCHADDECLC_OFFSET))(this);
	}
};
