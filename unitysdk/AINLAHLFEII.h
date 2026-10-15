#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLOMEEPIEM.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/BPFKOIIMKBG.h"
class IMPNPPMLNPH;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleState; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define AINLAHLFEII_AGPHBLGBODG_1_OFFSET UNITYSDK_OFFSET(0x12CA9C90)
#define AINLAHLFEII_AGPHBLGBODG_2_OFFSET UNITYSDK_OFFSET(0x12CA9270)
#define AINLAHLFEII_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0x12CA91B0)
#define AINLAHLFEII_AMFOPAFKLNP_OFFSET UNITYSDK_OFFSET(0x12CA9D60)
#define AINLAHLFEII_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CACD60)
#define AINLAHLFEII_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x12CAC150)
#define AINLAHLFEII_CPDHAKMIBHK_OFFSET UNITYSDK_OFFSET(0x12CAC5A0)
#define AINLAHLFEII_CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8C10)
#define AINLAHLFEII_DNKPNAEKEDH_OFFSET UNITYSDK_OFFSET(0x12CA9DF0)
#define AINLAHLFEII_GAKLBIKCJKC_OFFSET UNITYSDK_OFFSET(0x12CA9F70)
#define AINLAHLFEII_GEBGEEBFEIP_OFFSET UNITYSDK_OFFSET(0x12CAB3A0)
#define AINLAHLFEII_GET_INFO_OFFSET UNITYSDK_OFFSET(0x12CA8FE0)
#define AINLAHLFEII_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x12CA8ED0)
#define AINLAHLFEII_GET_MODE_OFFSET UNITYSDK_OFFSET(0x12CA8FD0)
#define AINLAHLFEII_HAOKOPBDNDK_OFFSET UNITYSDK_OFFSET(0x12CAA200)
#define AINLAHLFEII_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0x12CAA730)
#define AINLAHLFEII_JJPNNGHIKLH_OFFSET UNITYSDK_OFFSET(0x12CA8F70)
#define AINLAHLFEII_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CAC1F0)
#define AINLAHLFEII_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x12CAB420)
#define AINLAHLFEII_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0x12CAB2A0)
#define AINLAHLFEII_NAKEGMANLCL_1_OFFSET UNITYSDK_OFFSET(0x12CAAD90)
#define AINLAHLFEII_NAKEGMANLCL_OFFSET UNITYSDK_OFFSET(0x12CAA0E0)
#define AINLAHLFEII_NHJEMDBODLO_OFFSET UNITYSDK_OFFSET(0x12CAAEB0)
#define AINLAHLFEII_PMPHEOGFPFJ_OFFSET UNITYSDK_OFFSET(0x12CAC4A0)

	class AINLAHLFEII : public ::RPG::GameCore::FreeStyleController
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* HPHMLKJONAM; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleState*>* GDEEJGLLLHA; // 0x30
		::System::String* PPIDJBKJJKA; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* FNOKMFIFCOJ; // 0x40
		::RPG::GameCore::FreeStyleMotionInfoConfig* COIFFIJOMDA; // 0x48
		::System::Collections::Generic::SortedSet_1<::System::Object*>* MHFEBEJBEFB; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* NBHDBDMIKJD; // 0x58
		::Il2CppArray<::System::Object*>* GJBEKJDLAMD; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLHNKLJAONG; // 0x68
		::System::Int32 FPCADIACJLG; // 0x70
		::System::Nullable* GAPHHKAILID; // 0x74
		::System::Nullable* CADOLMLNLFD; // 0x7C
		::System::Byte _padding0[0x1C];
		::System::Boolean EFALFIHHKOI; // 0xA0
		::System::Boolean CECCMFMBGBI; // 0xA1
		::System::Byte _padding1[0x2];
		::System::Nullable* HFEEDBMEOFO; // 0xA4
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_FKNPDNGBNLI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "AINLAHLFEII")->GetStaticField(0x5A360);
		}

		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + AINLAHLFEII_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AINLAHLFEII_CCTOR_OFFSET))();
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean JJPNNGHIKLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_JJPNNGHIKLH_OFFSET))(this);
		}

		::RPG::GameCore::EFreeStyleControlMode get_Mode()
		{
			return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_GET_MODE_OFFSET))(this);
		}

		::IMPNPPMLNPH* get_Info()
		{
			return ((::IMPNPPMLNPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_GET_INFO_OFFSET))(this);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*))((::PBYTE)hIl2Cpp + AINLAHLFEII_AGPHBLGBODG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG_1(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + AINLAHLFEII_AGPHBLGBODG_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AGPHBLGBODG_2(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3, ::System::Boolean a4, ::System::Nullable* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*, ::System::Boolean, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + AINLAHLFEII_AGPHBLGBODG_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AINLAHLFEII_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHJEMDBODLO(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AINLAHLFEII_NHJEMDBODLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + AINLAHLFEII_MAHCHECNLEP_OFFSET))(this, a1, a2);
		}

		::System::Void GEBGEEBFEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_GEBGEEBFEIP_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AINLAHLFEII_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean DNKPNAEKEDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_DNKPNAEKEDH_OFFSET))(this);
		}

		::System::Void AMFOPAFKLNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_AMFOPAFKLNP_OFFSET))(this);
		}

		::System::UInt32 GAKLBIKCJKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_GAKLBIKCJKC_OFFSET))(this);
		}

		::System::Boolean PMPHEOGFPFJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AINLAHLFEII_PMPHEOGFPFJ_OFFSET))(this, a1);
		}

		::System::Void HAOKOPBDNDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINLAHLFEII_HAOKOPBDNDK_OFFSET))(this);
		}

		::System::Boolean NAKEGMANLCL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AINLAHLFEII_NAKEGMANLCL_OFFSET))(this, a1, a2);
		}

		::System::Boolean NAKEGMANLCL_1(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + AINLAHLFEII_NAKEGMANLCL_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPDHAKMIBHK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AINLAHLFEII_CPDHAKMIBHK_OFFSET))(this, a1, a2);
		}

	};
