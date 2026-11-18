#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NHNHBHELPJF___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x105BAE50)
#define NHNHBHELPJF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105BAE00)
#define NHNHBHELPJF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105BAE40)

inline static constexpr unsigned int NHNHBHELPJF___c_TypeDefinitionIndex = 93077;

class NHNHBHELPJF___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(NHNHBHELPJF___c_TypeDefinitionIndex)->GetStaticField(0x48EE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NHNHBHELPJF___c_TypeDefinitionIndex)->GetStaticField(0x48EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHNHBHELPJF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNHBHELPJF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath MEMFHNGDGIN()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNHBHELPJF___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
