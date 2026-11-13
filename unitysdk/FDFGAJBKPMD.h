#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCIKOMDEIM.h"
#include "unitysdk/BCMNLOPKLDO.h"

#define FDFGAJBKPMD_APHKGPOCPBG_OFFSET UNITYSDK_OFFSET(0x1C030330)
#define FDFGAJBKPMD_BKJAIHLBGAC_OFFSET UNITYSDK_OFFSET(0x1C0303A0)
#define FDFGAJBKPMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C030AC0)
#define FDFGAJBKPMD_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1C02FEC0)
#define FDFGAJBKPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02FEA0)
#define FDFGAJBKPMD_DDNEBCGEFKC_OFFSET UNITYSDK_OFFSET(0x1C030280)
#define FDFGAJBKPMD_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1C02FED0)
#define FDFGAJBKPMD_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0x1C030010)
#define FDFGAJBKPMD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C02FEE0)

inline static constexpr unsigned int FDFGAJBKPMD_TypeDefinitionIndex = 60593;

	class FDFGAJBKPMD : public ::HFCIKOMDEIM
	{
	public:
		::System::Boolean IFMHOHEHFBL; // 0x38
		static ::System::Single* StaticGet_JOEDMKOGLBL()
		{
			return (::System::Single*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0xE860);
		}

		static ::System::Int32* StaticGet_MNOMBDMBECB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0xE864);
		}

		static ::System::Boolean* StaticGet_IFPNNBIHMDF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0xE868);
		}

		static ::System::Int32* StaticGet_GCFGMNILOMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0xE86C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFGAJBKPMD_CCTOR_OFFSET))();
		}

		static ::System::Single COEONDABKIH()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FDFGAJBKPMD_COEONDABKIH_OFFSET))();
		}

		static ::System::Void FOCIPHMHHEB(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_FOCIPHMHHEB_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void GAJOGNKBPJC(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_GAJOGNKBPJC_OFFSET))(this, a1);
		}

		::System::Void APHKGPOCPBG(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_APHKGPOCPBG_OFFSET))(this, a1);
		}

		::System::Void BKJAIHLBGAC(::BCMNLOPKLDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCMNLOPKLDO))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_BKJAIHLBGAC_OFFSET))(this, a1);
		}

		::System::Void DDNEBCGEFKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGAJBKPMD_DDNEBCGEFKC_OFFSET))(this);
		}

	};
