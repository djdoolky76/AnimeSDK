#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define FFINMAFFKPL___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x14294600)
#define FFINMAFFKPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142945B0)
#define FFINMAFFKPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142945F0)

inline static constexpr unsigned int FFINMAFFKPL___c_TypeDefinitionIndex = 74891;

class FFINMAFFKPL___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(FFINMAFFKPL___c_TypeDefinitionIndex)->GetStaticField(0x3AC90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FFINMAFFKPL___c_TypeDefinitionIndex)->GetStaticField(0x3AC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFINMAFFKPL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINMAFFKPL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINMAFFKPL___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
