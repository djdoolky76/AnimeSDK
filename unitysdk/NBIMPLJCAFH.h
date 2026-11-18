#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHKMKCIPOLD;

#define NBIMPLJCAFH_KBONGBECLFK_OFFSET UNITYSDK_OFFSET(0x120F1FB0)
#define NBIMPLJCAFH_LOHDHEEKNJK_OFFSET UNITYSDK_OFFSET(0x120F1FC0)
#define NBIMPLJCAFH__CTOR_OFFSET UNITYSDK_OFFSET(0x120F1FA0)

inline static constexpr unsigned int NBIMPLJCAFH_TypeDefinitionIndex = 69258;

class NBIMPLJCAFH : public ::System::Object
{
public:
	::LHKMKCIPOLD* HKKBLKPJPFG; // 0x10
	::System::Boolean _NDEFKOJNEBL_k__BackingField; // 0x18

	::System::Void _ctor(::LHKMKCIPOLD* DHENDKAOLMA)
	{
		return ((::System::Void(*)(::PVOID, ::LHKMKCIPOLD*))((::PBYTE)hIl2Cpp + NBIMPLJCAFH__CTOR_OFFSET))(this, DHENDKAOLMA);
	}

	::System::Void KBONGBECLFK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBIMPLJCAFH_KBONGBECLFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LOHDHEEKNJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIMPLJCAFH_LOHDHEEKNJK_OFFSET))(this);
	}
};
