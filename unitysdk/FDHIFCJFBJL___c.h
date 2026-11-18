#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FDHIFCJFBJL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x169C9D70)
#define FDHIFCJFBJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169C9D20)
#define FDHIFCJFBJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9D60)

inline static constexpr unsigned int FDHIFCJFBJL___c_TypeDefinitionIndex = 50536;

class FDHIFCJFBJL___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(FDHIFCJFBJL___c_TypeDefinitionIndex)->GetStaticField(0x408B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDHIFCJFBJL___c_TypeDefinitionIndex)->GetStaticField(0x408B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDHIFCJFBJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHIFCJFBJL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHIFCJFBJL___C_LPCHADDECLC_OFFSET))(this);
	}
};
