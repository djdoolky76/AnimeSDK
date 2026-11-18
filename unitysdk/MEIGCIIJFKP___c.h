#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MEIGCIIJFKP___C_APIPOELHMBP_OFFSET UNITYSDK_OFFSET(0x177B3710)
#define MEIGCIIJFKP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177B36C0)
#define MEIGCIIJFKP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3700)

inline static constexpr unsigned int MEIGCIIJFKP___c_TypeDefinitionIndex = 76491;

class MEIGCIIJFKP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MEIGCIIJFKP___c_TypeDefinitionIndex)->GetStaticField(0x3E7B0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(MEIGCIIJFKP___c_TypeDefinitionIndex)->GetStaticField(0x3E7B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEIGCIIJFKP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGCIIJFKP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath APIPOELHMBP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGCIIJFKP___C_APIPOELHMBP_OFFSET))(this);
	}
};
