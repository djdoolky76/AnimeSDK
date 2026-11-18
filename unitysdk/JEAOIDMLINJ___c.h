#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JEAOIDMLINJ___C_ILFJHJHJMNB_OFFSET UNITYSDK_OFFSET(0x198A2A40)
#define JEAOIDMLINJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A29F0)
#define JEAOIDMLINJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A2A30)

inline static constexpr unsigned int JEAOIDMLINJ___c_TypeDefinitionIndex = 69956;

class JEAOIDMLINJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JEAOIDMLINJ___c_TypeDefinitionIndex)->GetStaticField(0x4D3B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JEAOIDMLINJ___c_TypeDefinitionIndex)->GetStaticField(0x4D3B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEAOIDMLINJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ILFJHJHJMNB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAOIDMLINJ___C_ILFJHJHJMNB_OFFSET))(this);
	}
};
