#pragma once
#include "unitysdk/unitysdk.h"

#define HCNCDEOBPLN_BBOPDPAMDIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC5ECC0)
#define HCNCDEOBPLN_BBOPDPAMDIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C36680)
#define HCNCDEOBPLN_BBOPDPAMDIA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C36620)
#define HCNCDEOBPLN_BBOPDPAMDIA_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x21130)
#define HCNCDEOBPLN_BBOPDPAMDIA_HNNHNHLPPPG_OFFSET UNITYSDK_OFFSET(0x3260)
#define HCNCDEOBPLN_BBOPDPAMDIA_IKMNDCPAMCH_OFFSET UNITYSDK_OFFSET(0x21140)
#define HCNCDEOBPLN_BBOPDPAMDIA_JNPFADDONIH_OFFSET UNITYSDK_OFFSET(0xEE420)
#define HCNCDEOBPLN_BBOPDPAMDIA_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3C366E0)
#define HCNCDEOBPLN_BBOPDPAMDIA_OMAOOBPMDFM_OFFSET UNITYSDK_OFFSET(0x3C366F0)

inline static constexpr unsigned int HCNCDEOBPLN_BBOPDPAMDIA_TypeDefinitionIndex = 43858;

	struct alignas(8) HCNCDEOBPLN_BBOPDPAMDIA
	{
		::Il2CppArray<::System::Byte>* BIBDHBLPDFH; // 0x10
		::System::Byte NKFFAAMGIPI; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 KOPPBHKKFMM; // 0x1C
		::System::Int32 ADIAAJELNON; // 0x20
		::System::Int32 PEGEINGNLEO; // 0x24
		static ::Il2CppArray<::System::Byte>** StaticGet_DFNBPMDNOKF()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "BBOPDPAMDIA")->GetStaticField(0xEF0);
		}

		// static const ::System::Object IOEMCFBOGEB; // 0x0
		// static const ::System::Object MDNEBIJHHAO; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Byte a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Byte EPGHHDPDFFE()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::Int32 IKMNDCPAMCH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_IKMNDCPAMCH_OFFSET))(this);
		}

		::System::Int32 HNNHNHLPPPG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_HNNHNHLPPPG_OFFSET))(this);
		}

		::System::Int32 JNPFADDONIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_JNPFADDONIH_OFFSET))(this);
		}

		/*
		::HCNCDEOBPLN_BBOPDPAMDIA OMAOOBPMDFM(::System::Int32 a1)
		{
			return ((::HCNCDEOBPLN_BBOPDPAMDIA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BBOPDPAMDIA_OMAOOBPMDFM_OFFSET))(this, a1);
		}
		*/

	};
