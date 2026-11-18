#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DIGFNKCPEIN___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12086170)
#define DIGFNKCPEIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12086120)
#define DIGFNKCPEIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12086160)

inline static constexpr unsigned int DIGFNKCPEIN___c_TypeDefinitionIndex = 46818;

class DIGFNKCPEIN___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(DIGFNKCPEIN___c_TypeDefinitionIndex)->GetStaticField(0x431B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DIGFNKCPEIN___c_TypeDefinitionIndex)->GetStaticField(0x431B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGFNKCPEIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGFNKCPEIN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGFNKCPEIN___C_LPCHADDECLC_OFFSET))(this);
	}
};
