#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HGNJIBEELAD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x17A45CE0)
#define HGNJIBEELAD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A45C90)
#define HGNJIBEELAD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A45CD0)

inline static constexpr unsigned int HGNJIBEELAD___c_TypeDefinitionIndex = 55197;

class HGNJIBEELAD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(HGNJIBEELAD___c_TypeDefinitionIndex)->GetStaticField(0x40B90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HGNJIBEELAD___c_TypeDefinitionIndex)->GetStaticField(0x40B98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGNJIBEELAD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNJIBEELAD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNJIBEELAD___C_LPCHADDECLC_OFFSET))(this);
	}
};
