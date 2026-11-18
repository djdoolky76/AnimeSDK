#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NDJMMOGDHMK;
class OAEFGCLEHHO;
class PNPFJKPGEHF;
namespace System { class Action; }

#define NDJMMOGDHMK_DECLOHEJJAP_CBLGHPMNIJM_OFFSET UNITYSDK_OFFSET(0xE576670)
#define NDJMMOGDHMK_DECLOHEJJAP_DFNDJJGMJAK_OFFSET UNITYSDK_OFFSET(0xE5766F0)
#define NDJMMOGDHMK_DECLOHEJJAP__CTOR_OFFSET UNITYSDK_OFFSET(0xE576660)

inline static constexpr unsigned int NDJMMOGDHMK_DECLOHEJJAP_TypeDefinitionIndex = 51325;

class NDJMMOGDHMK_DECLOHEJJAP : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18
	::NDJMMOGDHMK* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_DECLOHEJJAP__CTOR_OFFSET))(this);
	}

	::System::Void CBLGHPMNIJM(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_DECLOHEJJAP_CBLGHPMNIJM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DFNDJJGMJAK(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + NDJMMOGDHMK_DECLOHEJJAP_DFNDJJGMJAK_OFFSET))(this, GLAOEHCGCFO);
	}
};
