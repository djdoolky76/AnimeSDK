#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFPIALCMEPJ_OIGGOLOAHAJ_JKKGLBOCLHK_OFFSET UNITYSDK_OFFSET(0x18622D60)
#define KFPIALCMEPJ_OIGGOLOAHAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18622D50)

inline static constexpr unsigned int KFPIALCMEPJ_OIGGOLOAHAJ_TypeDefinitionIndex = 40429;

class KFPIALCMEPJ_OIGGOLOAHAJ : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_OIGGOLOAHAJ__CTOR_OFFSET))(this);
	}

	::System::Void JKKGLBOCLHK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_OIGGOLOAHAJ_JKKGLBOCLHK_OFFSET))(this, GLAOEHCGCFO);
	}
};
