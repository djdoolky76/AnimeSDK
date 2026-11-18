#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define GCOLLFLNDJD___C_HDGOLMNFLFC_OFFSET UNITYSDK_OFFSET(0x13249360)
#define GCOLLFLNDJD___C_PGPGPLGOGJP_OFFSET UNITYSDK_OFFSET(0x13249290)
#define GCOLLFLNDJD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13249240)
#define GCOLLFLNDJD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13249280)

inline static constexpr unsigned int GCOLLFLNDJD___c_TypeDefinitionIndex = 62161;

class GCOLLFLNDJD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GCOLLFLNDJD___c_TypeDefinitionIndex)->GetStaticField(0x31BA0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(GCOLLFLNDJD___c_TypeDefinitionIndex)->GetStaticField(0x31BA8);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_1()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(GCOLLFLNDJD___c_TypeDefinitionIndex)->GetStaticField(0x31BB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCOLLFLNDJD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath PGPGPLGOGJP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD___C_PGPGPLGOGJP_OFFSET))(this);
	}

	::Foundation::AssetPath HDGOLMNFLFC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOLLFLNDJD___C_HDGOLMNFLFC_OFFSET))(this);
	}
};
