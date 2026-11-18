#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define EGCMFFPJEDA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xFDDD470)
#define EGCMFFPJEDA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDDD420)
#define EGCMFFPJEDA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDD460)

inline static constexpr unsigned int EGCMFFPJEDA___c_TypeDefinitionIndex = 43882;

class EGCMFFPJEDA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGCMFFPJEDA___c_TypeDefinitionIndex)->GetStaticField(0x47DD0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(EGCMFFPJEDA___c_TypeDefinitionIndex)->GetStaticField(0x47DD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGCMFFPJEDA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMFFPJEDA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMFFPJEDA___C_LPCHADDECLC_OFFSET))(this);
	}
};
