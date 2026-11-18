#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MPJGAMBCHDM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x18B5FC50)
#define MPJGAMBCHDM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5FC00)
#define MPJGAMBCHDM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5FC40)

inline static constexpr unsigned int MPJGAMBCHDM___c_TypeDefinitionIndex = 58489;

class MPJGAMBCHDM___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(MPJGAMBCHDM___c_TypeDefinitionIndex)->GetStaticField(0x46B40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MPJGAMBCHDM___c_TypeDefinitionIndex)->GetStaticField(0x46B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPJGAMBCHDM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJGAMBCHDM___C_LPCHADDECLC_OFFSET))(this);
	}
};
