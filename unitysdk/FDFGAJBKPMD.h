#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFCIKOMDEIM.h"
#include "unitysdk/BCMNLOPKLDO.h"

#define FDFGAJBKPMD_APHKGPOCPBG_OFFSET UNITYSDK_OFFSET(0x156D5880)
#define FDFGAJBKPMD_BKJAIHLBGAC_OFFSET UNITYSDK_OFFSET(0x156D58F0)
#define FDFGAJBKPMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x156D6010)
#define FDFGAJBKPMD_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x156D5410)
#define FDFGAJBKPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x156D53E0)
#define FDFGAJBKPMD_DDNEBCGEFKC_OFFSET UNITYSDK_OFFSET(0x156D57D0)
#define FDFGAJBKPMD_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x156D5420)
#define FDFGAJBKPMD_GAJOGNKBPJC_OFFSET UNITYSDK_OFFSET(0x156D5560)
#define FDFGAJBKPMD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156D5430)

inline static constexpr unsigned int FDFGAJBKPMD_TypeDefinitionIndex = 59316;

	class FDFGAJBKPMD : public ::HFCIKOMDEIM
	{
	public:
		::System::Boolean IFMHOHEHFBL; // 0x38
		static ::System::Boolean* StaticGet_IFPNNBIHMDF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0x14820);
		}

		static ::System::Single* StaticGet_JOEDMKOGLBL()
		{
			return (::System::Single*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0x14824);
		}

		static ::System::Int32* StaticGet_MNOMBDMBECB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0x14828);
		}

		static ::System::Int32* StaticGet_GCFGMNILOMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDFGAJBKPMD")->GetStaticField(0x1482C);
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
