#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class CNIPJLLHIJA;
class MGFNPLKAALN;
class OBJANKHLNGO;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KCIDOKIGACH_ADD_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x1A484910)
#define KCIDOKIGACH_CCHJEFPJBFD_OFFSET UNITYSDK_OFFSET(0x1A484850)
#define KCIDOKIGACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4849E0)
#define KCIDOKIGACH_FICJINGODOM_OFFSET UNITYSDK_OFFSET(0x1A484750)
#define KCIDOKIGACH_GET_CMTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A484740)
#define KCIDOKIGACH_GET_CMTS_OFFSET UNITYSDK_OFFSET(0x1A484700)
#define KCIDOKIGACH_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1A484720)
#define KCIDOKIGACH_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A484710)
#define KCIDOKIGACH_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0x1A484730)
#define KCIDOKIGACH_GET_REPORTID_OFFSET UNITYSDK_OFFSET(0x1A4849D0)
#define KCIDOKIGACH_MNLMDIHJFGF_OFFSET UNITYSDK_OFFSET(0x1A484BB0)
#define KCIDOKIGACH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1A484AD0)
#define KCIDOKIGACH_OGNJAICKAOB_OFFSET UNITYSDK_OFFSET(0x1A484790)
#define KCIDOKIGACH_REMOVE_HANDLEEXIT_OFFSET UNITYSDK_OFFSET(0x1A484970)
#define KCIDOKIGACH___ONEXIT_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A484D10)

inline static constexpr unsigned int KCIDOKIGACH_TypeDefinitionIndex = 82461;

	class KCIDOKIGACH : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::CNIPJLLHIJA*>* _Cmts_k__BackingField; // 0x18
		::MGFNPLKAALN* IIDIJLNGJNM; // 0x20
		::System::Action* MDHOFBGIMIG; // 0x28
		::R3::ReactiveProperty_1<::System::Boolean>* LJJADGBEGGC; // 0x30
		::System::Action* HandleExit; // 0x38
		::System::String* _ImagePath_k__BackingField; // 0x40
		::System::Boolean FOFDKHPKNDH; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 _ReportID_k__BackingField; // 0x4C
		::RPG::Client::TextID _Content_k__BackingField; // 0x50
		::System::Single _LikeCount_k__BackingField; // 0x60
		::System::Int32 _CmtCount_k__BackingField; // 0x64
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

		::R3::Observable_1<::System::Boolean>* FICJINGODOM()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIDOKIGACH_FICJINGODOM_OFFSET))(this);
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
