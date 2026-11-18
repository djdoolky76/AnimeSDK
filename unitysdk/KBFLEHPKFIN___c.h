#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define KBFLEHPKFIN___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x157DDA80)
#define KBFLEHPKFIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157DDA30)
#define KBFLEHPKFIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157DDA70)

inline static constexpr unsigned int KBFLEHPKFIN___c_TypeDefinitionIndex = 75935;

class KBFLEHPKFIN___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KBFLEHPKFIN___c_TypeDefinitionIndex)->GetStaticField(0x509C0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBFLEHPKFIN___c_TypeDefinitionIndex)->GetStaticField(0x509C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBFLEHPKFIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFLEHPKFIN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFLEHPKFIN___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
