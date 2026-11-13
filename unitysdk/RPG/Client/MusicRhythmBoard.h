#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JONAOEKOCEI;
class NEKAOEFLAMO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MusicRhythmGameConfig; }
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace RPG::GameCore { class MusicRhythmLevelRow; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICRHYTHMBOARD_ADBJEFDIACM_OFFSET UNITYSDK_OFFSET(0x1C2A9FE0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x1C2AB780)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ANHFHAMOEDE_OFFSET UNITYSDK_OFFSET(0x1C2AA600)
#define RPG_CLIENT_MUSICRHYTHMBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2AB890)
#define RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2A93C0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_DJIOOMCPCCA_OFFSET UNITYSDK_OFFSET(0x1C2A9130)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ENOEACEEJHI_OFFSET UNITYSDK_OFFSET(0x1C2AAA10)
#define RPG_CLIENT_MUSICRHYTHMBOARD_FBBLCCHMBIP_OFFSET UNITYSDK_OFFSET(0x1C2A8010)
#define RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2AABF0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GBNGCFNLAAL_OFFSET UNITYSDK_OFFSET(0x1C2A9EC0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1C2AB360)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1C2AAC50)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x1C2AB830)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1C2AB7D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1C2AB7F0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x1C2AB810)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C2AB870)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x1C2AB850)
#define RPG_CLIENT_MUSICRHYTHMBOARD_GIAJLDNFINK_OFFSET UNITYSDK_OFFSET(0x1C2AA140)
#define RPG_CLIENT_MUSICRHYTHMBOARD_HGELPFMOCMO_OFFSET UNITYSDK_OFFSET(0x1C2AA1F0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_HIJLOBCLDFA_OFFSET UNITYSDK_OFFSET(0x1C2AA930)
#define RPG_CLIENT_MUSICRHYTHMBOARD_IIEDLIIEHDD_OFFSET UNITYSDK_OFFSET(0x1C2A8100)
#define RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x1C2A79B0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET UNITYSDK_OFFSET(0x1C2A9CD0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_JNFFCJFEKKN_OFFSET UNITYSDK_OFFSET(0x1C2AAD80)
#define RPG_CLIENT_MUSICRHYTHMBOARD_JOKKOJKJJMM_OFFSET UNITYSDK_OFFSET(0x1C2AA550)
#define RPG_CLIENT_MUSICRHYTHMBOARD_KDHDKBPCNAF_OFFSET UNITYSDK_OFFSET(0x1C2AA450)
#define RPG_CLIENT_MUSICRHYTHMBOARD_KDMJPGOKJBC_OFFSET UNITYSDK_OFFSET(0x1C2AAAD0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_NDIODFOAKOD_OFFSET UNITYSDK_OFFSET(0x1C2AA330)
#define RPG_CLIENT_MUSICRHYTHMBOARD_PEOJKIOGHCD_OFFSET UNITYSDK_OFFSET(0x1C2AA7E0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x1C2A8DC0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_PNNCDAICGNF_OFFSET UNITYSDK_OFFSET(0x1C2AA730)
#define RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET UNITYSDK_OFFSET(0x1C2AB440)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET UNITYSDK_OFFSET(0x1C2A91D0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x1C2AB840)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1C2AB7E0)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1C2AB800)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET UNITYSDK_OFFSET(0x1C2AB820)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C2AB880)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET UNITYSDK_OFFSET(0x1C2AB860)
#define RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET UNITYSDK_OFFSET(0x1C2A9D30)
#define RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET UNITYSDK_OFFSET(0x1C2A8D10)
#define RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C2AAB90)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmBoard_TypeDefinitionIndex = 61442;

	class MusicRhythmBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Boolean _IsDisposed_k__BackingField; // 0x48
		::System::Byte _padding0[0x7];
		::NEKAOEFLAMO* FENADDOEJCE; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* AJPLPOEALIC; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* EFDAADELOHM; // 0x60
		::RPG::GameCore::GameEntity* HGOAPJMKJPO; // 0x68
		::System::Single PJHMFAODDLN; // 0x70
		::System::Byte _padding1[0x4];
		::JONAOEKOCEI* GunManager; // 0x78
		::System::UInt32 _LevelId_k__BackingField; // 0x80
		::System::Int32 _TutorialFailTimes_k__BackingField; // 0x84
		::System::Boolean _SkipTutorial_k__BackingField; // 0x88
		::System::Byte _padding2[0x3];
		::System::Int32 TutorialTotalTime; // 0x8C
		::System::String* PHAPIMODJPP; // 0x90
		static ::RPG::GameCore::MusicRhythmGameConfig** StaticGet_MusicRhythmConfig()
		{
			return (::RPG::GameCore::MusicRhythmGameConfig**)UnitySDK::FromName("RPG.Client", "MusicRhythmBoard")->GetStaticField(0x13B00);
		}

		static ::RPG::GameCore::MusicRhythmLevelRow** StaticGet__LevelRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmLevelRow**)UnitySDK::FromName("RPG.Client", "MusicRhythmBoard")->GetStaticField(0x13B08);
		}

		static ::RPG::GameCore::MusicRhythmGroupRow** StaticGet__GroupRow_k__BackingField()
		{
			return (::RPG::GameCore::MusicRhythmGroupRow**)UnitySDK::FromName("RPG.Client", "MusicRhythmBoard")->GetStaticField(0x13B10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartMusicRhythm(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_STARTMUSICRHYTHM_OFFSET))(this, a1);
		}

		::System::Void PlayTimeline(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_PLAYTIMELINE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetAdjustMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SETADJUSTMODE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsTimelineFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ISTIMELINEFINISH_OFFSET))(this);
		}

		::System::Void ShowPlayerHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SHOWPLAYERHINT_OFFSET))(this);
		}

		::System::Void GBNGCFNLAAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GBNGCFNLAAL_OFFSET))(this, a1);
		}

		::System::Void ADBJEFDIACM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ADBJEFDIACM_OFFSET))(this, a1);
		}

		::System::Void GIAJLDNFINK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GIAJLDNFINK_OFFSET))(this, a1);
		}

		::System::Void HGELPFMOCMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_HGELPFMOCMO_OFFSET))(this, a1);
		}

		::System::Void NDIODFOAKOD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_NDIODFOAKOD_OFFSET))(this, a1);
		}

		::System::Void KDHDKBPCNAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_KDHDKBPCNAF_OFFSET))(this, a1);
		}

		::System::Void JOKKOJKJJMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_JOKKOJKJJMM_OFFSET))(this, a1);
		}

		::System::Void ANHFHAMOEDE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ANHFHAMOEDE_OFFSET))(this, a1);
		}

		::System::Void PNNCDAICGNF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_PNNCDAICGNF_OFFSET))(this, a1);
		}

		::System::Void PEOJKIOGHCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_PEOJKIOGHCD_OFFSET))(this, a1);
		}

		::System::Void HIJLOBCLDFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_HIJLOBCLDFA_OFFSET))(this, a1);
		}

		::System::Void ENOEACEEJHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ENOEACEEJHI_OFFSET))(this, a1);
		}

		::System::Void KDMJPGOKJBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_KDMJPGOKJBC_OFFSET))(this, a1);
		}

		::RPG::GameCore::MusicRhythmTimelineConfig* DJIOOMCPCCA(::System::String* a1)
		{
			return ((::RPG::GameCore::MusicRhythmTimelineConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_DJIOOMCPCCA_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPoint(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void IIEDLIIEHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_IIEDLIIEHDD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JNFFCJFEKKN(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_JNFFCJFEKKN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::GameEntity* GetEntity(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GETENTITY_OFFSET))(this, a1);
		}

		::System::Void ResetAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_RESETANIMATORS_OFFSET))(this);
		}

		::System::Void AddTutorialFailTimes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_ADDTUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_ISDISPOSED_OFFSET))(this, a1);
		}

		::System::Void FBBLCCHMBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_FBBLCCHMBIP_OFFSET))(this);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELID_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::MusicRhythmLevelRow* get_LevelRow()
		{
			return ((::RPG::GameCore::MusicRhythmLevelRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_LEVELROW_OFFSET))();
		}

		static ::System::Void set_LevelRow(::RPG::GameCore::MusicRhythmLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_LEVELROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::MusicRhythmGroupRow* get_GroupRow()
		{
			return ((::RPG::GameCore::MusicRhythmGroupRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_GROUPROW_OFFSET))();
		}

		static ::System::Void set_GroupRow(::RPG::GameCore::MusicRhythmGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_GROUPROW_OFFSET))(a1);
		}

		::System::Int32 get_TutorialFailTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_TUTORIALFAILTIMES_OFFSET))(this);
		}

		::System::Void set_TutorialFailTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_TUTORIALFAILTIMES_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_GET_SKIPTUTORIAL_OFFSET))(this);
		}

		::System::Void set_SkipTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMBOARD_SET_SKIPTUTORIAL_OFFSET))(this, a1);
		}

	};
}
