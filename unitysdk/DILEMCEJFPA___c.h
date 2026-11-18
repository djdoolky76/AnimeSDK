#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define DILEMCEJFPA___C_GPMFDOPPOCB_OFFSET UNITYSDK_OFFSET(0x19414820)
#define DILEMCEJFPA___C_IPKJNJNFIFI_OFFSET UNITYSDK_OFFSET(0x194147C0)
#define DILEMCEJFPA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19414770)
#define DILEMCEJFPA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194147B0)

inline static constexpr unsigned int DILEMCEJFPA___c_TypeDefinitionIndex = 46080;

class DILEMCEJFPA___c : public ::System::Object
{
public:
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(DILEMCEJFPA___c_TypeDefinitionIndex)->GetStaticField(0x431C0);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(DILEMCEJFPA___c_TypeDefinitionIndex)->GetStaticField(0x431C8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DILEMCEJFPA___c_TypeDefinitionIndex)->GetStaticField(0x431D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DILEMCEJFPA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILEMCEJFPA___C__CTOR_OFFSET))(this);
	}

	::System::Void IPKJNJNFIFI(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + DILEMCEJFPA___C_IPKJNJNFIFI_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void GPMFDOPPOCB(::IFLPGOKHDJI* FHEJELHALJE, ::ENGKPGFGGLM* HNHFLCJLMMO)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DILEMCEJFPA___C_GPMFDOPPOCB_OFFSET))(this, FHEJELHALJE, HNHFLCJLMMO);
	}
};
