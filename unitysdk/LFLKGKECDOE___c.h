#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LFLKGKECDOE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x11F08BD0)
#define LFLKGKECDOE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F08B80)
#define LFLKGKECDOE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F08BC0)

inline static constexpr unsigned int LFLKGKECDOE___c_TypeDefinitionIndex = 92943;

class LFLKGKECDOE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LFLKGKECDOE___c_TypeDefinitionIndex)->GetStaticField(0x3E650);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LFLKGKECDOE___c_TypeDefinitionIndex)->GetStaticField(0x3E658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLKGKECDOE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE___C_LPCHADDECLC_OFFSET))(this);
	}
};
