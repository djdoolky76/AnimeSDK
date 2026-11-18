#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define BHDCLGNBCFI_OIGIGALIOAB_CAIOBJECFLA_OFFSET UNITYSDK_OFFSET(0x113E6870)
#define BHDCLGNBCFI_OIGIGALIOAB_DDLMEACGGIJ_OFFSET UNITYSDK_OFFSET(0x113E6860)
#define BHDCLGNBCFI_OIGIGALIOAB__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6850)

inline static constexpr unsigned int BHDCLGNBCFI_OIGIGALIOAB_TypeDefinitionIndex = 86905;

class BHDCLGNBCFI_OIGIGALIOAB : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_OIGIGALIOAB__CTOR_OFFSET))(this);
	}

	::System::Void DDLMEACGGIJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_OIGIGALIOAB_DDLMEACGGIJ_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void CAIOBJECFLA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHDCLGNBCFI_OIGIGALIOAB_CAIOBJECFLA_OFFSET))(this, PIIPCLCCOIG);
	}
};
