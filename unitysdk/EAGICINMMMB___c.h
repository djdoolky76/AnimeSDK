#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define EAGICINMMMB___C_OBGJMLNOKDM_OFFSET UNITYSDK_OFFSET(0xFDCD8C0)
#define EAGICINMMMB___C_OOMLBKJNGPH_OFFSET UNITYSDK_OFFSET(0xFDCD920)
#define EAGICINMMMB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDCD870)
#define EAGICINMMMB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCD8B0)

inline static constexpr unsigned int EAGICINMMMB___c_TypeDefinitionIndex = 38786;

class EAGICINMMMB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EAGICINMMMB___c_TypeDefinitionIndex)->GetStaticField(0x45EF0);
	}
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(EAGICINMMMB___c_TypeDefinitionIndex)->GetStaticField(0x45EF8);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(EAGICINMMMB___c_TypeDefinitionIndex)->GetStaticField(0x45F00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGICINMMMB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGICINMMMB___C__CTOR_OFFSET))(this);
	}

	::System::Void OBGJMLNOKDM(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + EAGICINMMMB___C_OBGJMLNOKDM_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void OOMLBKJNGPH(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EAGICINMMMB___C_OOMLBKJNGPH_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}
};
