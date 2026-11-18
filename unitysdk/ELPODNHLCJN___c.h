#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ELPODNHLCJN___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xFE208C0)
#define ELPODNHLCJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE20870)
#define ELPODNHLCJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFE208B0)

inline static constexpr unsigned int ELPODNHLCJN___c_TypeDefinitionIndex = 43141;

class ELPODNHLCJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ELPODNHLCJN___c_TypeDefinitionIndex)->GetStaticField(0x47ED0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ELPODNHLCJN___c_TypeDefinitionIndex)->GetStaticField(0x47ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPODNHLCJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN___C_LPCHADDECLC_OFFSET))(this);
	}
};
