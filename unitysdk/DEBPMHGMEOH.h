#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDLBMDMFIEE.h"

#define DEBPMHGMEOH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA25780)
#define DEBPMHGMEOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA257E0)

	class DEBPMHGMEOH : public ::LDLBMDMFIEE
	{
	public:
		::System::Int32 IGPBHPKILBB; // 0x400
		::System::Boolean CODFDLLKPNJ; // 0x404
		::System::Boolean PBLNMNPELHN; // 0x405
		::System::Boolean HAJKKJJKOFK; // 0x406
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPMHGMEOH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPMHGMEOH_CLEAR_OFFSET))(this);
		}

	};
