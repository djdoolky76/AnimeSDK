#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/MusicRhythmLevelRewardInfo.h"
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace RPG::GameCore { class MusicRhythmLevelRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0xE3A5730)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE3A5790)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_FIREMUSICRHYTHMEVENT_OFFSET UNITYSDK_OFFSET(0xE3A6130)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDIDS_1_OFFSET UNITYSDK_OFFSET(0xE3A4080)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDIDS_OFFSET UNITYSDK_OFFSET(0xE3A5FF0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDINFOS_OFFSET UNITYSDK_OFFSET(0xE3A5C20)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GETTRACKS_OFFSET UNITYSDK_OFFSET(0xE3A59B0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ALLSTARNUM_OFFSET UNITYSDK_OFFSET(0xE3A3C40)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_CANCHEAT_OFFSET UNITYSDK_OFFSET(0xE3A6430)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_DIFFICULTYTEXTID_OFFSET UNITYSDK_OFFSET(0xE3A3CF0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE3A3BA0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE3A62D0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_HASTRY_OFFSET UNITYSDK_OFFSET(0xE3A6470)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xE3A61A0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE3A3780)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xE3A52E0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISFULLCOMBO_OFFSET UNITYSDK_OFFSET(0xE3A64B0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISMAXDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xE3A4610)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xE3A61E0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0xE3A63D0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xE3A6370)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0xE3A61C0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE3A6270)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_SHOWEDUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xE3A6760)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_STARREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0xE3A5E50)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_GET_USECHEAT_OFFSET UNITYSDK_OFFSET(0xE3A64D0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SETNAMEANDDESC_OFFSET UNITYSDK_OFFSET(0xE3A5840)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SETPASTLEVEL_OFFSET UNITYSDK_OFFSET(0xE3A57A0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SETTRACKS_OFFSET UNITYSDK_OFFSET(0xE3A57F0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SET_ID_OFFSET UNITYSDK_OFFSET(0xE3A61B0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SET_ISFULLCOMBO_OFFSET UNITYSDK_OFFSET(0xE3A64C0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SET_NOWSTARNUM_OFFSET UNITYSDK_OFFSET(0xE3A61D0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SET_SHOWEDUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xE3A6860)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_SET_USECHEAT_OFFSET UNITYSDK_OFFSET(0xE3A6510)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_UPDATEFULLCOMBO_OFFSET UNITYSDK_OFFSET(0xE3A5960)
#define RPG_CLIENT_MUSICRHYTHMLEVEL_UPDATESTARNUM_OFFSET UNITYSDK_OFFSET(0xE3A58B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevel_TypeDefinitionIndex = 63223;

	class MusicRhythmLevel : public ::System::Object
	{
	public:
		::RPG::Client::MusicRhythmLevel* _PastLevel; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* _MusicRhythmTracks; // 0x18
		::RPG::Client::TextID _LevelDesc; // 0x20
		::System::UInt32 _NowStarNum_k__BackingField; // 0x30
		::System::Boolean _IsFullCombo_k__BackingField; // 0x34
		::System::Boolean _HasTry; // 0x35
		::System::Byte _padding0[0x2];
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _LevelName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MusicRhythmLevel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MusicRhythmLevel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_CREATE_OFFSET))(a1);
		}

		::System::Void SetPastLevel(::RPG::Client::MusicRhythmLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SETPASTLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetTracks(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SETTRACKS_OFFSET))(this, a1);
		}

		::System::Void SetNameAndDesc(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SETNAMEANDDESC_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_UPDATESTARNUM_OFFSET))(this, a1);
		}

		::System::Void UpdateFullCombo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_UPDATEFULLCOMBO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>* GetTracks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GETTRACKS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevelRewardInfo>* GetRewardInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MusicRhythmLevelRewardInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardIDs(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDIDS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardIDs_1()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GETREWARDIDS_1_OFFSET))(this);
		}

		::System::Void FireMusicRhythmEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_FIREMUSICRHYTHMEVENT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NowStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_NOWSTARNUM_OFFSET))(this);
		}

		::System::Void set_NowStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SET_NOWSTARNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::MusicRhythmLevelRow* get_Row()
		{
			return ((::RPG::GameCore::MusicRhythmLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_AllStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ALLSTARNUM_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISFINISH_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_DIFFICULTY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StarRewardIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_STARREWARDIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_LEVELNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_LEVELDESC_OFFSET))(this);
		}

		::System::Boolean get_CanCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_CANCHEAT_OFFSET))(this);
		}

		::System::Boolean get_HasTry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_HASTRY_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsFullCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISFULLCOMBO_OFFSET))(this);
		}

		::System::Void set_IsFullCombo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SET_ISFULLCOMBO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMaxDifficulty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_ISMAXDIFFICULTY_OFFSET))(this);
		}

		::RPG::Client::TextID get_DifficultyTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_DIFFICULTYTEXTID_OFFSET))(this);
		}

		::System::Boolean get_UseCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_USECHEAT_OFFSET))(this);
		}

		::System::Void set_UseCheat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SET_USECHEAT_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowedUnlockHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_GET_SHOWEDUNLOCKHINT_OFFSET))(this);
		}

		::System::Void set_ShowedUnlockHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL_SET_SHOWEDUNLOCKHINT_OFFSET))(this, a1);
		}

	};
}
