#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HLBOKPNANDP___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x14D33260)
#define HLBOKPNANDP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D33210)
#define HLBOKPNANDP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33250)

inline static constexpr unsigned int HLBOKPNANDP___c_TypeDefinitionIndex = 48412;

class HLBOKPNANDP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLBOKPNANDP___c_TypeDefinitionIndex)->GetStaticField(0x48040);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(HLBOKPNANDP___c_TypeDefinitionIndex)->GetStaticField(0x48048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBOKPNANDP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOKPNANDP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath KJIMAGGPDCB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOKPNANDP___C_KJIMAGGPDCB_OFFSET))(this);
	}
};
