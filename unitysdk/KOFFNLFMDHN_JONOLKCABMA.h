#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_JONOLKCABMA_AEOPLDHNJFH_OFFSET UNITYSDK_OFFSET(0x16826580)
#define KOFFNLFMDHN_JONOLKCABMA_BDNKGCPHDDE_OFFSET UNITYSDK_OFFSET(0x16826590)
#define KOFFNLFMDHN_JONOLKCABMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16826570)

inline static constexpr unsigned int KOFFNLFMDHN_JONOLKCABMA_TypeDefinitionIndex = 60122;

class KOFFNLFMDHN_JONOLKCABMA : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_JONOLKCABMA__CTOR_OFFSET))(this);
	}

	::System::Void AEOPLDHNJFH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_JONOLKCABMA_AEOPLDHNJFH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void BDNKGCPHDDE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_JONOLKCABMA_BDNKGCPHDDE_OFFSET))(this, GLAOEHCGCFO);
	}
};
