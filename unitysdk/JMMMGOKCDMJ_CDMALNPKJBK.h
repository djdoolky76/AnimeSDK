#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JMMMGOKCDMJ_CDMALNPKJBK_CKGOKHELHKM_OFFSET UNITYSDK_OFFSET(0x18A26200)
#define JMMMGOKCDMJ_CDMALNPKJBK_NGDFACMFPAL_OFFSET UNITYSDK_OFFSET(0x18A261F0)
#define JMMMGOKCDMJ_CDMALNPKJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A261E0)

inline static constexpr unsigned int JMMMGOKCDMJ_CDMALNPKJBK_TypeDefinitionIndex = 61630;

class JMMMGOKCDMJ_CDMALNPKJBK : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10
	::System::Double JPIHKNPJKPH; // 0x18
	::System::Single IBGKEANAOFM; // 0x20
	::System::Byte _padding0[0x4];
	::System::Double ANLNNPKIICE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_CDMALNPKJBK__CTOR_OFFSET))(this);
	}

	::System::Void NGDFACMFPAL(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_CDMALNPKJBK_NGDFACMFPAL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double CKGOKHELHKM()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMGOKCDMJ_CDMALNPKJBK_CKGOKHELHKM_OFFSET))(this);
	}
};
