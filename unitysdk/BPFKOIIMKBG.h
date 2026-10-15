#pragma once
#include "unitysdk/unitysdk.h"

#define BPFKOIIMKBG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC1A46E0)
#define BPFKOIIMKBG_CTOR_OFFSET UNITYSDK_OFFSET(0xDD950)
#define BPFKOIIMKBG_GCNDKHEPBCE_OFFSET UNITYSDK_OFFSET(0xC1A4530)
#define BPFKOIIMKBG_GFCFHLJEHMC_OFFSET UNITYSDK_OFFSET(0xC1A4590)
#define BPFKOIIMKBG_JDJDJAGOFBB_OFFSET UNITYSDK_OFFSET(0xDD8F0)
#define BPFKOIIMKBG_MJHDCBFCNDO_OFFSET UNITYSDK_OFFSET(0xDD9D0)
#define BPFKOIIMKBG_OGBFBLABMCA_OFFSET UNITYSDK_OFFSET(0xDD960)

	struct alignas(4) BPFKOIIMKBG
	{
		::System::Boolean DMACAHCDGLH; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single LLICGDGPMJL; // 0x14
		static ::BPFKOIIMKBG* StaticGet_NKHLMJGGKEM()
		{
			return (::BPFKOIIMKBG*)UnitySDK::FromName("", "BPFKOIIMKBG")->GetStaticField(0x2660);
		}

		::System::Void _ctor(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFKOIIMKBG_CCTOR_OFFSET))();
		}

		/*
		::BPFKOIIMKBG JDJDJAGOFBB()
		{
			return ((::BPFKOIIMKBG(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_JDJDJAGOFBB_OFFSET))(this);
		}
		*/

		/*
		static ::BPFKOIIMKBG GCNDKHEPBCE(::System::Single a1)
		{
			return ((::BPFKOIIMKBG(*)(::System::Single))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_GCNDKHEPBCE_OFFSET))(a1);
		}
		*/

		/*
		static ::BPFKOIIMKBG GFCFHLJEHMC(::System::Single a1)
		{
			return ((::BPFKOIIMKBG(*)(::System::Single))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_GFCFHLJEHMC_OFFSET))(a1);
		}
		*/

		::System::Single OGBFBLABMCA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_OGBFBLABMCA_OFFSET))(this, a1);
		}

		::System::Single MJHDCBFCNDO(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPFKOIIMKBG_MJHDCBFCNDO_OFFSET))(this, a1);
		}

	};
