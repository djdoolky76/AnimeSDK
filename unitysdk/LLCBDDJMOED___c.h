#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LLCBDDJMOED___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15E06C50)
#define LLCBDDJMOED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E06C00)
#define LLCBDDJMOED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E06C40)

inline static constexpr unsigned int LLCBDDJMOED___c_TypeDefinitionIndex = 65351;

class LLCBDDJMOED___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LLCBDDJMOED___c_TypeDefinitionIndex)->GetStaticField(0x3E6F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLCBDDJMOED___c_TypeDefinitionIndex)->GetStaticField(0x3E6F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCBDDJMOED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBDDJMOED___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBDDJMOED___C_LPCHADDECLC_OFFSET))(this);
	}
};
