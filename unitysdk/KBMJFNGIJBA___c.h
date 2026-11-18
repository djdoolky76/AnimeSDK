#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKEKANMHL;
namespace System { template <typename T> class Action_1; }

#define KBMJFNGIJBA___C_GBMPLNOPHMI_OFFSET UNITYSDK_OFFSET(0x12977BC0)
#define KBMJFNGIJBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12977B70)
#define KBMJFNGIJBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12977BB0)

inline static constexpr unsigned int KBMJFNGIJBA___c_TypeDefinitionIndex = 60138;

class KBMJFNGIJBA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(KBMJFNGIJBA___c_TypeDefinitionIndex)->GetStaticField(0x41050);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBMJFNGIJBA___c_TypeDefinitionIndex)->GetStaticField(0x41058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBMJFNGIJBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMJFNGIJBA___C__CTOR_OFFSET))(this);
	}

	::System::Void GBMPLNOPHMI(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + KBMJFNGIJBA___C_GBMPLNOPHMI_OFFSET))(this, MNDIBLLFAJI);
	}
};
