#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/CriWare/CriAtomSourceBase_Status.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExOutputAnalyzer; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomRegion; }
namespace System { class String; }

#define CRIWARE_CRIATOMSOURCEBASE_ATTACHTOANALYZER_OFFSET UNITYSDK_OFFSET(0x1EC68700)
#define CRIWARE_CRIATOMSOURCEBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EC66E40)
#define CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC67B50)
#define CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC67B40)
#define CRIWARE_CRIATOMSOURCEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC659C0)
#define CRIWARE_CRIATOMSOURCEBASE_DETACHFROMANALYZER_OFFSET UNITYSDK_OFFSET(0x1EC68730)
#define CRIWARE_CRIATOMSOURCEBASE_GET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1EC66C50)
#define CRIWARE_CRIATOMSOURCEBASE_GET_ATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1EC66BC0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_FREEZEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1EC65F20)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LISTENERONSTART_OFFSET UNITYSDK_OFFSET(0x1EC66280)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1EC660A0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1EC662B0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1EC66550)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EC666E0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x1EC66470)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1EC65DA0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x1EC65DD0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1EC66080)
#define CRIWARE_CRIATOMSOURCEBASE_GET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1EC66090)
#define CRIWARE_CRIATOMSOURCEBASE_GET_REGIONONSTART_OFFSET UNITYSDK_OFFSET(0x1EC66260)
#define CRIWARE_CRIATOMSOURCEBASE_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1EC65DC0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1EC66870)
#define CRIWARE_CRIATOMSOURCEBASE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EC669F0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1EC66930)
#define CRIWARE_CRIATOMSOURCEBASE_GET_USE3DPOSITIONING_OFFSET UNITYSDK_OFFSET(0x1EC65F10)
#define CRIWARE_CRIATOMSOURCEBASE_GET_USE3DRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x1EC65FB0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1EC66390)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1EC66DC0)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EC66C70)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALPLAYCUE_OFFSET UNITYSDK_OFFSET(0x1EC65C00)
#define CRIWARE_CRIATOMSOURCEBASE_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1EC67F40)
#define CRIWARE_CRIATOMSOURCEBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EC66F80)
#define CRIWARE_CRIATOMSOURCEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EC66EC0)
#define CRIWARE_CRIATOMSOURCEBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1EC67DF0)
#define CRIWARE_CRIATOMSOURCEBASE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1EC656B0)
#define CRIWARE_CRIATOMSOURCEBASE_PLAY_2_OFFSET UNITYSDK_OFFSET(0x1EC67CA0)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1EC68560)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1EC68380)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x1EC68630)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1EC68470)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1EC682B0)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_OFFSET UNITYSDK_OFFSET(0x1EC681C0)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1EC680F0)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1EC68000)
#define CRIWARE_CRIATOMSOURCEBASE_SETINITIALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EC67170)
#define CRIWARE_CRIATOMSOURCEBASE_SETINITIALSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EC67000)
#define CRIWARE_CRIATOMSOURCEBASE_SETNEEDTOPLAYERUPDATEALL_OFFSET UNITYSDK_OFFSET(0x1EC65F00)
#define CRIWARE_CRIATOMSOURCEBASE_SET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1EC66C60)
#define CRIWARE_CRIATOMSOURCEBASE_SET_ATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1EC66AB0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_FREEZEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1EC65F30)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LISTENERONSTART_OFFSET UNITYSDK_OFFSET(0x1EC66290)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1EC660B0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1EC662A0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1EC66480)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EC66610)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PITCH_OFFSET UNITYSDK_OFFSET(0x1EC663A0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1EC65D90)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x1EC65DE0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1EC65FC0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1EC64760)
#define CRIWARE_CRIATOMSOURCEBASE_SET_REGIONONSTART_OFFSET UNITYSDK_OFFSET(0x1EC66270)
#define CRIWARE_CRIATOMSOURCEBASE_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1EC65DB0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1EC667A0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_USE3DPOSITIONING_OFFSET UNITYSDK_OFFSET(0x1EC65DF0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_USE3DRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x1EC65F40)
#define CRIWARE_CRIATOMSOURCEBASE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1EC662C0)
#define CRIWARE_CRIATOMSOURCEBASE_START_OFFSET UNITYSDK_OFFSET(0x1EC67A90)
#define CRIWARE_CRIATOMSOURCEBASE_STOP_OFFSET UNITYSDK_OFFSET(0x1EC67DE0)
#define CRIWARE_CRIATOMSOURCEBASE_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EC67510)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSourceBase_TypeDefinitionIndex = 40918;

	class CriAtomSourceBase : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomExPlayer* _player_k__BackingField; // 0x28
		::CriWare::CriAtomEx3dSource* _source_k__BackingField; // 0x30
		::System::Boolean initialized; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 lastPosition; // 0x3C
		::System::Boolean hasValidPosition; // 0x48
		::System::Byte _padding1[0x7];
		::CriWare::CriAtomRegion* currentRegion; // 0x50
		::CriWare::CriAtomListener* currentListener; // 0x58
		::System::Boolean _playOnStart; // 0x60
		::System::Byte _padding2[0x7];
		::CriWare::CriAtomRegion* _regionOnStart; // 0x68
		::CriWare::CriAtomListener* _listenerOnStart; // 0x70
		::System::Boolean _use3dPositioning; // 0x78
		::System::Boolean _freezeOrientation; // 0x79
		::System::Boolean _loop; // 0x7A
		::System::Byte _padding3[0x1];
		::System::Single _volume; // 0x7C
		::System::Single _pitch; // 0x80
		::System::Boolean _androidUseLowLatencyVoicePool; // 0x84
		::System::Boolean need_to_player_update_all; // 0x85
		::System::Boolean _use3dRandomization; // 0x86
		::System::Byte _padding4[0x1];
		::System::UInt32 _randomPositionListMaxLength; // 0x88
		::System::Byte _padding5[0x4];
		::CriWare::CriAtomEx_Randomize3dConfig randomize3dConfig; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_CTOR_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriAtomExPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PLAYER_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayer* get_player()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_source(::CriWare::CriAtomEx3dSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dSource*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_SOURCE_OFFSET))(this, a1);
		}

		::CriWare::CriAtomEx3dSource* get_source()
		{
			return ((::CriWare::CriAtomEx3dSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_SOURCE_OFFSET))(this);
		}

		::System::Boolean get_playOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PLAYONSTART_OFFSET))(this);
		}

		::System::Void set_playOnStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PLAYONSTART_OFFSET))(this, a1);
		}

		::System::Void set_use3dPositioning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_USE3DPOSITIONING_OFFSET))(this, a1);
		}

		::System::Boolean get_use3dPositioning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_USE3DPOSITIONING_OFFSET))(this);
		}

		::System::Boolean get_freezeOrientation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_FREEZEORIENTATION_OFFSET))(this);
		}

		::System::Void set_freezeOrientation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_FREEZEORIENTATION_OFFSET))(this, a1);
		}

		::System::Void set_use3dRandomization(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_USE3DRANDOMIZATION_OFFSET))(this, a1);
		}

		::System::Boolean get_use3dRandomization()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_USE3DRANDOMIZATION_OFFSET))(this);
		}

		::System::Void set_randomPositionListMaxLength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_randomPositionListMaxLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET))(this);
		}

		::CriWare::CriAtomRegion* get_region3d()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_REGION3D_OFFSET))(this);
		}

		::System::Void set_region3d(::CriWare::CriAtomRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_REGION3D_OFFSET))(this, a1);
		}

		::CriWare::CriAtomListener* get_listener()
		{
			return ((::CriWare::CriAtomListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LISTENER_OFFSET))(this);
		}

		::System::Void set_listener(::CriWare::CriAtomListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LISTENER_OFFSET))(this, a1);
		}

		::CriWare::CriAtomRegion* get_regionOnStart()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_REGIONONSTART_OFFSET))(this);
		}

		::System::Void set_regionOnStart(::CriWare::CriAtomRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_REGIONONSTART_OFFSET))(this, a1);
		}

		::CriWare::CriAtomListener* get_listenerOnStart()
		{
			return ((::CriWare::CriAtomListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LISTENERONSTART_OFFSET))(this);
		}

		::System::Void set_listenerOnStart(::CriWare::CriAtomListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LISTENERONSTART_OFFSET))(this, a1);
		}

		::System::Void set_loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_volume(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_VOLUME_OFFSET))(this, a1);
		}

		::System::Single get_volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_pitch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PITCH_OFFSET))(this, a1);
		}

		::System::Single get_pitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PITCH_OFFSET))(this);
		}

		::System::Void set_pan3dAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DANGLE_OFFSET))(this, a1);
		}

		::System::Single get_pan3dAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DANGLE_OFFSET))(this);
		}

		::System::Void set_pan3dDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DDISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_pan3dDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DDISTANCE_OFFSET))(this);
		}

		::System::Void set_startTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Int32 get_startTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_STARTTIME_OFFSET))(this);
		}

		::System::Int64 get_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_TIME_OFFSET))(this);
		}

		::CriWare::CriAtomSourceBase_Status get_status()
		{
			return ((::CriWare::CriAtomSourceBase_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_attenuationDistanceSetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_ATTENUATIONDISTANCESETTING_OFFSET))(this, a1);
		}

		::System::Boolean get_attenuationDistanceSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_ATTENUATIONDISTANCESETTING_OFFSET))(this);
		}

		::System::Boolean get_androidUseLowLatencyVoicePool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET))(this);
		}

		::System::Void set_androidUseLowLatencyVoicePool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET))(this, a1);
		}

		::System::Void SetNeedToPlayerUpdateAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETNEEDTOPLAYERUPDATEALL_OFFSET))(this);
		}

		::System::Void InternalInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALINITIALIZE_OFFSET))(this);
		}

		::System::Void InternalFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALFINALIZE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean SetInitialSourcePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETINITIALSOURCEPOSITION_OFFSET))(this);
		}

		::System::Void SetInitialParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETINITIALPARAMETERS_OFFSET))(this);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_START_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::CriWare::CriAtomExPlayback Play_1(::System::String* a1)
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PLAY_1_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayback Play_2(::System::Int32 a1)
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PLAY_2_OFFSET))(this, a1);
		}

		::CriWare::CriAtomExPlayback InternalPlayCue()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALPLAYCUE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_STOP_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PAUSE_OFFSET))(this, a1);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ISPAUSED_OFFSET))(this);
		}

		::System::Void SetBusSendLevel(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void SetBusSendLevel_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetBusSendLevelOffset(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void SetBusSendLevelOffset_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetAisacControl(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_OFFSET))(this, a1, a2);
		}

		::System::Void SetAisac(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISAC_OFFSET))(this, a1, a2);
		}

		::System::Void SetAisacControl_1(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetAisac_1(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISAC_1_OFFSET))(this, a1, a2);
		}

		::System::Void AttachToAnalyzer(::CriWare::CriAtomExOutputAnalyzer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ATTACHTOANALYZER_OFFSET))(this, a1);
		}

		::System::Void DetachFromAnalyzer(::CriWare::CriAtomExOutputAnalyzer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_DETACHFROMANALYZER_OFFSET))(this, a1);
		}

	};
}
