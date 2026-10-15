#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TimelineControlGamePuzzleBoard_PlayerConfig.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FDPALAEIHPB;
class JPMKMMMGNJN;
class MGCHEABMOLP;
namespace RPG::Client { class MonoTimelineControlGameLevel; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xE29EC90)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A0F40)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2A0620)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_DNCMGLKKKHM_OFFSET UNITYSDK_OFFSET(0xE2A0BE0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ECICBKAOBIK_OFFSET UNITYSDK_OFFSET(0xE2A06D0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_EEEDNCEENEP_OFFSET UNITYSDK_OFFSET(0xE2A0E00)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_EFBFJDJGNPL_OFFSET UNITYSDK_OFFSET(0xE2A08C0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_FMELBCAFGEK_OFFSET UNITYSDK_OFFSET(0xE2A0CA0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE2A0F20)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_GLKLCOOKDNE_OFFSET UNITYSDK_OFFSET(0xE29F730)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_HMLLBFCFBEB_OFFSET UNITYSDK_OFFSET(0xE2A0D90)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xE29F620)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xE2A04C0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xE2A0500)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xE2A0540)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_LJCCCPPGEPL_OFFSET UNITYSDK_OFFSET(0xE2A0D00)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_NPKHKFHHFBD_OFFSET UNITYSDK_OFFSET(0xE2A0EA0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_OAMEJGLODEI_OFFSET UNITYSDK_OFFSET(0xE2A0B20)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0xE29FB80)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE29ED60)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_PDCLDHFOKCE_OFFSET UNITYSDK_OFFSET(0xE29FFC0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xE29F5C0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE2A0F30)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE29FDE0)
#define RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xE2A03A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimelineControlGamePuzzleBoard_TypeDefinitionIndex = 60451;

	class TimelineControlGamePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Transform* origin; // 0x48
		::System::Single timelineLength; // 0x50
		::System::Boolean detectDynamicGroupOverlap; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::Client::TimelineControlGamePuzzleBoard_PlayerConfig playerConfig; // 0x58
		::UnityEngine::Vector3 cameraPosition; // 0x80
		::UnityEngine::Quaternion cameraRotation; // 0x8C
		::System::Single orthographicSize; // 0x9C
		::RPG::Client::MonoTimelineControlGameLevel* _Level_k__BackingField; // 0xA0
		::FDPALAEIHPB* FKINCGODJEP; // 0xA8
		::JPMKMMMGNJN* PDENFEFCAGN; // 0xB0
		::MGCHEABMOLP* MOAHPOKJFMH; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ISPUZZLESTART_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_OCGKMGIBKKF_OFFSET))(this);
		}

		::System::Void EFBFJDJGNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_EFBFJDJGNPL_OFFSET))(this);
		}

		::System::Void ECICBKAOBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_ECICBKAOBIK_OFFSET))(this);
		}

		::System::Void PDCLDHFOKCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_PDCLDHFOKCE_OFFSET))(this);
		}

		::System::Void GLKLCOOKDNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_GLKLCOOKDNE_OFFSET))(this, a1);
		}

		::System::Void OAMEJGLODEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_OAMEJGLODEI_OFFSET))(this, a1);
		}

		::System::Void DNCMGLKKKHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_DNCMGLKKKHM_OFFSET))(this, a1);
		}

		::System::Void FMELBCAFGEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_FMELBCAFGEK_OFFSET))(this, a1);
		}

		::System::Void LJCCCPPGEPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_LJCCCPPGEPL_OFFSET))(this, a1);
		}

		::System::Void HMLLBFCFBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_HMLLBFCFBEB_OFFSET))(this, a1);
		}

		::System::Void EEEDNCEENEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_EEEDNCEENEP_OFFSET))(this, a1);
		}

		::System::Void NPKHKFHHFBD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_NPKHKFHHFBD_OFFSET))(this, a1);
		}

		::RPG::Client::MonoTimelineControlGameLevel* get_Level()
		{
			return ((::RPG::Client::MonoTimelineControlGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::RPG::Client::MonoTimelineControlGameLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoTimelineControlGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINECONTROLGAMEPUZZLEBOARD_SET_LEVEL_OFFSET))(this, a1);
		}

	};
}
