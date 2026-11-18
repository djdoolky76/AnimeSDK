#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNKFIJIOJCP;

#define BNKFIJIOJCP_JBEABOHIBLP_OEPGIJABDEJ_OFFSET UNITYSDK_OFFSET(0x1425FB40)
#define BNKFIJIOJCP_JBEABOHIBLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1425FB30)

inline static constexpr unsigned int BNKFIJIOJCP_JBEABOHIBLP_TypeDefinitionIndex = 69993;

class BNKFIJIOJCP_JBEABOHIBLP : public ::System::Object
{
public:
	::BNKFIJIOJCP* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKFIJIOJCP_JBEABOHIBLP__CTOR_OFFSET))(this);
	}

	::System::Void OEPGIJABDEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKFIJIOJCP_JBEABOHIBLP_OEPGIJABDEJ_OFFSET))(this);
	}
};
