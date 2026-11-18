#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LCFFKHFPKGD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xD41E5C0)
#define LCFFKHFPKGD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD41E570)
#define LCFFKHFPKGD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD41E5B0)

inline static constexpr unsigned int LCFFKHFPKGD___c_TypeDefinitionIndex = 65621;

class LCFFKHFPKGD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LCFFKHFPKGD___c_TypeDefinitionIndex)->GetStaticField(0x32A70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LCFFKHFPKGD___c_TypeDefinitionIndex)->GetStaticField(0x32A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFFKHFPKGD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFFKHFPKGD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFFKHFPKGD___C_LPCHADDECLC_OFFSET))(this);
	}
};
