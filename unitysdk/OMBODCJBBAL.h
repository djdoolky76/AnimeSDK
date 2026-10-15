#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class LCADLLHKAGE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OMBODCJBBAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1A250)
#define OMBODCJBBAL_GET_ASSISTANTPRETALK_OFFSET UNITYSDK_OFFSET(0xBF1A220)
#define OMBODCJBBAL_GET_ASSISTANTTALK_OFFSET UNITYSDK_OFFSET(0xBF1A210)
#define OMBODCJBBAL_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xBF1A1A0)
#define OMBODCJBBAL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBF1A1F0)
#define OMBODCJBBAL_GET_ID_OFFSET UNITYSDK_OFFSET(0xBF1A1B0)
#define OMBODCJBBAL_GET_LOCKEDTALK_OFFSET UNITYSDK_OFFSET(0xBF1A240)
#define OMBODCJBBAL_GET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0xBF1A1E0)
#define OMBODCJBBAL_GET_PARTNERTALK_OFFSET UNITYSDK_OFFSET(0xBF1A200)
#define OMBODCJBBAL_GET_TALENTPOINTIDLIST_OFFSET UNITYSDK_OFFSET(0xBF1A1C0)
#define OMBODCJBBAL_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xBF1A1D0)
#define OMBODCJBBAL_GET_UNLOCKTALK_OFFSET UNITYSDK_OFFSET(0xBF1A230)

inline static constexpr unsigned int OMBODCJBBAL_TypeDefinitionIndex = 80149;

	class OMBODCJBBAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _TalentPointIDList_k__BackingField; // 0x10
		::RPG::Client::TextID _AssistantTalk_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _PartnerActorID_k__BackingField; // 0x2C
		::RPG::Client::TextID _AssistantPreTalk_k__BackingField; // 0x30
		::RPG::Client::TextID _UnlockTalk_k__BackingField; // 0x40
		::System::Int32 _CacheKey_k__BackingField; // 0x50
		::System::UInt32 _UnlockByFinishSubMissionID_k__BackingField; // 0x54
		::RPG::Client::TextID _PartnerTalk_k__BackingField; // 0x58
		::RPG::Client::TextID _Desc_k__BackingField; // 0x68
		::RPG::Client::TextID _LockedTalk_k__BackingField; // 0x78
		::System::Void _ctor(::LCADLLHKAGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCADLLHKAGE*))((::PBYTE)hIl2Cpp + OMBODCJBBAL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_TalentPointIDList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_TALENTPOINTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_UnlockByFinishSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_UNLOCKBYFINISHSUBMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_PartnerActorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_PARTNERACTORID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_PartnerTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_PARTNERTALK_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssistantTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_ASSISTANTTALK_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssistantPreTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_ASSISTANTPRETALK_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_UNLOCKTALK_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockedTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBODCJBBAL_GET_LOCKEDTALK_OFFSET))(this);
		}

	};
