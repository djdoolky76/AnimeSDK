#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BCNKFBPILLH;

#define ACAEONGOBMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB110780)
#define ACAEONGOBMB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB1103A0)
#define ACAEONGOBMB_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xB1105E0)
#define ACAEONGOBMB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB110400)

	class ACAEONGOBMB : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::BCNKFBPILLH*>* EGLCKKBLNPL; // 0x60
		::System::UInt32 EPCFHPAJBOI; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAEONGOBMB_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ACAEONGOBMB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAEONGOBMB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void EJDAKAECODE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACAEONGOBMB_EJDAKAECODE_OFFSET))(this, a1);
		}

	};
