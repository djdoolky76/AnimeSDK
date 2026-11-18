#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HIPBOICAJMP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x140BA320)
#define HIPBOICAJMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140BA2D0)
#define HIPBOICAJMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140BA310)

inline static constexpr unsigned int HIPBOICAJMP___c_TypeDefinitionIndex = 75092;

class HIPBOICAJMP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HIPBOICAJMP___c_TypeDefinitionIndex)->GetStaticField(0x3DF00);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(HIPBOICAJMP___c_TypeDefinitionIndex)->GetStaticField(0x3DF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPBOICAJMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPBOICAJMP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPBOICAJMP___C_LPCHADDECLC_OFFSET))(this);
	}
};
