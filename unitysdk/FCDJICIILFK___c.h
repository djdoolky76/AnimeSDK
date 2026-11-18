#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FCDJICIILFK___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x131FF0A0)
#define FCDJICIILFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131FF050)
#define FCDJICIILFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131FF090)

inline static constexpr unsigned int FCDJICIILFK___c_TypeDefinitionIndex = 89899;

class FCDJICIILFK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FCDJICIILFK___c_TypeDefinitionIndex)->GetStaticField(0x318D0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(FCDJICIILFK___c_TypeDefinitionIndex)->GetStaticField(0x318D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCDJICIILFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDJICIILFK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDJICIILFK___C_LPCHADDECLC_OFFSET))(this);
	}
};
