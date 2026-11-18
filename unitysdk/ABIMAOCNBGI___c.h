#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define ABIMAOCNBGI___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x154C9F00)
#define ABIMAOCNBGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154C9EB0)
#define ABIMAOCNBGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x154C9EF0)

inline static constexpr unsigned int ABIMAOCNBGI___c_TypeDefinitionIndex = 63873;

class ABIMAOCNBGI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ABIMAOCNBGI___c_TypeDefinitionIndex)->GetStaticField(0x36980);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(ABIMAOCNBGI___c_TypeDefinitionIndex)->GetStaticField(0x36988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABIMAOCNBGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIMAOCNBGI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIMAOCNBGI___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
