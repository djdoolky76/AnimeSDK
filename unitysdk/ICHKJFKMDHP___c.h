#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ICHKJFKMDHP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1A396FC0)
#define ICHKJFKMDHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A396F70)
#define ICHKJFKMDHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A396FB0)

inline static constexpr unsigned int ICHKJFKMDHP___c_TypeDefinitionIndex = 57344;

class ICHKJFKMDHP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ICHKJFKMDHP___c_TypeDefinitionIndex)->GetStaticField(0x4BB70);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ICHKJFKMDHP___c_TypeDefinitionIndex)->GetStaticField(0x4BB78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICHKJFKMDHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHKJFKMDHP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHKJFKMDHP___C_LPCHADDECLC_OFFSET))(this);
	}
};
