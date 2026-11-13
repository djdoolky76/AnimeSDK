#pragma once
#include "unitysdk/unitysdk.h"

#define HCNCDEOBPLN_HLPBNGJDDDD_BDIPBHMGBDE_OFFSET UNITYSDK_OFFSET(0x3E36E40)
#define HCNCDEOBPLN_HLPBNGJDDDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x208DED20)
#define HCNCDEOBPLN_HLPBNGJDDDD_CJAONFMFLNG_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define HCNCDEOBPLN_HLPBNGJDDDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DB04F0)
#define HCNCDEOBPLN_HLPBNGJDDDD_CTOR_OFFSET UNITYSDK_OFFSET(0x3F9EAE0)
#define HCNCDEOBPLN_HLPBNGJDDDD_LDCGNGDPGAM_OFFSET UNITYSDK_OFFSET(0x3F9EAF0)
#define HCNCDEOBPLN_HLPBNGJDDDD_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define HCNCDEOBPLN_HLPBNGJDDDD_PFJALDBHPPL_OFFSET UNITYSDK_OFFSET(0x7CEA10)

inline static constexpr unsigned int HCNCDEOBPLN_HLPBNGJDDDD_TypeDefinitionIndex = 44931;

	struct alignas(4) HCNCDEOBPLN_HLPBNGJDDDD
	{
		::System::Int32 HNNKCDKLMLF; // 0x10
		::System::Int32 GDNMBGPIALM; // 0x14
		::System::Int32 KEEBPHBMONO; // 0x18
		static ::HCNCDEOBPLN_HLPBNGJDDDD* StaticGet_COAHELMPGLI()
		{
			return (::HCNCDEOBPLN_HLPBNGJDDDD*)UnitySDK::FromName("", "HLPBNGJDDDD")->GetStaticField(0x6B0);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_CCTOR_OFFSET))();
		}

		::System::Boolean BDIPBHMGBDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_BDIPBHMGBDE_OFFSET))(this);
		}

		::System::Int32 CJAONFMFLNG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_CJAONFMFLNG_OFFSET))(this);
		}

		::System::Int32 PFJALDBHPPL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_PFJALDBHPPL_OFFSET))(this);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_LKEFCMNJDJI_OFFSET))(this);
		}

		/*
		::HCNCDEOBPLN_HLPBNGJDDDD LDCGNGDPGAM()
		{
			return ((::HCNCDEOBPLN_HLPBNGJDDDD(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HLPBNGJDDDD_LDCGNGDPGAM_OFFSET))(this);
		}
		*/

	};
