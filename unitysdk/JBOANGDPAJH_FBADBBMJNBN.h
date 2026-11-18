#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBOANGDPAJH;

#define JBOANGDPAJH_FBADBBMJNBN_OHFBKMNJNDC_OFFSET UNITYSDK_OFFSET(0x160D4450)
#define JBOANGDPAJH_FBADBBMJNBN__CTOR_OFFSET UNITYSDK_OFFSET(0x160D4440)

inline static constexpr unsigned int JBOANGDPAJH_FBADBBMJNBN_TypeDefinitionIndex = 45617;

class JBOANGDPAJH_FBADBBMJNBN : public ::System::Object
{
public:
	::JBOANGDPAJH* KLHPEBKNIFB; // 0x10
	::System::Int32 KCLALHGCBDE; // 0x18
	::System::Single FBKAGJCBJBF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_FBADBBMJNBN__CTOR_OFFSET))(this);
	}

	::System::Void OHFBKMNJNDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOANGDPAJH_FBADBBMJNBN_OHFBKMNJNDC_OFFSET))(this);
	}
};
