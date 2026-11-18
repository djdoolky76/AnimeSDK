#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CEDBLIJGCNH___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x169451B0)
#define CEDBLIJGCNH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16945160)
#define CEDBLIJGCNH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169451A0)

inline static constexpr unsigned int CEDBLIJGCNH___c_TypeDefinitionIndex = 63535;

class CEDBLIJGCNH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CEDBLIJGCNH___c_TypeDefinitionIndex)->GetStaticField(0x45D50);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CEDBLIJGCNH___c_TypeDefinitionIndex)->GetStaticField(0x45D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDBLIJGCNH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBLIJGCNH___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBLIJGCNH___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
