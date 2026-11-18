#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BLACKCURTAINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16936740)
#define BLACKCURTAINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16936780)
#define BLACKCURTAINMANAGER___C__SUSPENDCURRENTMATPROPERTYMODIFIERS_B__25_0_OFFSET UNITYSDK_OFFSET(0x16936790)

inline static constexpr unsigned int BlackCurtainManager___c_TypeDefinitionIndex = 58590;

class BlackCurtainManager___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager___c_TypeDefinitionIndex)->GetStaticField(0x3A4C0);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainManager___c_TypeDefinitionIndex)->GetStaticField(0x3A4C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SuspendCurrentMatPropertyModifiers_b__25_0(::System::String* modifierKey)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BLACKCURTAINMANAGER___C__SUSPENDCURRENTMATPROPERTYMODIFIERS_B__25_0_OFFSET))(this, modifierKey);
	}
};
