#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define JFLPIHAJLOA___C_EBJEINNKLKG_OFFSET UNITYSDK_OFFSET(0x198A9430)
#define JFLPIHAJLOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A93E0)
#define JFLPIHAJLOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A9420)

inline static constexpr unsigned int JFLPIHAJLOA___c_TypeDefinitionIndex = 54330;

class JFLPIHAJLOA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JFLPIHAJLOA___c_TypeDefinitionIndex)->GetStaticField(0x4D3E0);
	}
	static ::System::Func_1<::System::UInt32>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(JFLPIHAJLOA___c_TypeDefinitionIndex)->GetStaticField(0x4D3E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFLPIHAJLOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLPIHAJLOA___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 EBJEINNKLKG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLPIHAJLOA___C_EBJEINNKLKG_OFFSET))(this);
	}
};
