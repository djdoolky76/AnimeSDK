#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NOLIOLDBAEA___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x10DB0160)
#define NOLIOLDBAEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DB0110)
#define NOLIOLDBAEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB0150)

inline static constexpr unsigned int NOLIOLDBAEA___c_TypeDefinitionIndex = 75430;

class NOLIOLDBAEA___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(NOLIOLDBAEA___c_TypeDefinitionIndex)->GetStaticField(0x4C700);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOLIOLDBAEA___c_TypeDefinitionIndex)->GetStaticField(0x4C708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOLIOLDBAEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLIOLDBAEA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLIOLDBAEA___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
