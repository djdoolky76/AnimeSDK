#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FDCFKEPLDFI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x14ABFD60)
#define FDCFKEPLDFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ABFD10)
#define FDCFKEPLDFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABFD50)

inline static constexpr unsigned int FDCFKEPLDFI___c_TypeDefinitionIndex = 53028;

class FDCFKEPLDFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDCFKEPLDFI___c_TypeDefinitionIndex)->GetStaticField(0x434A0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(FDCFKEPLDFI___c_TypeDefinitionIndex)->GetStaticField(0x434A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCFKEPLDFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFKEPLDFI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFKEPLDFI___C_LPCHADDECLC_OFFSET))(this);
	}
};
