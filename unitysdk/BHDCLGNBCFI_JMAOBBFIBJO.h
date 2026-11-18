#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define BHDCLGNBCFI_JMAOBBFIBJO_JLOFBFHKOGC_OFFSET UNITYSDK_OFFSET(0x10DF62B0)
#define BHDCLGNBCFI_JMAOBBFIBJO_KLBIJAHGOFA_OFFSET UNITYSDK_OFFSET(0x10DF62C0)
#define BHDCLGNBCFI_JMAOBBFIBJO__CTOR_OFFSET UNITYSDK_OFFSET(0x10DF62A0)

inline static constexpr unsigned int BHDCLGNBCFI_JMAOBBFIBJO_TypeDefinitionIndex = 86907;

class BHDCLGNBCFI_JMAOBBFIBJO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_JMAOBBFIBJO__CTOR_OFFSET))(this);
	}

	::System::Void JLOFBFHKOGC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_JMAOBBFIBJO_JLOFBFHKOGC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KLBIJAHGOFA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_JMAOBBFIBJO_KLBIJAHGOFA_OFFSET))(this, PIIPCLCCOIG);
	}
};
