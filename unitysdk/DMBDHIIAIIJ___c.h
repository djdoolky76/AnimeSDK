#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DMBDHIIAIIJ___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x149BC540)
#define DMBDHIIAIIJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149BC4F0)
#define DMBDHIIAIIJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149BC530)

inline static constexpr unsigned int DMBDHIIAIIJ___c_TypeDefinitionIndex = 62922;

class DMBDHIIAIIJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMBDHIIAIIJ___c_TypeDefinitionIndex)->GetStaticField(0x31520);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(DMBDHIIAIIJ___c_TypeDefinitionIndex)->GetStaticField(0x31528);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBDHIIAIIJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBDHIIAIIJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBDHIIAIIJ___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
