#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KCAHHNLCIHA___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1514C060)
#define KCAHHNLCIHA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1514C010)
#define KCAHHNLCIHA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C050)

inline static constexpr unsigned int KCAHHNLCIHA___c_TypeDefinitionIndex = 84270;

class KCAHHNLCIHA___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KCAHHNLCIHA___c_TypeDefinitionIndex)->GetStaticField(0x4A060);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCAHHNLCIHA___c_TypeDefinitionIndex)->GetStaticField(0x4A068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCAHHNLCIHA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAHHNLCIHA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAHHNLCIHA___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
