#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LNOCBGKGKLC___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x11F24E10)
#define LNOCBGKGKLC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F24DC0)
#define LNOCBGKGKLC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F24E00)

inline static constexpr unsigned int LNOCBGKGKLC___c_TypeDefinitionIndex = 49217;

class LNOCBGKGKLC___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LNOCBGKGKLC___c_TypeDefinitionIndex)->GetStaticField(0x3E700);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LNOCBGKGKLC___c_TypeDefinitionIndex)->GetStaticField(0x3E708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNOCBGKGKLC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOCBGKGKLC___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOCBGKGKLC___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
