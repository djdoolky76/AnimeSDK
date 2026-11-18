#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BKBJCBADLJB___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x169F7D60)
#define BKBJCBADLJB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F7D10)
#define BKBJCBADLJB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F7D50)

inline static constexpr unsigned int BKBJCBADLJB___c_TypeDefinitionIndex = 47897;

class BKBJCBADLJB___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(BKBJCBADLJB___c_TypeDefinitionIndex)->GetStaticField(0x49760);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKBJCBADLJB___c_TypeDefinitionIndex)->GetStaticField(0x49768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBJCBADLJB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBJCBADLJB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBJCBADLJB___C_LPCHADDECLC_OFFSET))(this);
	}
};
