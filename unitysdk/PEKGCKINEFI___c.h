#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PEKGCKINEFI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xFDA9AA0)
#define PEKGCKINEFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDA9A50)
#define PEKGCKINEFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA9A90)

inline static constexpr unsigned int PEKGCKINEFI___c_TypeDefinitionIndex = 45916;

class PEKGCKINEFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PEKGCKINEFI___c_TypeDefinitionIndex)->GetStaticField(0x36280);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(PEKGCKINEFI___c_TypeDefinitionIndex)->GetStaticField(0x36288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEKGCKINEFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKGCKINEFI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKGCKINEFI___C_LPCHADDECLC_OFFSET))(this);
	}
};
