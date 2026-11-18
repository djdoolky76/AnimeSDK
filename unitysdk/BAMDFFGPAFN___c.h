#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BAMDFFGPAFN___C_HKHAELLBPAO_OFFSET UNITYSDK_OFFSET(0x11BE6430)
#define BAMDFFGPAFN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE63E0)
#define BAMDFFGPAFN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE6420)

inline static constexpr unsigned int BAMDFFGPAFN___c_TypeDefinitionIndex = 44254;

class BAMDFFGPAFN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BAMDFFGPAFN___c_TypeDefinitionIndex)->GetStaticField(0x40020);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__20_11()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BAMDFFGPAFN___c_TypeDefinitionIndex)->GetStaticField(0x40028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAMDFFGPAFN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMDFFGPAFN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HKHAELLBPAO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMDFFGPAFN___C_HKHAELLBPAO_OFFSET))(this);
	}
};
