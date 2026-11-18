#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KJAOLPHIHIC___C_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0xD3FD1D0)
#define KJAOLPHIHIC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3FD180)
#define KJAOLPHIHIC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FD1C0)

inline static constexpr unsigned int KJAOLPHIHIC___c_TypeDefinitionIndex = 88544;

class KJAOLPHIHIC___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KJAOLPHIHIC___c_TypeDefinitionIndex)->GetStaticField(0x329B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KJAOLPHIHIC___c_TypeDefinitionIndex)->GetStaticField(0x329B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAOLPHIHIC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOLPHIHIC___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath NFGBODGPBAN()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOLPHIHIC___C_NFGBODGPBAN_OFFSET))(this);
	}
};
