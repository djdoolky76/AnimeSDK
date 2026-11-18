#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IABDNEPGONN;
class IABDNEPGONN_LKHFKKJLAGA;
class LNAIJNGBMPO;

#define HHDIKPCLDAH_JBAGGDGIOOG_HDPFBLOILMJ_OFFSET UNITYSDK_OFFSET(0x17AF77A0)
#define HHDIKPCLDAH_JBAGGDGIOOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF7790)

inline static constexpr unsigned int HHDIKPCLDAH_JBAGGDGIOOG_TypeDefinitionIndex = 44263;

class HHDIKPCLDAH_JBAGGDGIOOG : public ::System::Object
{
public:
	::LNAIJNGBMPO* KANJODNFFOI; // 0x10
	::IABDNEPGONN_LKHFKKJLAGA* CFMOKDNOJFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDIKPCLDAH_JBAGGDGIOOG__CTOR_OFFSET))(this);
	}

	::System::Void HDPFBLOILMJ(::IABDNEPGONN* DHFMNIHHFNF)
	{
		return ((::System::Void(*)(::PVOID, ::IABDNEPGONN*))((::PBYTE)hIl2Cpp + HHDIKPCLDAH_JBAGGDGIOOG_HDPFBLOILMJ_OFFSET))(this, DHFMNIHHFNF);
	}
};
