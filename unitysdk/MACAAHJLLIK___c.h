#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MACAAHJLLIK___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x16C6E730)
#define MACAAHJLLIK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C6E6E0)
#define MACAAHJLLIK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6E720)

inline static constexpr unsigned int MACAAHJLLIK___c_TypeDefinitionIndex = 49944;

class MACAAHJLLIK___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(MACAAHJLLIK___c_TypeDefinitionIndex)->GetStaticField(0x3BC10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MACAAHJLLIK___c_TypeDefinitionIndex)->GetStaticField(0x3BC18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACAAHJLLIK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACAAHJLLIK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MACAAHJLLIK___C_LPCHADDECLC_OFFSET))(this);
	}
};
