#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CAJGAEIAFPO___C_DHCDNNGDCJJ_OFFSET UNITYSDK_OFFSET(0x159A7800)
#define CAJGAEIAFPO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159A77B0)
#define CAJGAEIAFPO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159A77F0)

inline static constexpr unsigned int CAJGAEIAFPO___c_TypeDefinitionIndex = 90788;

class CAJGAEIAFPO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAJGAEIAFPO___c_TypeDefinitionIndex)->GetStaticField(0x40260);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_3()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(CAJGAEIAFPO___c_TypeDefinitionIndex)->GetStaticField(0x40268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJGAEIAFPO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJGAEIAFPO___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath DHCDNNGDCJJ()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJGAEIAFPO___C_DHCDNNGDCJJ_OFFSET))(this);
	}
};
