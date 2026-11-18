#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBLGHPDBEFK;

#define KBLGHPDBEFK_EFLLHGKGLAG_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x130A8650)
#define KBLGHPDBEFK_EFLLHGKGLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x130A8640)

inline static constexpr unsigned int KBLGHPDBEFK_EFLLHGKGLAG_TypeDefinitionIndex = 75426;

class KBLGHPDBEFK_EFLLHGKGLAG : public ::System::Object
{
public:
	::KBLGHPDBEFK* KLHPEBKNIFB; // 0x10
	::System::Int32 PDILCNBMHOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_EFLLHGKGLAG__CTOR_OFFSET))(this);
	}

	::System::Void HNNOAOBAHPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_EFLLHGKGLAG_HNNOAOBAHPC_OFFSET))(this);
	}
};
