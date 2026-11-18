#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LHBEEJPCLKL___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x16C506A0)
#define LHBEEJPCLKL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C50650)
#define LHBEEJPCLKL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50690)

inline static constexpr unsigned int LHBEEJPCLKL___c_TypeDefinitionIndex = 83827;

class LHBEEJPCLKL___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LHBEEJPCLKL___c_TypeDefinitionIndex)->GetStaticField(0x384A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LHBEEJPCLKL___c_TypeDefinitionIndex)->GetStaticField(0x384A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBEEJPCLKL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBEEJPCLKL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath LPCHADDECLC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBEEJPCLKL___C_LPCHADDECLC_OFFSET))(this);
	}
};
