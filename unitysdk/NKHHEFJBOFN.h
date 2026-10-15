#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKOEJKEFMN;

#define NKHHEFJBOFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2EA30)
#define NKHHEFJBOFN_GJCKGGFKNKG_OFFSET UNITYSDK_OFFSET(0xBC2EC00)
#define NKHHEFJBOFN_IAKBLBBJONL_OFFSET UNITYSDK_OFFSET(0xBC2EBB0)
#define NKHHEFJBOFN_LNKJJFOJPHH_OFFSET UNITYSDK_OFFSET(0xBC2EAA0)
#define NKHHEFJBOFN_MHBFJIMHDBJ_OFFSET UNITYSDK_OFFSET(0xBC2EAF0)
#define NKHHEFJBOFN_NACJHPFBGNJ_OFFSET UNITYSDK_OFFSET(0xBC2EB40)

inline static constexpr unsigned int NKHHEFJBOFN_TypeDefinitionIndex = 80830;

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
