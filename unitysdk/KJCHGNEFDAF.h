#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

namespace System { class Action; }

#define KJCHGNEFDAF_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15B93DA0)
#define KJCHGNEFDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B93D90)

inline static constexpr unsigned int KJCHGNEFDAF_TypeDefinitionIndex = 65791;

class KJCHGNEFDAF : public ::IPNCFCFIKCF
{
public:
	::System::Int32 KKGGACLGGPN; // 0x18

	::System::Void _ctor(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJCHGNEFDAF__CTOR_OFFSET))(this, KKGGACLGGPN);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJCHGNEFDAF_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
