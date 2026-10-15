#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAMHAJOJEA;
class GELIALJDFBL;
class MIIMLLDIGNL;
class PHDHBNBJPJF;

#define FBDDCJDENFP_CTOR_OFFSET UNITYSDK_OFFSET(0x15697210)
#define FBDDCJDENFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15696FE0)
#define FBDDCJDENFP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15697030)
#define FBDDCJDENFP_PJLHOKMKCCH_OFFSET UNITYSDK_OFFSET(0x15697130)

	class FBDDCJDENFP : public ::System::Object
	{
	public:
		::PHDHBNBJPJF* MIPCILCJBMP; // 0x10
		::MIIMLLDIGNL* KCBPBMOJOKJ; // 0x18
		::GELIALJDFBL* PFFICPAABJN; // 0x20
		::CJAMHAJOJEA* OACODBOKHIF; // 0x28
		::System::UInt32 NPHAJEKCBKF; // 0x30
		::System::Byte _padding0[0x4];
		::System::UInt64 MINPLHPLDHM; // 0x38
		::System::UInt32 LCEFJNPDKIL; // 0x40
		::System::Boolean LOGPHJLONBL; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDDCJDENFP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDDCJDENFP_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDDCJDENFP_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PJLHOKMKCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDDCJDENFP_PJLHOKMKCCH_OFFSET))(this);
		}

	};
