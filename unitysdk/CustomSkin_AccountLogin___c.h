#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CUSTOMSKIN_ACCOUNTLOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B97170)
#define CUSTOMSKIN_ACCOUNTLOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B971B0)
#define CUSTOMSKIN_ACCOUNTLOGIN___C__SETTHIRDLOGIN_B__18_0_OFFSET UNITYSDK_OFFSET(0x12B971C0)

inline static constexpr unsigned int CustomSkin_AccountLogin___c_TypeDefinitionIndex = 75399;

class CustomSkin_AccountLogin___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x45DE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_AccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x45DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetThirdLogin_b__18_0(::System::Boolean inparam)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_ACCOUNTLOGIN___C__SETTHIRDLOGIN_B__18_0_OFFSET))(this, inparam);
	}
};
