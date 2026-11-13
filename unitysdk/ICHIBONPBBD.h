#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BindingMode.h"
#include "unitysdk/RPG/Client/Prop/RuntimeCameraMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ICHIBONPBBD;
namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineTransposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ICHIBONPBBD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x188CBFB0)
#define ICHIBONPBBD_BPNMABIFCAC_OFFSET UNITYSDK_OFFSET(0x188CCC10)
#define ICHIBONPBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x188CBF10)
#define ICHIBONPBBD_GET_DIRECTIONFOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x188CBF70)
#define ICHIBONPBBD_GET_DIRECTIONFOLLOWTRANSPOSER_OFFSET UNITYSDK_OFFSET(0x188CBFA0)
#define ICHIBONPBBD_GET_FIXCAMERA_OFFSET UNITYSDK_OFFSET(0x188CBF60)
#define ICHIBONPBBD_GET_FOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x188CBF50)
#define ICHIBONPBBD_GET_FOLLOWCOMPOSER_OFFSET UNITYSDK_OFFSET(0x188CBF90)
#define ICHIBONPBBD_GET_FOLLOWTRANSPOSER_OFFSET UNITYSDK_OFFSET(0x188CBF80)
#define ICHIBONPBBD_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x188CBF40)
#define ICHIBONPBBD_GHCLNCGAPJN_OFFSET UNITYSDK_OFFSET(0x188CCA50)
#define ICHIBONPBBD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x188CCE60)
#define ICHIBONPBBD_HANACCNICIG_OFFSET UNITYSDK_OFFSET(0x188CC890)
#define ICHIBONPBBD_HLJPIFIDIBM_OFFSET UNITYSDK_OFFSET(0x188CC650)
#define ICHIBONPBBD_HONIPDPLCNL_OFFSET UNITYSDK_OFFSET(0x188CC900)
#define ICHIBONPBBD_KGEHFCPMCNM_OFFSET UNITYSDK_OFFSET(0x188CC520)
#define ICHIBONPBBD_KMFBPOGHLCA_OFFSET UNITYSDK_OFFSET(0x188CCDE0)
#define ICHIBONPBBD_LJAMAOHFLAE_OFFSET UNITYSDK_OFFSET(0x188CC430)
#define ICHIBONPBBD_OFPFMMODFIM_OFFSET UNITYSDK_OFFSET(0x188CC700)

inline static constexpr unsigned int ICHIBONPBBD_TypeDefinitionIndex = 81564;

	class ICHIBONPBBD : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineTransposer* _FollowTransposer_k__BackingField; // 0x10
		::Cinemachine::CinemachineComposer* _FollowComposer_k__BackingField; // 0x18
		::Cinemachine::CinemachineVirtualCamera* _FixCamera_k__BackingField; // 0x20
		::Cinemachine::CinemachineTransposer* _DirectionFollowTransposer_k__BackingField; // 0x28
		::Cinemachine::CinemachineVirtualCamera* _FollowCamera_k__BackingField; // 0x30
		::UnityEngine::GameObject* _Root_k__BackingField; // 0x38
		::Cinemachine::CinemachineVirtualCamera* _DirectionFollowCamera_k__BackingField; // 0x40
		// static const ::System::String* CHKLGEAFIPJ; // 0x0
		// static const ::System::String* CBCGKNBCEAI; // 0x0
		// static const ::System::String* PEGMFABOJPK; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::Cinemachine::CinemachineVirtualCamera* a3, ::Cinemachine::CinemachineVirtualCamera* a4, ::Cinemachine::CinemachineTransposer* a5, ::Cinemachine::CinemachineComposer* a6, ::Cinemachine::CinemachineTransposer* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineTransposer*, ::Cinemachine::CinemachineComposer*, ::Cinemachine::CinemachineTransposer*))((::PBYTE)hIl2Cpp + ICHIBONPBBD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_ROOT_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_FollowCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_FOLLOWCAMERA_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_FixCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_FIXCAMERA_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_DirectionFollowCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_DIRECTIONFOLLOWCAMERA_OFFSET))(this);
		}

		::Cinemachine::CinemachineTransposer* get_FollowTransposer()
		{
			return ((::Cinemachine::CinemachineTransposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_FOLLOWTRANSPOSER_OFFSET))(this);
		}

		::Cinemachine::CinemachineComposer* get_FollowComposer()
		{
			return ((::Cinemachine::CinemachineComposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_FOLLOWCOMPOSER_OFFSET))(this);
		}

		::Cinemachine::CinemachineTransposer* get_DirectionFollowTransposer()
		{
			return ((::Cinemachine::CinemachineTransposer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GET_DIRECTIONFOLLOWTRANSPOSER_OFFSET))(this);
		}

		static ::ICHIBONPBBD* BPLPBPMEODA(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::ICHIBONPBBD*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICHIBONPBBD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void HLJPIFIDIBM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ICHIBONPBBD_HLJPIFIDIBM_OFFSET))(this, a1, a2);
		}

		::System::Void OFPFMMODFIM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ICHIBONPBBD_OFPFMMODFIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HONIPDPLCNL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Cinemachine::LensSettings a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + ICHIBONPBBD_HONIPDPLCNL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GHCLNCGAPJN(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::Cinemachine::CinemachineTransposer_BindingMode a3, ::UnityEngine::Quaternion a4, ::Cinemachine::LensSettings a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Cinemachine::CinemachineTransposer_BindingMode, ::UnityEngine::Quaternion, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + ICHIBONPBBD_GHCLNCGAPJN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BPNMABIFCAC(::RPG::Client::Prop::RuntimeCameraMode a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RuntimeCameraMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICHIBONPBBD_BPNMABIFCAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KGEHFCPMCNM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICHIBONPBBD_KGEHFCPMCNM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHIBONPBBD_HADOHLNHHGB_OFFSET))(this);
		}

		static ::System::Void HANACCNICIG(::Cinemachine::CinemachineVirtualCamera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::System::Single))((::PBYTE)hIl2Cpp + ICHIBONPBBD_HANACCNICIG_OFFSET))(a1, a2);
		}

		static ::Cinemachine::CinemachineVirtualCamera* LJAMAOHFLAE(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ICHIBONPBBD_LJAMAOHFLAE_OFFSET))(a1, a2);
		}

		static ::System::Void KMFBPOGHLCA(::Cinemachine::CinemachineVirtualCamera* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICHIBONPBBD_KMFBPOGHLCA_OFFSET))(a1, a2, a3);
		}

	};
