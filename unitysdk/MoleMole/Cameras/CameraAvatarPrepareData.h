#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class DIAEPBNFKBO;
class GEIHCPAOKKK;
class HAFLGNENJDI;
class JOOHBDMHGCA;
class NLNIIPDCABP;
class ONGAINBJDFM;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0xFFB7560)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xFFB74F0)
#define MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB74E0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraAvatarPrepareData_TypeDefinitionIndex = 90190;

	class CameraAvatarPrepareData : public ::System::Object
	{
	public:
		// static const ::System::Single AvatarHeight; // 0x0
		// static const ::System::String* POINT_CAMERABASE_ROOT; // 0x0
		// static const ::System::String* POINT_CAMERA_LOOK; // 0x0
		::MoleMole::Battle::Entity* AvatarEntity; // 0x10
		::ONGAINBJDFM* ControlData; // 0x18
		::NLNIIPDCABP* AnimateComponent; // 0x20
		::UnityEngine::AnimatorStateInfo CurrentAnimState; // 0x28
		::GEIHCPAOKKK* ModelComponent; // 0x50
		::DIAEPBNFKBO* BaseDataComponent; // 0x58
		::HAFLGNENJDI* BattleComponent; // 0x60
		::JOOHBDMHGCA* MovementComponent; // 0x68
		::UnityEngine::Rigidbody* Rigidbody; // 0x70
		::MoleMole::CharacterScriptConfig* ScriptConfig; // 0x78
		::UnityEngine::Transform* CameraBaseRootTrans; // 0x80
		::UnityEngine::Transform* CameraLookTrans; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA__CTOR_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_NPOLNFDBOOD_OFFSET))(this);
		}

		::System::Boolean FFCPIEDHBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAAVATARPREPAREDATA_FFCPIEDHBDP_OFFSET))(this);
		}
	};
}
