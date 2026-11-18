#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CAKHIFCPOKM_KMAHLPMICLO_AADKBPDECDE_OFFSET UNITYSDK_OFFSET(0x128C1A60)
#define CAKHIFCPOKM_KMAHLPMICLO__CTOR_OFFSET UNITYSDK_OFFSET(0x128C1A50)

inline static constexpr unsigned int CAKHIFCPOKM_KMAHLPMICLO_TypeDefinitionIndex = 79967;

class CAKHIFCPOKM_KMAHLPMICLO : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_KMAHLPMICLO__CTOR_OFFSET))(this);
	}

	::System::Void AADKBPDECDE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_KMAHLPMICLO_AADKBPDECDE_OFFSET))(this, GLAOEHCGCFO);
	}
};
