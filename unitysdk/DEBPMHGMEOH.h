#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDLBMDMFIEE.h"

#define DEBPMHGMEOH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB293B0)
#define DEBPMHGMEOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29410)

inline static constexpr unsigned int DEBPMHGMEOH_TypeDefinitionIndex = 44519;

	class DEBPMHGMEOH : public ::LDLBMDMFIEE
	{
	public:
		::System::Boolean CODFDLLKPNJ; // 0x400
		::System::Boolean HAJKKJJKOFK; // 0x401
		::System::Boolean PBLNMNPELHN; // 0x402
		::System::Byte _padding0[0x1];
		::System::Int32 IGPBHPKILBB; // 0x404
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPMHGMEOH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBPMHGMEOH_CLEAR_OFFSET))(this);
		}

	};
