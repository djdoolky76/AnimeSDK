#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPKLGLMDKOL;
class NLNIIPDCABP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define INLLBCMNOFH___C_IJEIOENOFOI_OFFSET UNITYSDK_OFFSET(0x13AB09D0)
#define INLLBCMNOFH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AB0980)
#define INLLBCMNOFH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB09C0)

inline static constexpr unsigned int INLLBCMNOFH___c_TypeDefinitionIndex = 92360;

class INLLBCMNOFH___c : public ::System::Object
{
public:
	static ::System::Action_2<::BPKLGLMDKOL*, ::NLNIIPDCABP*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::BPKLGLMDKOL*, ::NLNIIPDCABP*>**)Il2CppClass::FromTypeDefinitionIndex(INLLBCMNOFH___c_TypeDefinitionIndex)->GetStaticField(0x4BBF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(INLLBCMNOFH___c_TypeDefinitionIndex)->GetStaticField(0x4BBF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INLLBCMNOFH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLLBCMNOFH___C__CTOR_OFFSET))(this);
	}

	::System::Void IJEIOENOFOI(::BPKLGLMDKOL* FFBIEMEBLAN, ::NLNIIPDCABP* FNFNDIBMPDE)
	{
		return ((::System::Void(*)(::PVOID, ::BPKLGLMDKOL*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + INLLBCMNOFH___C_IJEIOENOFOI_OFFSET))(this, FFBIEMEBLAN, FNFNDIBMPDE);
	}
};
