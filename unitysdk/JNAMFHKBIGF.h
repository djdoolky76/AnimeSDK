#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwipeCameraInputMode.h"
#include "unitysdk/RPG/Client/SwipeCameraStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
namespace RPG::GameCore { class MazeDragCameraConfig; }

#define JNAMFHKBIGF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB26F290)
#define JNAMFHKBIGF_CCEKDDJDBKF_OFFSET UNITYSDK_OFFSET(0xB26E680)
#define JNAMFHKBIGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB26E530)
#define JNAMFHKBIGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26F2E0)
#define JNAMFHKBIGF_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0xB26EE80)
#define JNAMFHKBIGF_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0xB26FB30)
#define JNAMFHKBIGF_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xB26F3A0)
#define JNAMFHKBIGF_IBIGDKBPLHG_OFFSET UNITYSDK_OFFSET(0xB26F750)
#define JNAMFHKBIGF_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xB26F330)
#define JNAMFHKBIGF_KIHPPIJMMJA_OFFSET UNITYSDK_OFFSET(0xB26E580)
#define JNAMFHKBIGF_NJBJFELDKOA_OFFSET UNITYSDK_OFFSET(0xB26EEF0)
#define JNAMFHKBIGF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB26E5D0)
#define JNAMFHKBIGF_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xB26FB40)

inline static constexpr unsigned int JNAMFHKBIGF_TypeDefinitionIndex = 69663;

	class JNAMFHKBIGF : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeDragCameraConfig* IGHAHBNLIJA; // 0x10
		::UnityEngine::Vector3 IILLNMHABDM; // 0x18
		::UnityEngine::Vector3 MGFPJOHOGNE; // 0x24
		::UnityEngine::Vector3 HNDKOOLOJAE; // 0x30
		::System::Boolean _Enable_k__BackingField; // 0x3C
		::System::Boolean HLPDFEJJBGL; // 0x3D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector2 JBFNBBEBCAC; // 0x40
		::UnityEngine::Vector3 GLPIDDAPHKC; // 0x48
		::RPG::Client::SwipeCameraInputMode PDDOGMKKBIF; // 0x54
		::RPG::Client::SwipeCameraStateEnum DLNIGFGLPLJ; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_CTOR_OFFSET))(this);
		}

		::System::Void KIHPPIJMMJA(::RPG::GameCore::MazeDragCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeDragCameraConfig*))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_KIHPPIJMMJA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_DISPOSE_OFFSET))(this);
		}

		::System::Void JOACGNDEHOE(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_JOACGNDEHOE_OFFSET))(this, a1);
		}

		::System::Void HPNHBGEOGPO(::Cinemachine::CameraState a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_HPNHBGEOGPO_OFFSET))(this, a1, a2);
		}

		::System::Void FDBDECPJEKF(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_FDBDECPJEKF_OFFSET))(this, a1);
		}

		::System::Void NJBJFELDKOA(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_NJBJFELDKOA_OFFSET))(this, a1);
		}

		::System::Void IBIGDKBPLHG(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_IBIGDKBPLHG_OFFSET))(this, a1);
		}

		::System::Void CCEKDDJDBKF(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_CCEKDDJDBKF_OFFSET))(this, a1);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNAMFHKBIGF_SET_ENABLE_OFFSET))(this, a1);
		}

	};
