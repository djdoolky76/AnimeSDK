#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define PFNPCHIOAMJ___C_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x173264F0)
#define PFNPCHIOAMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173264A0)
#define PFNPCHIOAMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173264E0)

inline static constexpr unsigned int PFNPCHIOAMJ___c_TypeDefinitionIndex = 83205;

class PFNPCHIOAMJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(PFNPCHIOAMJ___c_TypeDefinitionIndex)->GetStaticField(0x45960);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PFNPCHIOAMJ___c_TypeDefinitionIndex)->GetStaticField(0x45968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNPCHIOAMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JGOGKJFMBHB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ___C_JGOGKJFMBHB_OFFSET))(this);
	}
};
