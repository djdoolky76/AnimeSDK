#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GOHLMAECEKP___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13DF8880)
#define GOHLMAECEKP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DF8830)
#define GOHLMAECEKP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF8870)

inline static constexpr unsigned int GOHLMAECEKP___c_TypeDefinitionIndex = 60077;

class GOHLMAECEKP___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(GOHLMAECEKP___c_TypeDefinitionIndex)->GetStaticField(0x40AF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GOHLMAECEKP___c_TypeDefinitionIndex)->GetStaticField(0x40AF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOHLMAECEKP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHLMAECEKP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHLMAECEKP___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
