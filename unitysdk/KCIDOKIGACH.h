#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class CNIPJLLHIJA;
class MGFNPLKAALN;
class OBJANKHLNGO;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KCIDOKIGACH_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB338150)
#define KCIDOKIGACH_CCHJEFPJBFD_OFFSET UNITYSDK_OFFSET(0xB338090)
#define KCIDOKIGACH_CTOR_OFFSET UNITYSDK_OFFSET(0xB338220)
#define KCIDOKIGACH_FICJINGODOM_OFFSET UNITYSDK_OFFSET(0xB337F90)
#define KCIDOKIGACH_GET_CMTCOUNT_OFFSET UNITYSDK_OFFSET(0xB337F80)
#define KCIDOKIGACH_GET_CMTS_OFFSET UNITYSDK_OFFSET(0xB337F40)
#define KCIDOKIGACH_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xB337F60)
#define KCIDOKIGACH_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB337F50)
#define KCIDOKIGACH_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xB337F70)
#define KCIDOKIGACH_GET_REPORTID_OFFSET UNITYSDK_OFFSET(0xB338210)
#define KCIDOKIGACH_MNLMDIHJFGF_OFFSET UNITYSDK_OFFSET(0xB3383F0)
#define KCIDOKIGACH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB338310)
#define KCIDOKIGACH_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0xB337FD0)
#define KCIDOKIGACH_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0xB3381B0)
#define KCIDOKIGACH___ONEXIT_B__33_0_OFFSET UNITYSDK_OFFSET(0xB338550)

	class KCIDOKIGACH : public ::System::Object
	{
	public:
		::System::Action* HandleExit; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* _Cmts_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::Boolean>* LJJADGBEGGC; // 0x28
		::MGFNPLKAALN* IIDIJLNGJNM; // 0x30
		::System::Action* MDHOFBGIMIG; // 0x38
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		::System::Int32 _CmtCount_k__BackingField; // 0x48
		::System::Boolean FOFDKHPKNDH; // 0x4C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _Content_k__BackingField; // 0x50
		::System::Single _LikeCount_k__BackingField; // 0x60
		::System::UInt32 _ReportID_k__BackingField; // 0x64
		::System::Void _ctor(::OBJANKHLNGO* a1, ::MGFNPLKAALN* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* a5, ::System::String* a6, ::RPG::Client::TextID a7, ::System::Single a8, ::System::Int32 a9, ::System::Action* a10)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::MGFNPLKAALN*, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*, ::System::String*, ::RPG::Client::TextID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + KCIDOKIGACH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* get_Cmts()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_CMTS_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Content()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_CONTENT_OFFSET))(this);
		}

		::System::Single get_LikeCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_LIKECOUNT_OFFSET))(this);
		}

		::System::Int32 get_CmtCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_CMTCOUNT_OFFSET))(this);
		}

		::R3::Observable* FICJINGODOM()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_FICJINGODOM_OFFSET))(this);
		}

		::CEEGMMCFCBG* OGNJAICKAOB()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_OGNJAICKAOB_OFFSET))(this);
		}

		::CEEGMMCFCBG* CCHJEFPJBFD()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_CCHJEFPJBFD_OFFSET))(this);
		}

		::System::Void add_HandleExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCIDOKIGACH_ADD_HANDLEEXIT_OFFSET))(this, a1);
		}

		::System::Void remove_HandleExit(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCIDOKIGACH_REMOVE_HANDLEEXIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReportID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_GET_REPORTID_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void MNLMDIHJFGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_MNLMDIHJFGF_OFFSET))(this);
		}

		::System::Void __OnExit_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH___ONEXIT_B__33_0_OFFSET))(this);
		}

	};
