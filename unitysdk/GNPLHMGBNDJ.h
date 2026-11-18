#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ACNLKLCDALA;
class DIAEPBNFKBO;
class GEIHCPAOKKK;
class JOOHBDMHGCA;

#define GNPLHMGBNDJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14D06110)
#define GNPLHMGBNDJ_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14D06220)
#define GNPLHMGBNDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D061B0)

inline static constexpr unsigned int GNPLHMGBNDJ_TypeDefinitionIndex = 51942;

class GNPLHMGBNDJ : public ::PKMJPMFCNBK
{
public:
	::ACNLKLCDALA* BCIMHMOFOMC; // 0x80
	::JOOHBDMHGCA* DCGAHNLABEF; // 0x88
	::DIAEPBNFKBO* POBADKEDFOE; // 0x90
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x98
	::System::Byte NOKKOLKEDBG; // 0xA0
	::System::Boolean FBILHHBPEHD; // 0xA1
	::System::Byte _padding0[0x2];
	::System::Single NKAHIHHAPCP; // 0xA4
	::UnityEngine::Vector3 KABNJNFBCFI; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPLHMGBNDJ__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPLHMGBNDJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPLHMGBNDJ_KHJELIBOECB_OFFSET))(this);
	}
};
