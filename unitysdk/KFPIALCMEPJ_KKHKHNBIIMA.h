#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFPIALCMEPJ_KKHKHNBIIMA_HGIHIGELOMA_OFFSET UNITYSDK_OFFSET(0x17706370)
#define KFPIALCMEPJ_KKHKHNBIIMA_HLBKANEJDEE_OFFSET UNITYSDK_OFFSET(0x17706380)
#define KFPIALCMEPJ_KKHKHNBIIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17706360)

inline static constexpr unsigned int KFPIALCMEPJ_KKHKHNBIIMA_TypeDefinitionIndex = 40428;

class KFPIALCMEPJ_KKHKHNBIIMA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_KKHKHNBIIMA__CTOR_OFFSET))(this);
	}

	::System::Void HGIHIGELOMA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_KKHKHNBIIMA_HGIHIGELOMA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HLBKANEJDEE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFPIALCMEPJ_KKHKHNBIIMA_HLBKANEJDEE_OFFSET))(this, GLAOEHCGCFO);
	}
};
