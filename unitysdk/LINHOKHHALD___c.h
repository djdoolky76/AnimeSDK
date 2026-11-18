#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define LINHOKHHALD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1A60D5C0)
#define LINHOKHHALD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60D570)
#define LINHOKHHALD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60D5B0)

inline static constexpr unsigned int LINHOKHHALD___c_TypeDefinitionIndex = 92404;

class LINHOKHHALD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LINHOKHHALD___c_TypeDefinitionIndex)->GetStaticField(0x41660);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(LINHOKHHALD___c_TypeDefinitionIndex)->GetStaticField(0x41668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LINHOKHHALD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINHOKHHALD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LINHOKHHALD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
