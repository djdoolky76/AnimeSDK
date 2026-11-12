#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
class CEEGMMCFCBG;
class EEMOEKHIFNN;
class PEAFBFCPFCC;
class PFLDDDHEAJO;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD92BA30)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_HASCARDREWARD_OFFSET UNITYSDK_OFFSET(0xD92C120)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD92B360)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISBOSS_OFFSET UNITYSDK_OFFSET(0xD92B750)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD92B860)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xD92C1F0)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD92C180)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_REWARDCARDICONPATH_OFFSET UNITYSDK_OFFSET(0xD92C130)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_TRACKFIGHTACTION_OFFSET UNITYSDK_OFFSET(0xD92C250)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__DOTRACKFIGHT_OFFSET UNITYSDK_OFFSET(0xD92BE90)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__MARKSEEN_OFFSET UNITYSDK_OFFSET(0xD92BE20)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__TRACKFIGHT_OFFSET UNITYSDK_OFFSET(0xD92BB20)
#define RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___TRACKFIGHT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD92C260)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int HouguMapFightViewModel_TypeDefinitionIndex = 83549;

	class HouguMapFightViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::PEAFBFCPFCC* _RedDotService; // 0x20
		::EEMOEKHIFNN* _OverrideService; // 0x28
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* _Fight; // 0x30
		::PFLDDDHEAJO* _MissionProgressService; // 0x38
		::CEEGMMCFCBG* _TrackFightAction_k__BackingField; // 0x40
		::System::Boolean _HasCardReward_k__BackingField; // 0x48
		::System::Boolean _IsHardMode; // 0x49
		::System::Byte _padding0[0x2];
		::System::UInt32 _TrackSubMissionID; // 0x4C
		::System::Void _ctor(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1, ::EEMOEKHIFNN* a2, ::PFLDDDHEAJO* a3, ::PEAFBFCPFCC* a4, ::System::UInt32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::EEMOEKHIFNN*, ::PFLDDDHEAJO*, ::PEAFBFCPFCC*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _TrackFight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__TRACKFIGHT_OFFSET))(this);
		}

		::System::Void _DoTrackFight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__DOTRACKFIGHT_OFFSET))(this);
		}

		::System::Void _MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL__MARKSEEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_HasCardReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_HASCARDREWARD_OFFSET))(this);
		}

		::System::String* get_RewardCardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_REWARDCARDICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISBOSS_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_ISNEW_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_TrackFightAction()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL_GET_TRACKFIGHTACTION_OFFSET))(this);
		}

		::System::Void __TrackFight_b__1_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_HOUGUMAPFIGHTVIEWMODEL___TRACKFIGHT_B__1_0_OFFSET))(this, a1);
		}

	};
}
