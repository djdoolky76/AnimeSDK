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

#define BBDBABJLIIB_AOAPENNHGJH_OFFSET UNITYSDK_OFFSET(0x199EF3D0)
#define BBDBABJLIIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x199EF9E0)
#define BBDBABJLIIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x199F0A40)
#define BBDBABJLIIB_CJMCINADHHB_OFFSET UNITYSDK_OFFSET(0x199EF290)
#define BBDBABJLIIB_COHNEGMJGBE_OFFSET UNITYSDK_OFFSET(0x199EF380)
#define BBDBABJLIIB_CTOR_OFFSET UNITYSDK_OFFSET(0x199F0970)
#define BBDBABJLIIB_DDJHJJKNNDK_OFFSET UNITYSDK_OFFSET(0x199EF900)
#define BBDBABJLIIB_EHBLEFLDGMK_OFFSET UNITYSDK_OFFSET(0x199F0740)
#define BBDBABJLIIB_EIDAGEFKFLK_OFFSET UNITYSDK_OFFSET(0x199EF970)
#define BBDBABJLIIB_EPPDLCBGEOK_OFFSET UNITYSDK_OFFSET(0x199EF240)
#define BBDBABJLIIB_GCHGNCPHFEE_OFFSET UNITYSDK_OFFSET(0x199EF330)
#define BBDBABJLIIB_GEDMLJGBIIN_OFFSET UNITYSDK_OFFSET(0x199EF2E0)
#define BBDBABJLIIB_GET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x199EF470)
#define BBDBABJLIIB_GET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x199EF490)
#define BBDBABJLIIB_GFALNCOMDMF_OFFSET UNITYSDK_OFFSET(0x199EFE80)
#define BBDBABJLIIB_HGBNMLKLGMC_OFFSET UNITYSDK_OFFSET(0x199F02E0)
#define BBDBABJLIIB_IDDENENGCPK_OFFSET UNITYSDK_OFFSET(0x199EF580)
#define BBDBABJLIIB_JBMJOJOEFLC_OFFSET UNITYSDK_OFFSET(0x199EF420)
#define BBDBABJLIIB_KNNDJONIAFD_OFFSET UNITYSDK_OFFSET(0x199F0510)
#define BBDBABJLIIB_LIJJCKLMDMO_OFFSET UNITYSDK_OFFSET(0x199EF4B0)
#define BBDBABJLIIB_MPDGBLFIGEE_OFFSET UNITYSDK_OFFSET(0x199EF7B0)
#define BBDBABJLIIB_NMJKFCLMIHO_OFFSET UNITYSDK_OFFSET(0x199EFC60)
#define BBDBABJLIIB_OINACMELBHL_OFFSET UNITYSDK_OFFSET(0x199EF890)
#define BBDBABJLIIB_PPMKBOHDHNK_OFFSET UNITYSDK_OFFSET(0x199F00B0)
#define BBDBABJLIIB_SET_ENDBLACKCLOSEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x199EF480)
#define BBDBABJLIIB_SET_ENDMASKTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x199EF4A0)

inline static constexpr unsigned int BBDBABJLIIB_TypeDefinitionIndex = 54721;

	class BBDBABJLIIB : public ::System::Object
	{
	public:
		::System::String* HMBOFKOIBFG; // 0x10
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* HDLGKCHPMPP; // 0x18
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::ScreenTransferType>* FIJKLDEPEEJ; // 0x20
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HAKFLEJNHCG; // 0x28
		::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* NBPMENAIAPC; // 0x30
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::StoryBlackType>* HILHFKIDEMJ; // 0x38
		::RPG::GameCore::PerformanceMaskStack_1<::RPG::GameCore::CustomScreenTransferType>* OKABMMEBPHE; // 0x40
		::RPG::GameCore::PerformanceMaskStack_1<::System::Boolean>* MMNCMNKAHIN; // 0x48
		::System::String* OGIICLPEECP; // 0x50
		::System::Single _EndBlackCloseDelayTime_k__BackingField; // 0x58
		::RPG::GameCore::PerformanceChangePlayerType JGEMAMGFABJ; // 0x5C
		::System::Boolean BALBCKJGOKC; // 0x60
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x64
		::System::UInt32 HNPDLANHONH; // 0x68
		::System::UInt32 _EndMaskTalkSentenceID_k__BackingField; // 0x6C
		::RPG::GameCore::PerformanceSkipType HLEKAACPFHP; // 0x70
		static ::System::Single* StaticGet_KLDAKHELOLK()
		{
			return (::System::Single*)UnitySDK::FromName("", "BBDBABJLIIB")->GetStaticField(0x14640);
		}

		static ::System::Boolean* StaticGet_IFJGFIBCIGO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBDBABJLIIB")->GetStaticField(0x14644);
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
