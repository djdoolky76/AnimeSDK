#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define LOLJDJICNOI___C_BNBHIDHKNCO_OFFSET UNITYSDK_OFFSET(0x156798F0)
#define LOLJDJICNOI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156798A0)
#define LOLJDJICNOI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156798E0)

inline static constexpr unsigned int LOLJDJICNOI___c_TypeDefinitionIndex = 65353;

class LOLJDJICNOI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LOLJDJICNOI___c_TypeDefinitionIndex)->GetStaticField(0x469F0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__8_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LOLJDJICNOI___c_TypeDefinitionIndex)->GetStaticField(0x469F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOLJDJICNOI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLJDJICNOI___C__CTOR_OFFSET))(this);
	}

	::System::String* BNBHIDHKNCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLJDJICNOI___C_BNBHIDHKNCO_OFFSET))(this);
	}
};
