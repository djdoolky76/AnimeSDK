#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LGKIBPDLJFH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15DF80C0)
#define LGKIBPDLJFH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DF8070)
#define LGKIBPDLJFH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF80B0)

inline static constexpr unsigned int LGKIBPDLJFH___c_TypeDefinitionIndex = 91979;

class LGKIBPDLJFH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LGKIBPDLJFH___c_TypeDefinitionIndex)->GetStaticField(0x38470);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LGKIBPDLJFH___c_TypeDefinitionIndex)->GetStaticField(0x38478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKIBPDLJFH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKIBPDLJFH___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKIBPDLJFH___C_LPCHADDECLC_OFFSET))(this);
	}
};
