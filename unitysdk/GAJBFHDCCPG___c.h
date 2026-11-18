#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define GAJBFHDCCPG___C_CDPCKMAEDBD_OFFSET UNITYSDK_OFFSET(0x156E8D30)
#define GAJBFHDCCPG___C_DGPDECBGEDC_OFFSET UNITYSDK_OFFSET(0x156E8E30)
#define GAJBFHDCCPG___C_JHAHCPCBNNI_OFFSET UNITYSDK_OFFSET(0x156E8C20)
#define GAJBFHDCCPG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156E8BD0)
#define GAJBFHDCCPG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156E8C10)

inline static constexpr unsigned int GAJBFHDCCPG___c_TypeDefinitionIndex = 42053;

class GAJBFHDCCPG___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__62_9()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GAJBFHDCCPG___c_TypeDefinitionIndex)->GetStaticField(0x377B0);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__62_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GAJBFHDCCPG___c_TypeDefinitionIndex)->GetStaticField(0x377B8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GAJBFHDCCPG___c_TypeDefinitionIndex)->GetStaticField(0x377C0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__62_3()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GAJBFHDCCPG___c_TypeDefinitionIndex)->GetStaticField(0x377C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJBFHDCCPG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG___C__CTOR_OFFSET))(this);
	}

	::System::String* JHAHCPCBNNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG___C_JHAHCPCBNNI_OFFSET))(this);
	}

	::System::Boolean CDPCKMAEDBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG___C_CDPCKMAEDBD_OFFSET))(this);
	}

	::System::Boolean DGPDECBGEDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG___C_DGPDECBGEDC_OFFSET))(this);
	}
};
