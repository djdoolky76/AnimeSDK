#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CIHJDFPCGNI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x145C5BC0)
#define CIHJDFPCGNI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145C5B70)
#define CIHJDFPCGNI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145C5BB0)

inline static constexpr unsigned int CIHJDFPCGNI___c_TypeDefinitionIndex = 87610;

class CIHJDFPCGNI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CIHJDFPCGNI___c_TypeDefinitionIndex)->GetStaticField(0x3A650);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CIHJDFPCGNI___c_TypeDefinitionIndex)->GetStaticField(0x3A658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIHJDFPCGNI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHJDFPCGNI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHJDFPCGNI___C_LPCHADDECLC_OFFSET))(this);
	}
};
