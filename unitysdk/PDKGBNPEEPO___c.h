#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PDKGBNPEEPO___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x136F3FC0)
#define PDKGBNPEEPO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F3F70)
#define PDKGBNPEEPO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136F3FB0)

inline static constexpr unsigned int PDKGBNPEEPO___c_TypeDefinitionIndex = 79371;

class PDKGBNPEEPO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PDKGBNPEEPO___c_TypeDefinitionIndex)->GetStaticField(0x45940);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(PDKGBNPEEPO___c_TypeDefinitionIndex)->GetStaticField(0x45948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKGBNPEEPO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGBNPEEPO___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKGBNPEEPO___C_LPCHADDECLC_OFFSET))(this);
	}
};
