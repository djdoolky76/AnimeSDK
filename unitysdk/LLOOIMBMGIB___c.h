#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LLOOIMBMGIB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15E08DE0)
#define LLOOIMBMGIB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E08D90)
#define LLOOIMBMGIB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E08DD0)

inline static constexpr unsigned int LLOOIMBMGIB___c_TypeDefinitionIndex = 89314;

class LLOOIMBMGIB___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LLOOIMBMGIB___c_TypeDefinitionIndex)->GetStaticField(0x50A00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLOOIMBMGIB___c_TypeDefinitionIndex)->GetStaticField(0x50A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOOIMBMGIB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOIMBMGIB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOIMBMGIB___C_LPCHADDECLC_OFFSET))(this);
	}
};
