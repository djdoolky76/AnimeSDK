#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IEEICGEBPNF_CTOR_OFFSET UNITYSDK_OFFSET(0x177AA2F0)
#define IEEICGEBPNF_DFMGFGLEKBJ_OFFSET UNITYSDK_OFFSET(0x177A9C00)
#define IEEICGEBPNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177A9370)
#define IEEICGEBPNF_DKIJFBMCPOC_OFFSET UNITYSDK_OFFSET(0x177A93D0)
#define IEEICGEBPNF_DPPIHMDLBEL_OFFSET UNITYSDK_OFFSET(0x177A9EF0)
#define IEEICGEBPNF_EIDAFLCAGOG_OFFSET UNITYSDK_OFFSET(0x177A9880)
#define IEEICGEBPNF_GET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x177A9350)
#define IEEICGEBPNF_GET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x177A9330)
#define IEEICGEBPNF_KIPCCBPMCEN_OFFSET UNITYSDK_OFFSET(0x177A9600)
#define IEEICGEBPNF_LCIJKPKFHCG_OFFSET UNITYSDK_OFFSET(0x177A9750)
#define IEEICGEBPNF_OBANHKDFDLN_OFFSET UNITYSDK_OFFSET(0x177A9B40)
#define IEEICGEBPNF_PNIFFBOPPAK_OFFSET UNITYSDK_OFFSET(0x177AA1E0)
#define IEEICGEBPNF_SET_IGNORECOLLIDER_OFFSET UNITYSDK_OFFSET(0x177A9360)
#define IEEICGEBPNF_SET_SHOWTIPANGLE_OFFSET UNITYSDK_OFFSET(0x177A9340)

inline static constexpr unsigned int IEEICGEBPNF_TypeDefinitionIndex = 71388;

	class IEEICGEBPNF : public ::System::Object
	{
	public:
		::RPG::GameCore::PhotoGraphAimContainerConfig* IGHAHBNLIJA; // 0x10
		::System::String* LJHHCNINPKG; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::UnityEngine::Transform* NGOPIKCKJMA; // 0x28
		::UnityEngine::Collider* PEKFHKFKONB; // 0x30
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x38
		::UnityEngine::Transform* KPHKGBGMLNN; // 0x40
		::System::Int32 KCELONKJELI; // 0x48
		::UnityEngine::Vector3 KMONLGNFDMC; // 0x4C
		::System::Int32 MNDJCEFFCIC; // 0x58
		::System::Int32 DOEFKPCDIIP; // 0x5C
		::System::Single _ShowTipAngle_k__BackingField; // 0x60
		::System::Int32 HIBKMEDOBKG; // 0x64
		::System::Single DDNMNEIGGND; // 0x68
		::System::Int32 IDFIOEBNPJF; // 0x6C
		::RPG::Client::PhotoGraphAimUnitType ILLOBAKBDPB; // 0x70
		::System::Boolean _IgnoreCollider_k__BackingField; // 0x74
		::System::Boolean PFKKPAPFEKE; // 0x75
		::System::Boolean NJHMFDPILDI; // 0x76
		::System::Boolean DMLFAFMGPMH; // 0x77
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_CTOR_OFFSET))(this);
		}

		::System::Single get_ShowTipAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_GET_SHOWTIPANGLE_OFFSET))(this);
		}

		::System::Void set_ShowTipAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEEICGEBPNF_SET_SHOWTIPANGLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_GET_IGNORECOLLIDER_OFFSET))(this);
		}

		::System::Void set_IgnoreCollider(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEEICGEBPNF_SET_IGNORECOLLIDER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 DKIJFBMCPOC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_DKIJFBMCPOC_OFFSET))(this);
		}

		::System::Void LCIJKPKFHCG(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + IEEICGEBPNF_LCIJKPKFHCG_OFFSET))(this, a1);
		}

		::System::Void EIDAFLCAGOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_EIDAFLCAGOG_OFFSET))(this);
		}

		::System::Void OBANHKDFDLN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + IEEICGEBPNF_OBANHKDFDLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFMGFGLEKBJ(::UnityEngine::GameObject* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + IEEICGEBPNF_DFMGFGLEKBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPPIHMDLBEL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PhotoGraphAimContainerConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + IEEICGEBPNF_DPPIHMDLBEL_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* KIPCCBPMCEN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_KIPCCBPMCEN_OFFSET))(this);
		}

		::System::Void PNIFFBOPPAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEICGEBPNF_PNIFFBOPPAK_OFFSET))(this);
		}

	};
