#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDLBMDMFIEE.h"

#define DEBPMHGMEOH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9F70D0)
#define DEBPMHGMEOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7130)

inline static constexpr unsigned int DEBPMHGMEOH_TypeDefinitionIndex = 43537;

	class DEBPMHGMEOH : public ::LDLBMDMFIEE
	{
	public:
		::System::Int32 IGPBHPKILBB; // 0x400
		::System::Boolean PBLNMNPELHN; // 0x404
		::System::Boolean CODFDLLKPNJ; // 0x405
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
