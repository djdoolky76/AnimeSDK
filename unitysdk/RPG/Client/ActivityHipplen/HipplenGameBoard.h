#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/System/ValueTuple.h"
class NPPMHDBABDI;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xC431F60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COLLECTCAMERAS_OFFSET UNITYSDK_OFFSET(0xC432E70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COOGLDNKAIO_OFFSET UNITYSDK_OFFSET(0xC4330D0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xC433330)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DCBLPLMPCMI_OFFSET UNITYSDK_OFFSET(0xC4324F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC431770)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0xC431EA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_GETGAMEPROXY_OFFSET UNITYSDK_OFFSET(0xC432DA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_HNAEEBIJCDA_OFFSET UNITYSDK_OFFSET(0xC431CB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC431390)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LCEPBBFHFHD_OFFSET UNITYSDK_OFFSET(0xC432360)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LOCKSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xC432720)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_MARKWILLDESTROY_OFFSET UNITYSDK_OFFSET(0xC432E30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_OBKPBIGNECJ_OFFSET UNITYSDK_OFFSET(0xC431620)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_PDLOEFIGNFG_OFFSET UNITYSDK_OFFSET(0xC432680)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETGAMEPROXY_OFFSET UNITYSDK_OFFSET(0xC432C20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETONPAUSESTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC432DE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC432940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xC432A60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_UNLOCKSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0xC431BD0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int HipplenGameBoard_TypeDefinitionIndex = 75541;

	class HipplenGameBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* _CameraList; // 0x48
		::Il2CppArray<::System::Single>* DIMCKKPBAPE; // 0x50
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x58
		::Cinemachine::CinemachineVirtualCameraBase* KCIFKMOMPOL; // 0x60
		::System::Single MFCJBAFCKGE; // 0x68
		::System::Single MOPHNGBAMNF; // 0x6C
		::NPPMHDBABDI* NEHBDMOIAIN; // 0x70
		::System::Single MKMGJEDJJGJ; // 0x78
		::System::Boolean MCAPIAKDMAA; // 0x7C
		::System::Boolean PLOKNGMEJEI; // 0x7D
		::System::Byte _padding0[0x2];
		::System::Action* FJAACDOELNC; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* FindAnchor(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_FINDANCHOR_OFFSET))(this, a1);
		}

		::System::Void ActiveVirtualCamera(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LockStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LOCKSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void UnlockStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_UNLOCKSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void SetGameProxy(::NPPMHDBABDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPMHDBABDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETGAMEPROXY_OFFSET))(this, a1);
		}

		::NPPMHDBABDI* GetGameProxy()
		{
			return ((::NPPMHDBABDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_GETGAMEPROXY_OFFSET))(this);
		}

		::System::Void SetOnPauseStateChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_SETONPAUSESTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void MarkWillDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_MARKWILLDESTROY_OFFSET))(this);
		}

		::System::Void CollectCameras()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COLLECTCAMERAS_OFFSET))(this);
		}

		::System::Void LCEPBBFHFHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_LCEPBBFHFHD_OFFSET))(this);
		}

		::System::ValueTuple DCBLPLMPCMI(::System::String* a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_DCBLPLMPCMI_OFFSET))(this, a1);
		}

		::System::Void HNAEEBIJCDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_HNAEEBIJCDA_OFFSET))(this, a1);
		}

		::System::Void OBKPBIGNECJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_OBKPBIGNECJ_OFFSET))(this);
		}

		::System::Void COOGLDNKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_COOGLDNKAIO_OFFSET))(this, a1);
		}

		::System::Void PDLOEFIGNFG(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_HIPPLENGAMEBOARD_PDLOEFIGNFG_OFFSET))(this, a1);
		}

	};
}
