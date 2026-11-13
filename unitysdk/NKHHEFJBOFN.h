#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKOEJKEFMN;

#define NKHHEFJBOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B1430)
#define NKHHEFJBOFN_GJCKGGFKNKG_OFFSET UNITYSDK_OFFSET(0x1A7B1600)
#define NKHHEFJBOFN_IAKBLBBJONL_OFFSET UNITYSDK_OFFSET(0x1A7B15B0)
#define NKHHEFJBOFN_LNKJJFOJPHH_OFFSET UNITYSDK_OFFSET(0x1A7B14A0)
#define NKHHEFJBOFN_MHBFJIMHDBJ_OFFSET UNITYSDK_OFFSET(0x1A7B14F0)
#define NKHHEFJBOFN_NACJHPFBGNJ_OFFSET UNITYSDK_OFFSET(0x1A7B1540)

inline static constexpr unsigned int NKHHEFJBOFN_TypeDefinitionIndex = 83610;

	class NKHHEFJBOFN : public ::System::Object
	{
	public:
		::EOKOEJKEFMN* JJIMIBMNMOI; // 0x10
		::System::Void _ctor(::EOKOEJKEFMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOKOEJKEFMN*))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LNKJJFOJPHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_LNKJJFOJPHH_OFFSET))(this);
		}

		::System::Boolean MHBFJIMHDBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_MHBFJIMHDBJ_OFFSET))(this);
		}

		::System::Boolean NACJHPFBGNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_NACJHPFBGNJ_OFFSET))(this);
		}

		::System::Void IAKBLBBJONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_IAKBLBBJONL_OFFSET))(this);
		}

		::System::Void GJCKGGFKNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHHEFJBOFN_GJCKGGFKNKG_OFFSET))(this);
		}

	};
