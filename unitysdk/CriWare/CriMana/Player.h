#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Player_AudioTrack.h"
#include "unitysdk/CriWare/CriMana/Player_CriManaUnityPlayer_RenderEventAction.h"
#include "unitysdk/CriWare/CriMana/Player_SetMode.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/CriWare/CriMana/Player_TimerType.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriManaMovieMaterialBase; }
namespace CriWare { class CriManaMoviePlayerHolder; }
namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriMana { class Player_CuePointCallback; }
namespace CriWare::CriMana { class Player_CuePointCallbackFromNativeDelegate; }
namespace CriWare::CriMana { class Player_LoopPointCallback; }
namespace CriWare::CriMana { class Player_ShaderDispatchCallback; }
namespace CriWare::CriMana { class Player_StatusChangeCallback; }
namespace CriWare::CriMana { class Player_SubtitleChangeCallback; }
namespace CriWare::CriMana::Detail { class RendererResource; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1FA2EF80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE05D05235_OFFSET UNITYSDK_OFFSET(0x1FA30410)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE0A2D3733_OFFSET UNITYSDK_OFFSET(0x1FA2FA80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE237E571C_OFFSET UNITYSDK_OFFSET(0x1FA2FB00)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE35861670_OFFSET UNITYSDK_OFFSET(0x1FA2F3F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE36FA78AE_OFFSET UNITYSDK_OFFSET(0x1FA2F4F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE3C74D83E_OFFSET UNITYSDK_OFFSET(0x1FA30310)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE52D915F9_OFFSET UNITYSDK_OFFSET(0x1FA2FFC0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE53DFFDAA_OFFSET UNITYSDK_OFFSET(0x1FA2FEB0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE5646402C_OFFSET UNITYSDK_OFFSET(0x1FA30490)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE57637A8E_OFFSET UNITYSDK_OFFSET(0x1FA301D0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE586F2FCA_OFFSET UNITYSDK_OFFSET(0x1FA2FDA0)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE6FC236CE_OFFSET UNITYSDK_OFFSET(0x1FA2F670)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE72EF9964_OFFSET UNITYSDK_OFFSET(0x1FA2FF40)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE7436F06B_OFFSET UNITYSDK_OFFSET(0x1FA2F790)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE773DE7D9_OFFSET UNITYSDK_OFFSET(0x1FA2FD20)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE77B421D2_OFFSET UNITYSDK_OFFSET(0x1FA2FB80)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE894030A0_OFFSET UNITYSDK_OFFSET(0x1FA2FC90)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE8B57A704_OFFSET UNITYSDK_OFFSET(0x1FA30250)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE8DEB8DB9_OFFSET UNITYSDK_OFFSET(0x1FA30040)
#define CRIWARE_CRIMANA_PLAYER_CRIWARE9DD50025_OFFSET UNITYSDK_OFFSET(0x1FA2FC10)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA1ABE514_OFFSET UNITYSDK_OFFSET(0x1FA2FA00)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREA64247AA_OFFSET UNITYSDK_OFFSET(0x1FA2F6F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREAB18F4D4_OFFSET UNITYSDK_OFFSET(0x1FA30520)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREACE45DB6_OFFSET UNITYSDK_OFFSET(0x1FA2F8E0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREB2FE191E_OFFSET UNITYSDK_OFFSET(0x1FA2F5F0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBA7B651B_OFFSET UNITYSDK_OFFSET(0x1FA30150)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBED54A9D_OFFSET UNITYSDK_OFFSET(0x1FA2F980)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREBF4BD114_OFFSET UNITYSDK_OFFSET(0x1FA2F470)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC0FD80C9_OFFSET UNITYSDK_OFFSET(0x1FA2F850)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREC6E36057_OFFSET UNITYSDK_OFFSET(0x1FA2F570)
#define CRIWARE_CRIMANA_PLAYER_CRIWARED022D157_OFFSET UNITYSDK_OFFSET(0x1FA2FE30)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREF810727B_OFFSET UNITYSDK_OFFSET(0x1FA30390)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREFE6543B1_OFFSET UNITYSDK_OFFSET(0x1FA305A0)
#define CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x1FA300D0)
#define CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1FA27540)
#define CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1FA2EBA0)
#define CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET UNITYSDK_OFFSET(0x1FA2A2F0)
#define CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1FA29400)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FA28B10)
#define CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FA293A0)
#define CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FA28AA0)
#define CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C6A0)
#define CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C290)
#define CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1FA2C880)
#define CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2BE80)
#define CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1FA276F0)
#define CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1FA27730)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET UNITYSDK_OFFSET(0x1FA27890)
#define CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1FA27860)
#define CRIWARE_CRIMANA_PLAYER_GET_EXTRAATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1FA27880)
#define CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1FA277A0)
#define CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1FA2EAA0)
#define CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1FA27770)
#define CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1FA27710)
#define CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1FA27780)
#define CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1FA278B0)
#define CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1FA27580)
#define CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1FA277C0)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBATOMEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1FA27870)
#define CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1FA27830)
#define CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1FA278A0)
#define CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1FA27750)
#define CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x1FA2CA60)
#define CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA2D180)
#define CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET UNITYSDK_OFFSET(0x1FA275C0)
#define CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1FA2A720)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET UNITYSDK_OFFSET(0x1FA2E700)
#define CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET UNITYSDK_OFFSET(0x1FA2ECD0)
#define CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET UNITYSDK_OFFSET(0x1FA2B060)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_CREATEWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FA288B0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_CREATE_OFFSET UNITYSDK_OFFSET(0x1FA27BA0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_DESTROY_OFFSET UNITYSDK_OFFSET(0x1FA2EBE0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ENTRYDATA_OFFSET UNITYSDK_OFFSET(0x1FA2AF50)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ENTRYFILE_OFFSET UNITYSDK_OFFSET(0x1FA2AB10)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETATOMEXPLAYERBYTRACKID_OFFSET UNITYSDK_OFFSET(0x1FA289B0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C790)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x1FA2EE30)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETRENDEREVENTFUNC_OFFSET UNITYSDK_OFFSET(0x1FA2EAB0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C380)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETTIME_OFFSET UNITYSDK_OFFSET(0x1FA2C970)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2BF70)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1FA2A820)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_LOOP_OFFSET UNITYSDK_OFFSET(0x1FA2B160)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_PAUSE_OFFSET UNITYSDK_OFFSET(0x1FA2A630)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_PREPARE_OFFSET UNITYSDK_OFFSET(0x1FA2F210)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETAUDIOBASECONCATENATION_OFFSET UNITYSDK_OFFSET(0x1FA2B350)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1FA2BB60)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETCUEPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FA2F110)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETDATA_OFFSET UNITYSDK_OFFSET(0x1FA2AE50)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1FA2CB80)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C590)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETFILE_OFFSET UNITYSDK_OFFSET(0x1FA2A9F0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1FA2B540)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x1FA2B730)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1FA2B940)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C180)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETUSERTIME_OFFSET UNITYSDK_OFFSET(0x1FA2D080)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETVIDEOAESKEYAUDIODECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1FA2CDE0)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2BD70)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_START_OFFSET UNITYSDK_OFFSET(0x1FA2F020)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_STOP_OFFSET UNITYSDK_OFFSET(0x1FA2A200)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA2ED40)
#define CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA2F300)
#define CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1FA2E4D0)
#define CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1FA2E960)
#define CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1FA29730)
#define CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1FA294D0)
#define CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1FA29F30)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOBASECONCATENATION_OFFSET UNITYSDK_OFFSET(0x1FA2B250)
#define CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0x1FA2BA50)
#define CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1FA2AC40)
#define CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1FA2CA80)
#define CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C470)
#define CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET UNITYSDK_OFFSET(0x1FA2A910)
#define CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET UNITYSDK_OFFSET(0x1FA2B440)
#define CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET UNITYSDK_OFFSET(0x1FA2B630)
#define CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET UNITYSDK_OFFSET(0x1FA2B820)
#define CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2C060)
#define CRIWARE_CRIMANA_PLAYER_SETUPPLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1FA27C90)
#define CRIWARE_CRIMANA_PLAYER_SETVIDEOAESKEYAUDIODECRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1FA2CC70)
#define CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1FA2BC50)
#define CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET UNITYSDK_OFFSET(0x1FA27700)
#define CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1FA27740)
#define CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET UNITYSDK_OFFSET(0x1FA27720)
#define CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET UNITYSDK_OFFSET(0x1FA278C0)
#define CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET UNITYSDK_OFFSET(0x1FA27590)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1FA27840)
#define CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET UNITYSDK_OFFSET(0x1FA27850)
#define CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1FA27760)
#define CRIWARE_CRIMANA_PLAYER_START_OFFSET UNITYSDK_OFFSET(0x1FA29870)
#define CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1FA2A320)
#define CRIWARE_CRIMANA_PLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1FA2A0A0)
#define CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FA2E920)
#define CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET UNITYSDK_OFFSET(0x1FA29B50)
#define CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET UNITYSDK_OFFSET(0x1FA2CEF0)
#define CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FA2E4B0)
#define CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA27D70)
#define CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA278D0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_TypeDefinitionIndex = 34604;

	class Player : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriMana::Player** StaticGet_updatingPlayer()
		{
			return (::CriWare::CriMana::Player**)Il2CppClass::FromTypeDefinitionIndex(Player_TypeDefinitionIndex)->GetStaticField(0x2A580);
		}
		::CriWare::CriMana::Player_StatusChangeCallback* statusChangeCallback; // 0x20
		::CriWare::CriAtomExPlayer* _subAtomExPlayer; // 0x28
		::CriWare::CriMana::Player_SubtitleChangeCallback* OnSubtitleChanged; // 0x30
		::CriWare::CriManaMoviePlayerHolder* _playerHolder_k__BackingField; // 0x38
		::CriWare::CriMana::Player_CuePointCallback* cuePointCallback; // 0x40
		::CriWare::CriAtomExPlayer* _extraAtomExPlayer; // 0x48
		::CriWare::CriAtomEx3dSource* _atomEx3Dsource; // 0x50
		::CriWare::CriMana::Detail::RendererResource* rendererResource; // 0x58
		::CriWare::CriMana::Player_LoopPointCallback* loopPointReached; // 0x60
		::CriWare::CriMana::FrameInfo* _frameInfo; // 0x68
		::CriWare::CriMana::Player_ShaderDispatchCallback* _shaderDispatchCallback; // 0x70
		::CriWare::CriMana::MovieInfo* _movieInfo; // 0x78
		::CriWare::CriAtomExPlayer* _atomExPlayer; // 0x80
		::CriWare::CriMana::Player_Status _nativeStatus; // 0x88
		::CriWare::CriMana::Player_Status internalrequiredStatus; // 0x8C
		::System::Int32 _maxFrameDrop_k__BackingField; // 0x90
		::System::Boolean isNativeInitialized; // 0x94
		::System::Boolean isStoppingForSeek; // 0x95
		::System::Boolean _additiveMode_k__BackingField; // 0x96
		::System::Boolean isFrameInfoAvailable; // 0x97
		::System::Int32 _subtitleSize_k__BackingField; // 0x98
		::System::Nullable_1<::System::Object*> lastPlayerStatus; // 0x9C
		::System::Boolean _applyTargetAlpha_k__BackingField; // 0xA4
		::System::Boolean _uiRenderMode_k__BackingField; // 0xA5
		::System::Boolean isPreparingForRendering; // 0xA6
		::System::Boolean isDisposed; // 0xA7
		::System::Int32 subtitleBufferSize; // 0xA8
		::System::Boolean enableSubtitle; // 0xAC
		::System::Boolean isMovieInfoAvailable; // 0xAD
		::System::Boolean isNativeStartInvoked; // 0xAE
		::System::Boolean wasStopping; // 0xAF
		::System::Nullable_1<::System::Object*> lastNativeStatus; // 0xB0
		::System::UInt32 droppedFrameCount; // 0xB8
		::System::Int32 playerId; // 0xBC
		::CriWare::CriMana::Player_TimerType _timerType; // 0xC0
		::System::Byte _padding0[0x4];
		::System::IntPtr _subtitleBuffer_k__BackingField; // 0xC8
		::System::Int64 _currentLoopCnt; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean advanced_audio_mode, ::System::Boolean ambisonics_mode, ::System::UInt32 max_path_length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER__CTOR_1_OFFSET))(this, advanced_audio_mode, ambisonics_mode, max_path_length);
		}

		::CriWare::CriMana::Player_Status get_requiredStatus()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_REQUIREDSTATUS_OFFSET))(this);
		}

		::System::Void set_requiredStatus(::CriWare::CriMana::Player_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_Status))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_REQUIREDSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_additiveMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ADDITIVEMODE_OFFSET))(this);
		}

		::System::Void set_additiveMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_ADDITIVEMODE_OFFSET))(this, value);
		}

		::System::Int32 get_maxFrameDrop()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MAXFRAMEDROP_OFFSET))(this);
		}

		::System::Void set_maxFrameDrop(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_MAXFRAMEDROP_OFFSET))(this, value);
		}

		::System::Boolean get_applyTargetAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_APPLYTARGETALPHA_OFFSET))(this);
		}

		::System::Void set_applyTargetAlpha(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_APPLYTARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_uiRenderMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_UIRENDERMODE_OFFSET))(this);
		}

		::System::Void set_uiRenderMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_UIRENDERMODE_OFFSET))(this, value);
		}

		::System::Boolean get_isFrameAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISFRAMEAVAILABLE_OFFSET))(this);
		}

		::CriWare::CriMana::MovieInfo* get_movieInfo()
		{
			return ((::CriWare::CriMana::MovieInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_MOVIEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::FrameInfo* get_frameInfo()
		{
			return ((::CriWare::CriMana::FrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_FRAMEINFO_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_status()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_STATUS_OFFSET))(this);
		}

		::System::IntPtr get_subtitleBuffer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void set_subtitleBuffer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLEBUFFER_OFFSET))(this, value);
		}

		::System::Void set_subtitleSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_SUBTITLESIZE_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayer* get_atomExPlayer()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEXPLAYER_OFFSET))(this);
		}

		::CriWare::CriAtomExPlayer* get_subAtomExPlayer()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_SUBATOMEXPLAYER_OFFSET))(this);
		}

		::CriWare::CriAtomExPlayer* get_extraAtomExPlayer()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_EXTRAATOMEXPLAYER_OFFSET))(this);
		}

		::CriWare::CriAtomEx3dSource* get_atomEx3DsourceForAmbisonics()
		{
			return ((::CriWare::CriAtomEx3dSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ATOMEX3DSOURCEFORAMBISONICS_OFFSET))(this);
		}

		::CriWare::CriMana::Player_TimerType get_timerType()
		{
			return ((::CriWare::CriMana::Player_TimerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_TIMERTYPE_OFFSET))(this);
		}

		::CriWare::CriManaMoviePlayerHolder* get_playerHolder()
		{
			return ((::CriWare::CriManaMoviePlayerHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_PLAYERHOLDER_OFFSET))(this);
		}

		::System::Void set_playerHolder(::CriWare::CriManaMoviePlayerHolder* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMoviePlayerHolder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SET_PLAYERHOLDER_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_OFFSET))(this);
		}

		::System::Void DisposeRendererResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSERENDERERRESOURCE_OFFSET))(this);
		}

		::System::Void PrepareForRendering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPAREFORRENDERING_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOP_OFFSET))(this);
		}

		::System::Void StopForSeek()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_STOPFORSEEK_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSE_OFFSET))(this, sw);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean SetFile(::CriWare::CriFsBinder* binder, ::System::String* moviePath, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETFILE_OFFSET))(this, binder, moviePath, setMode);
		}

		::System::Boolean SetData(::System::IntPtr data, ::System::Int64 dataSize, ::CriWare::CriMana::Player_SetMode setMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int64, ::CriWare::CriMana::Player_SetMode))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDATA_OFFSET))(this, data, dataSize, setMode);
		}

		::System::Void Loop(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOP_OFFSET))(this, sw);
		}

		::System::Void SetAudioBaseConcatenation(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOBASECONCATENATION_OFFSET))(this, enabled);
		}

		::System::Void SetMasterTimerType(::CriWare::CriMana::Player_TimerType timerType)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETMASTERTIMERTYPE_OFFSET))(this, timerType);
		}

		::System::Void SetSeekPosition(::System::Int32 frameNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSEEKPOSITION_OFFSET))(this, frameNumber);
		}

		::System::Void SetSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSPEED_OFFSET))(this, speed);
		}

		::System::Void SetAudioTrack(::CriWare::CriMana::Player_AudioTrack track)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_AudioTrack))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETAUDIOTRACK_OFFSET))(this, track);
		}

		::System::Void SetVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETVOLUME_OFFSET))(this);
		}

		::System::Void SetSubAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETSUBAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetSubAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETSUBAUDIOVOLUME_OFFSET))(this);
		}

		::System::Void SetExtraAudioVolume(::System::Single volume)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETEXTRAAUDIOVOLUME_OFFSET))(this, volume);
		}

		::System::Single GetExtraAudioVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETEXTRAAUDIOVOLUME_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GETTIME_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void SetDecryptionKey(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETDECRYPTIONKEY_OFFSET))(this, key);
		}

		::System::Void SetVideoAesKeyAudioDecryptionKey(::Il2CppArray<::System::Byte>* videoAesKey, ::System::UInt64 audioKey)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETVIDEOAESKEYAUDIODECRYPTIONKEY_OFFSET))(this, videoAesKey, audioKey);
		}

		::System::Void UpdateWithUserTime(::System::UInt64 timeCount, ::System::UInt64 timeUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEWITHUSERTIME_OFFSET))(this, timeCount, timeUnit);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void OnWillRenderObject(::CriWare::CriManaMovieMaterialBase* sender)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriManaMovieMaterialBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ONWILLRENDEROBJECT_OFFSET))(this, sender);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATEMATERIAL_OFFSET))(this, material);
		}

		::System::Void PauseOnApplicationPause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PAUSEONAPPLICATIONPAUSE_OFFSET))(this, sw);
		}

		::System::Boolean get_isAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_GET_ISALIVE_OFFSET))(this);
		}

		::System::Void IssuePluginEvent(::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction renderEventAction)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player_CriManaUnityPlayer_RenderEventAction))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINEVENT_OFFSET))(this, renderEventAction);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IssuePluginUpdatesForFrames(::System::Int32 frameCount, ::UnityEngine::MonoBehaviour* playerHolder, ::System::Boolean destroy, ::System::Int32 playerId)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::UnityEngine::MonoBehaviour*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ISSUEPLUGINUPDATESFORFRAMES_OFFSET))(this, frameCount, playerHolder, destroy, playerId);
		}

		::System::Void DisableInfos(::System::Boolean keepFrameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DISABLEINFOS_OFFSET))(this, keepFrameInfo);
		}

		::System::Void PrepareNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_PREPARENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void UpdateNativePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_UPDATENATIVEPLAYER_OFFSET))(this);
		}

		::System::Void InvokePlayerStatusCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_INVOKEPLAYERSTATUSCHECK_OFFSET))(this);
		}

		::System::Void AllocateSubtitleBuffer(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_ALLOCATESUBTITLEBUFFER_OFFSET))(this, size);
		}

		::System::Void DeallocateSubtitleBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_DEALLOCATESUBTITLEBUFFER_OFFSET))(this);
		}

		::System::Void SetupPlayerHolder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SETUPPLAYERHOLDER_OFFSET))(this);
		}

		static ::System::Void CuePointCallbackFromNative(::System::IntPtr ptr1, ::System::IntPtr ptr2, ::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CUEPOINTCALLBACKFROMNATIVE_OFFSET))(ptr1, ptr2, eventPoint);
		}

		static ::System::Int32 NativeMethods_Create()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_CREATE_OFFSET))();
		}

		static ::System::Int32 NativeMethods_CreateWithParameters(::System::Boolean useAtomExPlayer, ::System::UInt32 maxPathLength)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_CREATEWITHPARAMETERS_OFFSET))(useAtomExPlayer, maxPathLength);
		}

		static ::System::IntPtr NativeMethods_GetAtomExPlayerByTrackId(::System::Int32 player_id, ::System::UInt32 track_id)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETATOMEXPLAYERBYTRACKID_OFFSET))(player_id, track_id);
		}

		::System::Void NativeMethods_Stop(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_STOP_OFFSET))(this, player_id);
		}

		::System::Void NativeMethods_Pause(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_PAUSE_OFFSET))(this, player_id, sw);
		}

		static ::System::Boolean NativeMethods_IsPaused(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ISPAUSED_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SetFile(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETFILE_OFFSET))(player_id, binder, path);
		}

		static ::System::Boolean NativeMethods_EntryFile(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ENTRYFILE_OFFSET))(player_id, binder, path, repeat);
		}

		static ::System::Void NativeMethods_SetData(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETDATA_OFFSET))(player_id, data, datasize);
		}

		static ::System::Boolean NativeMethods_EntryData(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_ENTRYDATA_OFFSET))(player_id, data, datasize, repeat);
		}

		::System::Void NativeMethods_Loop(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_LOOP_OFFSET))(this, player_id, sw);
		}

		static ::System::Void NativeMethods_SetAudioBaseConcatenation(::System::Int32 player_id, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETAUDIOBASECONCATENATION_OFFSET))(player_id, flag);
		}

		static ::System::Void NativeMethods_SetMasterTimerType(::System::Int32 player_id, ::CriWare::CriMana::Player_TimerType timer_type)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETMASTERTIMERTYPE_OFFSET))(player_id, timer_type);
		}

		static ::System::Void NativeMethods_SetSeekPosition(::System::Int32 player_id, ::System::Int32 seek_frame_no)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSEEKPOSITION_OFFSET))(player_id, seek_frame_no);
		}

		static ::System::Void NativeMethods_SetSpeed(::System::Int32 player_id, ::System::Single speed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSPEED_OFFSET))(player_id, speed);
		}

		static ::System::Void NativeMethods_SetAudioTrack(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETAUDIOTRACK_OFFSET))(player_id, track);
		}

		static ::System::Void NativeMethods_SetVolume(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETVOLUME_OFFSET))(player_id, vol);
		}

		static ::System::Single NativeMethods_GetVolume(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETVOLUME_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SetSubAudioVolume(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETSUBAUDIOVOLUME_OFFSET))(player_id, vol);
		}

		static ::System::Single NativeMethods_GetSubAudioVolume(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETSUBAUDIOVOLUME_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SetExtraAudioVolume(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETEXTRAAUDIOVOLUME_OFFSET))(player_id, vol);
		}

		static ::System::Single NativeMethods_GetExtraAudioVolume(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETEXTRAAUDIOVOLUME_OFFSET))(player_id);
		}

		static ::System::Int64 NativeMethods_GetTime(::System::Int32 player_id)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETTIME_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SetUserTime(::System::Int32 player_id, ::System::UInt64 user_count, ::System::UInt64 user_unit)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETUSERTIME_OFFSET))(player_id, user_count, user_unit);
		}

		static ::System::IntPtr NativeMethods_GetRenderEventFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETRENDEREVENTFUNC_OFFSET))();
		}

		static ::System::Void NativeMethods_Destroy(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_DESTROY_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SyncUpdate(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SYNCUPDATE_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_GetMovieInfo(::System::Int32 player_id, ::CriWare::CriMana::MovieInfo* movie_info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_GETMOVIEINFO_OFFSET))(player_id, movie_info);
		}

		::System::Void NativeMethods_Start(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_START_OFFSET))(this, player_id);
		}

		::System::Void NativeMethods_Prepare(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_PREPARE_OFFSET))(this, player_id);
		}

		static ::System::Int32 NativeMethods_Update(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_UPDATE_OFFSET))(player_id);
		}

		static ::System::Void NativeMethods_SetCuePointCallback(::System::Int32 player_id, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate* cbfunc)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETCUEPOINTCALLBACK_OFFSET))(player_id, cbfunc);
		}

		static ::System::Void NativeMethods_SetDecryptionKey(::System::Int32 player_id, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETDECRYPTIONKEY_OFFSET))(player_id, key);
		}

		static ::System::Void NativeMethods_SetVideoAesKeyAudioDecryptionKey(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* video_aes_key, ::System::UInt64 audio_key)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_NATIVEMETHODS_SETVIDEOAESKEYAUDIODECRYPTIONKEY_OFFSET))(player_id, video_aes_key, audio_key);
		}

		static ::System::Int32 CRIWARE35861670()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE35861670_OFFSET))();
		}

		static ::System::Int32 CRIWAREBF4BD114(::System::Boolean useAtomExPlayer, ::System::UInt32 maxPathLength)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBF4BD114_OFFSET))(useAtomExPlayer, maxPathLength);
		}

		static ::System::Void CRIWAREBA7B651B(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBA7B651B_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREA64247AA(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA64247AA_OFFSET))(player_id, binder, path);
		}

		static ::System::Void CRIWAREC0FD80C9(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC0FD80C9_OFFSET))(player_id, data, datasize);
		}

		static ::System::Boolean CRIWARE7436F06B(::System::Int32 player_id, ::System::IntPtr binder, ::System::String* path, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE7436F06B_OFFSET))(player_id, binder, path, repeat);
		}

		static ::System::Boolean CRIWAREACE45DB6(::System::Int32 player_id, ::System::IntPtr data, ::System::Int64 datasize, ::System::Boolean repeat)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::IntPtr, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREACE45DB6_OFFSET))(player_id, data, datasize, repeat);
		}

		static ::System::Void CRIWARE5646402C(::System::Int32 player_id, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate* cbfunc)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_CuePointCallbackFromNativeDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE5646402C_OFFSET))(player_id, cbfunc);
		}

		static ::System::Void CRIWARE8B57A704(::System::Int32 player_id, ::CriWare::CriMana::MovieInfo* movie_info)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE8B57A704_OFFSET))(player_id, movie_info);
		}

		static ::System::Int32 CRIWARE05D05235(::System::Int32 player_id)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE05D05235_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREF810727B(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREF810727B_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE3C74D83E(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE3C74D83E_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREC6E36057(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREC6E36057_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE237E571C(::System::Int32 player_id, ::System::Int32 seek_frame_no)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE237E571C_OFFSET))(player_id, seek_frame_no);
		}

		static ::System::Void CRIWAREB2FE191E(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREB2FE191E_OFFSET))(player_id, sw);
		}

		static ::System::Boolean CRIWARE6FC236CE(::System::Int32 player_id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE6FC236CE_OFFSET))(player_id);
		}

		static ::System::Void CRIWAREBED54A9D(::System::Int32 player_id, ::System::Int32 sw)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREBED54A9D_OFFSET))(player_id, sw);
		}

		static ::System::Void CRIWAREA1ABE514(::System::Int32 player_id, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREA1ABE514_OFFSET))(player_id, flag);
		}

		static ::System::Int64 CRIWARE52D915F9(::System::Int32 player_id)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE52D915F9_OFFSET))(player_id);
		}

		static ::System::IntPtr CRIWARE36FA78AE(::System::Int32 player_id, ::System::UInt32 track_id)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE36FA78AE_OFFSET))(player_id, track_id);
		}

		static ::System::Void CRIWARE9DD50025(::System::Int32 player_id, ::System::Int32 track)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE9DD50025_OFFSET))(player_id, track);
		}

		static ::System::Void CRIWARE894030A0(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE894030A0_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARE773DE7D9(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE773DE7D9_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE586F2FCA(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE586F2FCA_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARED022D157(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARED022D157_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE53DFFDAA(::System::Int32 player_id, ::System::Single vol)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE53DFFDAA_OFFSET))(player_id, vol);
		}

		static ::System::Single CRIWARE72EF9964(::System::Int32 player_id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE72EF9964_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE77B421D2(::System::Int32 player_id, ::System::Single speed)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE77B421D2_OFFSET))(player_id, speed);
		}

		static ::System::Void CRIWARE57637A8E(::System::Int32 player_id)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE57637A8E_OFFSET))(player_id);
		}

		static ::System::Void CRIWARE0A2D3733(::System::Int32 player_id, ::CriWare::CriMana::Player_TimerType timer_type)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriMana::Player_TimerType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE0A2D3733_OFFSET))(player_id, timer_type);
		}

		static ::System::Void CRIWARE8DEB8DB9(::System::Int32 player_id, ::System::UInt64 user_count, ::System::UInt64 user_unit)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWARE8DEB8DB9_OFFSET))(player_id, user_count, user_unit);
		}

		static ::System::Void CRIWAREAB18F4D4(::System::Int32 player_id, ::System::UInt64 key)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREAB18F4D4_OFFSET))(player_id, key);
		}

		static ::System::Void CRIWAREFE6543B1(::System::Int32 player_id, ::Il2CppArray<::System::Byte>* video_aes_key, ::System::UInt64 audio_key)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREFE6543B1_OFFSET))(player_id, video_aes_key, audio_key);
		}

		static ::System::IntPtr criWareUnity_GetRenderEventFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_CRIWAREUNITY_GETRENDEREVENTFUNC_OFFSET))();
		}
	};
}
