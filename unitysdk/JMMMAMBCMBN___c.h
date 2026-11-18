#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JMMMAMBCMBN___C_BBHEGHHILKL_OFFSET UNITYSDK_OFFSET(0x1874AA30)
#define JMMMAMBCMBN___C_PAFELPFGJBM_OFFSET UNITYSDK_OFFSET(0x1874AA40)
#define JMMMAMBCMBN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1874A9E0)
#define JMMMAMBCMBN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1874AA20)

inline static constexpr unsigned int JMMMAMBCMBN___c_TypeDefinitionIndex = 65908;

class JMMMAMBCMBN___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JMMMAMBCMBN___c_TypeDefinitionIndex)->GetStaticField(0x40F90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMMMAMBCMBN___c_TypeDefinitionIndex)->GetStaticField(0x40F98);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JMMMAMBCMBN___c_TypeDefinitionIndex)->GetStaticField(0x40FA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMAMBCMBN___C__CTOR_OFFSET))(this);
	}

	::System::Void BBHEGHHILKL(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMMMAMBCMBN___C_BBHEGHHILKL_OFFSET))(this, EMIKCAHJLGB);
	}

	::System::Void PAFELPFGJBM(::System::String* EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMMMAMBCMBN___C_PAFELPFGJBM_OFFSET))(this, EMIKCAHJLGB);
	}
};
