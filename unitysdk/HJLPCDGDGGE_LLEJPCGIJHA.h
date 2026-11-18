#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class HJLPCDGDGGE;

#define HJLPCDGDGGE_LLEJPCGIJHA_KDFEICIMBKK_OFFSET UNITYSDK_OFFSET(0x14D30F00)
#define HJLPCDGDGGE_LLEJPCGIJHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30EF0)

inline static constexpr unsigned int HJLPCDGDGGE_LLEJPCGIJHA_TypeDefinitionIndex = 81351;

class HJLPCDGDGGE_LLEJPCGIJHA : public ::System::Object
{
public:
	::CJIEIHEDMME* HPDGOCBBOHI; // 0x10
	::HJLPCDGDGGE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLPCDGDGGE_LLEJPCGIJHA__CTOR_OFFSET))(this);
	}

	::System::Void KDFEICIMBKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLPCDGDGGE_LLEJPCGIJHA_KDFEICIMBKK_OFFSET))(this);
	}
};
