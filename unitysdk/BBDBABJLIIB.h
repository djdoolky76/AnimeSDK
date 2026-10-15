#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/PerformanceChangePlayerType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/System/Object.h"
class BBDBABJLIIB;
namespace RPG::GameCore { class PerformanceARow; }
namespace RPG::GameCore { class PerformanceCRow; }
namespace RPG::GameCore { class PerformanceDRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceVideoRow; }
namespace RPG::GameCore { template <typename T> class PerformanceMaskStack_1; }
namespace System { class String; }

#define BBDBABJLIIB_AOAPENNHGJH_OFFSET UNITYSDK_OFFSET(0x15E76CA0)
#define BBDBABJLIIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E772A0)
#define BBDBABJLIIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E78310)
#define BBDBABJLIIB_CJMCINADHHB_OFFSET UNITYSDK_OFFSET(0x15E76B60)
#define BBDBABJLIIB_COHNEGMJGBE_OFFSET UNITYSDK_OFFSET(0x15E76C50)
#define BBDBABJLIIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E78240)
#define BBDBABJLIIB_DDJHJJKNNDK_OFFSET UNITYSDK_OFFSET(0x15E771C0)
#define BBDBABJLIIB_EHBLEFLDGMK_OFFSET UNITYSDK_OFFSET(0x15E78010)
#define BBDBABJLIIB_EIDAGEFKFLK_OFFSET UNITYSDK_OFFSET(0x15E77230)
#define BBDBABJLIIB_EPPDLCBGEOK_OFFSET UNITYSDK_OFFSET(0x15E76B10)
#define BBDBABJLIIB_GCHGNCPHFEE_OFFSET UNITYSDK_OFFSET(0x15E76C00)
#define BBDBABJLIIB_GEDMLJGBIIN_OFFSET UNITYSDK_OFFSET(0x15E76BB0)
#define BBDBABJLIIB_GET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x15E76D40)
#define BBDBABJLIIB_GET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x15E76D60)
#define BBDBABJLIIB_GFALNCOMDMF_OFFSET UNITYSDK_OFFSET(0x15E77740)
#define BBDBABJLIIB_HGBNMLKLGMC_OFFSET UNITYSDK_OFFSET(0x15E77BA0)
#define BBDBABJLIIB_IDDENENGCPK_OFFSET UNITYSDK_OFFSET(0x15E76E50)
#define BBDBABJLIIB_JBMJOJOEFLC_OFFSET UNITYSDK_OFFSET(0x15E76CF0)
#define BBDBABJLIIB_KNNDJONIAFD_OFFSET UNITYSDK_OFFSET(0x15E77DD0)
#define BBDBABJLIIB_LIJJCKLMDMO_OFFSET UNITYSDK_OFFSET(0x15E76D80)
#define BBDBABJLIIB_MPDGBLFIGEE_OFFSET UNITYSDK_OFFSET(0x15E77070)
#define BBDBABJLIIB_NMJKFCLMIHO_OFFSET UNITYSDK_OFFSET(0x15E77520)
#define BBDBABJLIIB_OINACMELBHL_OFFSET UNITYSDK_OFFSET(0x15E77150)
#define BBDBABJLIIB_PPMKBOHDHNK_OFFSET UNITYSDK_OFFSET(0x15E77970)
#define BBDBABJLIIB_SET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x15E76D50)
#define BBDBABJLIIB_SET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x15E76D70)

inline static constexpr unsigned int BBDBABJLIIB_TypeDefinitionIndex = 53558;

	class BBDBABJLIIB : public ::System::Object
	{
	public:
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HILHFKIDEMJ; // 0x10
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* HDLGKCHPMPP; // 0x18
		::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* NBPMENAIAPC; // 0x20
		::System::String* OGIICLPEECP; // 0x28
		::System::String* HMBOFKOIBFG; // 0x30
		::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* MMNCMNKAHIN; // 0x38
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HAKFLEJNHCG; // 0x40
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::ScreenTransferType>* FIJKLDEPEEJ; // 0x48
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* OKABMMEBPHE; // 0x50
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x58
		::System::Single _EndBlackCloseDelayTime_k__BackingField; // 0x5C
		::RPG::GameCore::PerformanceChangePlayerType JGEMAMGFABJ; // 0x60
		::RPG::GameCore::PerformanceSkipType HLEKAACPFHP; // 0x64
		::System::Boolean BALBCKJGOKC; // 0x68
		::System::Byte _padding0[0x3];
		::System::UInt32 HNPDLANHONH; // 0x6C
		::System::UInt32 _EndMaskTalkSentenceID_k__BackingField; // 0x70
		static ::System::Boolean* StaticGet_IFJGFIBCIGO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBDBABJLIIB")->GetStaticField(0x14C30);
		}

		static ::System::Single* StaticGet_KLDAKHELOLK()
		{
			return (::System::Single*)UnitySDK::FromName("", "BBDBABJLIIB")->GetStaticField(0x14C34);
		}

		// static const ::System::Object IIGGAHBNNCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBDBABJLIIB_CCTOR_OFFSET))();
		}

		::RPG::GameCore::StoryBlackType EPPDLCBGEOK()
		{
			return ((::RPG::GameCore::StoryBlackType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_EPPDLCBGEOK_OFFSET))(this);
		}

		::RPG::GameCore::StoryBlackType CJMCINADHHB()
		{
			return ((::RPG::GameCore::StoryBlackType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_CJMCINADHHB_OFFSET))(this);
		}

		::RPG::GameCore::ScreenTransferType GEDMLJGBIIN()
		{
			return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_GEDMLJGBIIN_OFFSET))(this);
		}

		::System::Boolean GCHGNCPHFEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_GCHGNCPHFEE_OFFSET))(this);
		}

		::System::Boolean COHNEGMJGBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_COHNEGMJGBE_OFFSET))(this);
		}

		::RPG::GameCore::CustomScreenTransferType AOAPENNHGJH()
		{
			return ((::RPG::GameCore::CustomScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_AOAPENNHGJH_OFFSET))(this);
		}

		::RPG::GameCore::CustomScreenTransferType JBMJOJOEFLC()
		{
			return ((::RPG::GameCore::CustomScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_JBMJOJOEFLC_OFFSET))(this);
		}

		::System::Single get_EndBlackCloseDelayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_GET_ENDBLACKCLOSEDELAYTIME_OFFSET))(this);
		}

		::System::Void set_EndBlackCloseDelayTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBDBABJLIIB_SET_ENDBLACKCLOSEDELAYTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndMaskTalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_GET_ENDMASKTALKSENTENCEID_OFFSET))(this);
		}

		::System::Void set_EndMaskTalkSentenceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBDBABJLIIB_SET_ENDMASKTALKSENTENCEID_OFFSET))(this, a1);
		}

		::System::Boolean LIJJCKLMDMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_LIJJCKLMDMO_OFFSET))(this);
		}

		::System::Boolean IDDENENGCPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_IDDENENGCPK_OFFSET))(this);
		}

		::System::Boolean MPDGBLFIGEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_MPDGBLFIGEE_OFFSET))(this);
		}

		::System::Boolean DDJHJJKNNDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_DDJHJJKNNDK_OFFSET))(this);
		}

		::System::Boolean OINACMELBHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_OINACMELBHL_OFFSET))(this);
		}

		::System::Void EIDAGEFKFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDBABJLIIB_EIDAGEFKFLK_OFFSET))(this);
		}

		static ::BBDBABJLIIB* BPLPBPMEODA(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::String* a3)
		{
			return ((::BBDBABJLIIB*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::BBDBABJLIIB* NMJKFCLMIHO(::RPG::GameCore::ELevelPerformanceType a1, ::System::String* a2)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::String*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_NMJKFCLMIHO_OFFSET))(a1, a2);
		}

		static ::BBDBABJLIIB* GFALNCOMDMF(::RPG::GameCore::PerformanceARow* a1)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::PerformanceARow*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_GFALNCOMDMF_OFFSET))(a1);
		}

		static ::BBDBABJLIIB* PPMKBOHDHNK(::RPG::GameCore::PerformanceCRow* a1)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::PerformanceCRow*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_PPMKBOHDHNK_OFFSET))(a1);
		}

		static ::BBDBABJLIIB* HGBNMLKLGMC(::RPG::GameCore::PerformanceDRow* a1)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::PerformanceDRow*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_HGBNMLKLGMC_OFFSET))(a1);
		}

		static ::BBDBABJLIIB* KNNDJONIAFD(::RPG::GameCore::PerformanceERow* a1)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_KNNDJONIAFD_OFFSET))(a1);
		}

		static ::BBDBABJLIIB* EHBLEFLDGMK(::RPG::GameCore::PerformanceVideoRow* a1)
		{
			return ((::BBDBABJLIIB*(*)(::RPG::GameCore::PerformanceVideoRow*))((::PBYTE)hIl2Cpp + BBDBABJLIIB_EHBLEFLDGMK_OFFSET))(a1);
		}

	};
