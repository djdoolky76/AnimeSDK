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

#define FAAEKAHOPFH_CJPOIEIKMPC_OFFSET UNITYSDK_OFFSET(0x1564F370)
#define FAAEKAHOPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1564E6F0)
#define FAAEKAHOPFH_DDBBMPFCIMF_OFFSET UNITYSDK_OFFSET(0x1564F0D0)
#define FAAEKAHOPFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1564E760)
#define FAAEKAHOPFH_EDIFIFHOHLB_OFFSET UNITYSDK_OFFSET(0x156501B0)
#define FAAEKAHOPFH_EOJILDDEEDC_OFFSET UNITYSDK_OFFSET(0x15650800)
#define FAAEKAHOPFH_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15650700)
#define FAAEKAHOPFH_HFPDKMKIIOC_OFFSET UNITYSDK_OFFSET(0x156500B0)
#define FAAEKAHOPFH_HKDAGKJKKOD_OFFSET UNITYSDK_OFFSET(0x15650140)
#define FAAEKAHOPFH_HMHNEKHBOJP_OFFSET UNITYSDK_OFFSET(0x1564F960)
#define FAAEKAHOPFH_KJAHMBMOFFH_OFFSET UNITYSDK_OFFSET(0x1564F510)
#define FAAEKAHOPFH_MBGAGGKPNNM_OFFSET UNITYSDK_OFFSET(0x15650690)
#define FAAEKAHOPFH_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0x1564F1C0)
#define FAAEKAHOPFH_NANEIOLLIFD_OFFSET UNITYSDK_OFFSET(0x1564FA80)
#define FAAEKAHOPFH_NHNIFCONALO_OFFSET UNITYSDK_OFFSET(0x1564F600)
#define FAAEKAHOPFH_OLFICGFKANP_OFFSET UNITYSDK_OFFSET(0x1564FB00)
#define FAAEKAHOPFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1564E800)
#define FAAEKAHOPFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15650490)
#define FAAEKAHOPFH_OOFAEFJGLKB_OFFSET UNITYSDK_OFFSET(0x15650740)
#define FAAEKAHOPFH_TICK_OFFSET UNITYSDK_OFFSET(0x15650540)

inline static constexpr unsigned int FAAEKAHOPFH_TypeDefinitionIndex = 58189;

	class FAAEKAHOPFH : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DIJHIMLLBHG; // 0x18
		::KLJGNBBMJCM* KDKAGOHPOOC; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::LittleGameAbilityPixAirFireMissle* OFKGLJOAMLD; // 0x30
		::System::Single BPAIDCADMDO; // 0x38
		::System::Int32 AGKGKJFNBED; // 0x3C
		::System::Boolean OJKJLINNHCJ; // 0x40
		static ::System::Boolean* StaticGet_AHBDEBJKMOC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x12120);
		}

		static ::System::Single* StaticGet_BDNOFBGDBFF()
		{
			return (::System::Single*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x12124);
		}

		static ::System::Single* StaticGet_PLBLHNPPLAF()
		{
			return (::System::Single*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x12128);
		}

		static ::System::Int32* StaticGet_CNGFGKLFHOD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x1212C);
		}

		static ::System::Int32* StaticGet_LCFIPJPEKLK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FAAEKAHOPFH")->GetStaticField(0x12130);
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
