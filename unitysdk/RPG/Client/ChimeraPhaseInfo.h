#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDIOKENOFNJ.h"
#include "unitysdk/RPG/Client/ChimeraLastPhaseCompleteStatus.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraPhaseData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERAPHASEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD4B9250)
#define RPG_CLIENT_CHIMERAPHASEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4B9E50)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD4BAF70)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET UNITYSDK_OFFSET(0xD4BAE10)
#define RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET UNITYSDK_OFFSET(0xD4BA9E0)
#define RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xD4BB090)
#define RPG_CLIENT_CHIMERAPHASEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD4B9260)
#define RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0xD4BB0A0)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0xD4B5800)
#define RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET UNITYSDK_OFFSET(0xD4B6BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPhaseInfo_TypeDefinitionIndex = 64871;

	class ChimeraPhaseInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraPhaseData*>* _PhaseDataDict; // 0x10
		::System::UInt32 _CurrentPhaseID; // 0x18
		::RPG::Client::ChimeraLastPhaseCompleteStatus _LastPhaseCompleteStatus_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCPHASEID_OFFSET))(this, a1);
		}

		::System::Void SyncFinishStatus(::HDIOKENOFNJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDIOKENOFNJ))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SYNCFINISHSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetPhaseDataByRoundID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETPHASEDATABYROUNDID_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraPhaseData* GetCurrentPhaseData()
		{
			return ((::RPG::Client::ChimeraPhaseData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GETCURRENTPHASEDATA_OFFSET))(this);
		}

		::RPG::Client::ChimeraLastPhaseCompleteStatus get_LastPhaseCompleteStatus()
		{
			return ((::RPG::Client::ChimeraLastPhaseCompleteStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_GET_LASTPHASECOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void set_LastPhaseCompleteStatus(::RPG::Client::ChimeraLastPhaseCompleteStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraLastPhaseCompleteStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAPHASEINFO_SET_LASTPHASECOMPLETESTATUS_OFFSET))(this, a1);
		}

	};
}
