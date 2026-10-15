#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xDD8FF20)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD90EE0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CHDGDDEIHMP_OFFSET UNITYSDK_OFFSET(0xDD90990)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD90ED0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xDD8FFC0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDD90690)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xDD90CE0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD90E40)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET UNITYSDK_OFFSET(0xDD90060)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET UNITYSDK_OFFSET(0xDD90590)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET UNITYSDK_OFFSET(0xDD908B0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD90940)

namespace RPG::Client::Prop
{
	class RogueDLCRayModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single RotateSpeed; // 0x18
		::System::Single ChangeEmissionSpeed; // 0x1C
		::UnityEngine::Animator* APPGGMLEPLN; // 0x20
		::System::Boolean DKFLBNMGDJH; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single NBHIDJBMLIB; // 0x2C
		::System::Single FBPEBHBEDII; // 0x30
		::UnityEngine::Vector3 BGJECKILABB; // 0x34
		::System::Int32 BGNACBGBMHG; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* PGENPJLGMIC; // 0x48
		::UnityEngine::Vector3 GFNEIGDFCII; // 0x50
		::System::Byte _padding2[0x4];
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x60
		::DEBEAKKOHLN* JAMDAALMOAL; // 0x68
		::System::Single ALCICOLEFDM; // 0x70
		::System::Single OGBAPPDJHJD; // 0x74
		::System::Boolean EMHJDFOBENG; // 0x78
		::System::Byte _padding3[0x3];
		::System::Single GDFKMHHCGMJ; // 0x7C
		::System::Single POJFJHOJEKI; // 0x80
		static ::System::Int32* StaticGet_EIGIEMEFAJP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCRayModule")->GetStaticField(0x14040);
		}

		static ::System::Int32* StaticGet_BEEABBJDEHJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RogueDLCRayModule")->GetStaticField(0x14044);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CCTOR_OFFSET))();
		}

		::System::Void ActivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void DeactivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void RotateTo(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET))(this, a1);
		}

		::System::Void SetEmission(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetPresightScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CHDGDDEIHMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_CHDGDDEIHMP_OFFSET))(this);
		}

		::System::Void OCIHINMJMBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_OCIHINMJMBE_OFFSET))(this);
		}

	};
}
