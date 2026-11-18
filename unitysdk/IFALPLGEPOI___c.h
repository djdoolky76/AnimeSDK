#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define IFALPLGEPOI___C_EAHPOMPCGKK_OFFSET UNITYSDK_OFFSET(0x1013A860)
#define IFALPLGEPOI___C_GJGMBCFNNAJ_OFFSET UNITYSDK_OFFSET(0x1013A730)
#define IFALPLGEPOI___C_PCHOMFOOPKL_OFFSET UNITYSDK_OFFSET(0x1013A8D0)
#define IFALPLGEPOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1013A6E0)
#define IFALPLGEPOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1013A720)

inline static constexpr unsigned int IFALPLGEPOI___c_TypeDefinitionIndex = 57665;

class IFALPLGEPOI___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__52_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IFALPLGEPOI___c_TypeDefinitionIndex)->GetStaticField(0x3B280);
	}
	static ::System::Action** StaticGet___9__32_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IFALPLGEPOI___c_TypeDefinitionIndex)->GetStaticField(0x3B288);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFALPLGEPOI___c_TypeDefinitionIndex)->GetStaticField(0x3B290);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__20_6()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(IFALPLGEPOI___c_TypeDefinitionIndex)->GetStaticField(0x3B298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFALPLGEPOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI___C__CTOR_OFFSET))(this);
	}

	::System::Void GJGMBCFNNAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI___C_GJGMBCFNNAJ_OFFSET))(this);
	}

	::Foundation::AssetPath EAHPOMPCGKK()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI___C_EAHPOMPCGKK_OFFSET))(this);
	}

	::System::Void PCHOMFOOPKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFALPLGEPOI___C_PCHOMFOOPKL_OFFSET))(this);
	}
};
