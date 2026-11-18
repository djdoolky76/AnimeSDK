#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JCCLDBLABJL___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x19449C10)
#define JCCLDBLABJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19449BC0)
#define JCCLDBLABJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19449C00)

inline static constexpr unsigned int JCCLDBLABJL___c_TypeDefinitionIndex = 61096;

class JCCLDBLABJL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCCLDBLABJL___c_TypeDefinitionIndex)->GetStaticField(0x37FF0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JCCLDBLABJL___c_TypeDefinitionIndex)->GetStaticField(0x37FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCCLDBLABJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCLDBLABJL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCLDBLABJL___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
