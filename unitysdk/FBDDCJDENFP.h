#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAMHAJOJEA;
class GELIALJDFBL;
class MIIMLLDIGNL;
class PHDHBNBJPJF;

#define FBDDCJDENFP_CTOR_OFFSET UNITYSDK_OFFSET(0x165AD290)
#define FBDDCJDENFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165AD080)
#define FBDDCJDENFP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x165AD0D0)
#define FBDDCJDENFP_PJLHOKMKCCH_OFFSET UNITYSDK_OFFSET(0x165AD1B0)

inline static constexpr unsigned int FBDDCJDENFP_TypeDefinitionIndex = 58093;

	class FBDDCJDENFP : public ::System::Object
	{
	public:
		::CJAMHAJOJEA* OACODBOKHIF; // 0x10
		::PHDHBNBJPJF* MIPCILCJBMP; // 0x18
		::GELIALJDFBL* PFFICPAABJN; // 0x20
		::MIIMLLDIGNL* KCBPBMOJOKJ; // 0x28
		::System::UInt64 MINPLHPLDHM; // 0x30
		::System::Boolean LOGPHJLONBL; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 LCEFJNPDKIL; // 0x3C
		::System::UInt32 NPHAJEKCBKF; // 0x40
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
