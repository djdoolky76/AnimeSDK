#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BCLKDMAHONE;
class FAAEKAHOPFH_CLMGGJMJMBF;
class IOGNBKGNPFD;
class KLJGNBBMJCM;
namespace RPG::GameCore { class LittleGameAbilityPixAirFireMissle; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAAEKAHOPFH_CJPOIEIKMPC_OFFSET UNITYSDK_OFFSET(0x1565B030)
#define FAAEKAHOPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1565A390)
#define FAAEKAHOPFH_DDBBMPFCIMF_OFFSET UNITYSDK_OFFSET(0x1565AD70)
#define FAAEKAHOPFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1565A400)
#define FAAEKAHOPFH_EDIFIFHOHLB_OFFSET UNITYSDK_OFFSET(0x1565BE70)
#define FAAEKAHOPFH_EOJILDDEEDC_OFFSET UNITYSDK_OFFSET(0x1565C4C0)
#define FAAEKAHOPFH_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1565C3C0)
#define FAAEKAHOPFH_HFPDKMKIIOC_OFFSET UNITYSDK_OFFSET(0x1565BD70)
#define FAAEKAHOPFH_HKDAGKJKKOD_OFFSET UNITYSDK_OFFSET(0x1565BE00)
#define FAAEKAHOPFH_HMHNEKHBOJP_OFFSET UNITYSDK_OFFSET(0x1565B620)
#define FAAEKAHOPFH_KJAHMBMOFFH_OFFSET UNITYSDK_OFFSET(0x1565B1D0)
#define FAAEKAHOPFH_MBGAGGKPNNM_OFFSET UNITYSDK_OFFSET(0x1565C350)
#define FAAEKAHOPFH_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0x1565AE80)
#define FAAEKAHOPFH_NANEIOLLIFD_OFFSET UNITYSDK_OFFSET(0x1565B740)
#define FAAEKAHOPFH_NHNIFCONALO_OFFSET UNITYSDK_OFFSET(0x1565B2C0)
#define FAAEKAHOPFH_OLFICGFKANP_OFFSET UNITYSDK_OFFSET(0x1565B7C0)
#define FAAEKAHOPFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1565A4A0)
#define FAAEKAHOPFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1565C150)
#define FAAEKAHOPFH_OOFAEFJGLKB_OFFSET UNITYSDK_OFFSET(0x1565C400)
#define FAAEKAHOPFH_TICK_OFFSET UNITYSDK_OFFSET(0x1565C200)

	class FAAEKAHOPFH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KLJGNBBMJCM* KDKAGOHPOOC; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* DIJHIMLLBHG; // 0x28
		::RPG::GameCore::LittleGameAbilityPixAirFireMissle* OFKGLJOAMLD; // 0x30
		::System::Int32 AGKGKJFNBED; // 0x38
		::System::Single BPAIDCADMDO; // 0x3C
		::System::Boolean OJKJLINNHCJ; // 0x40
		static ::System::Int32* StaticGet_CNGFGKLFHOD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x13DC0);
		}

		static ::System::Single* StaticGet_PLBLHNPPLAF()
		{
			return (::System::Single*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x13DC4);
		}

		static ::System::Boolean* StaticGet_AHBDEBJKMOC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x13DC8);
		}

		static ::System::Int32* StaticGet_LCFIPJPEKLK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x13DCC);
		}

		static ::System::Single* StaticGet_BDNOFBGDBFF()
		{
			return (::System::Single*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x13DD0);
		}

		// static const ::System::Object DNIMBGFNGKM; // 0x0
		// static const ::System::String* FOHPANOLBGM; // 0x0
		// static const ::System::String* DNGIMJCIIIK; // 0x0
		// static const ::System::String* NLNONDMDKKE; // 0x0
		// static const ::System::String* HIOKECIJOPP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirFireMissle*))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* NHNIFCONALO(::System::Int32 a1)
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_NHNIFCONALO_OFFSET))(this, a1);
		}

		::System::Void HMHNEKHBOJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_HMHNEKHBOJP_OFFSET))(this);
		}

		::System::Void OLFICGFKANP(::FAAEKAHOPFH_CLMGGJMJMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAAEKAHOPFH_CLMGGJMJMBF*))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_OLFICGFKANP_OFFSET))(this, a1);
		}

		::System::Void EDIFIFHOHLB(::RPG::GameCore::TaskContext* a1, ::BCLKDMAHONE* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BCLKDMAHONE*, ::System::Int32))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_EDIFIFHOHLB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_GETCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* MNONPFEGMPH(::IOGNBKGNPFD* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_MNONPFEGMPH_OFFSET))(this, a1);
		}

		::System::Void NANEIOLLIFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_NANEIOLLIFD_OFFSET))(this);
		}

		::System::Single MBGAGGKPNNM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_MBGAGGKPNNM_OFFSET))(this);
		}

		::KLJGNBBMJCM* CJPOIEIKMPC()
		{
			return ((::KLJGNBBMJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_CJPOIEIKMPC_OFFSET))(this);
		}

		::System::Int32 KJAHMBMOFFH(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_KJAHMBMOFFH_OFFSET))(this, a1);
		}

		static ::System::Int32 HFPDKMKIIOC(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_HFPDKMKIIOC_OFFSET))(a1);
		}

		static ::System::Single HKDAGKJKKOD(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_HKDAGKJKKOD_OFFSET))(a1);
		}

		static ::System::Void DDBBMPFCIMF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAAEKAHOPFH_DDBBMPFCIMF_OFFSET))();
		}

		static ::System::Void OOFAEFJGLKB(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_OOFAEFJGLKB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJILDDEEDC(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_EOJILDDEEDC_OFFSET))(a1, a2);
		}

	};
