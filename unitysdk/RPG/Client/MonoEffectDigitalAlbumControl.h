#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD7A7E60)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_EIPDBAKPAHD_OFFSET UNITYSDK_OFFSET(0xD7A7750)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_HJCJOGIPAPP_OFFSET UNITYSDK_OFFSET(0xD7A70B0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_HPDHPKDDGFM_OFFSET UNITYSDK_OFFSET(0xD7A7A80)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_JKAAMIMGIAG_OFFSET UNITYSDK_OFFSET(0xD7A7190)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_MDIOJFEILML_OFFSET UNITYSDK_OFFSET(0xD7A7AD0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD7A7060)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7A6FD0)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD7A7140)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_START_OFFSET UNITYSDK_OFFSET(0xD7A6E40)
#define RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7A7880)

namespace RPG::Client
{
	class MonoEffectDigitalAlbumControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single switchSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* swithProgress; // 0x20
		::Il2CppArray<::UnityEngine::Texture2D*>* AlbumTexture2Ds; // 0x28
		::UnityEngine::Renderer* albumRenderer1; // 0x30
		::UnityEngine::Renderer* albumRenderer2; // 0x38
		::UnityEngine::Renderer* albumRenderer3; // 0x40
		::UnityEngine::MaterialPropertyBlock* ECCIODMKMGN; // 0x48
		::UnityEngine::Vector2 LNDMEKDIOCP; // 0x50
		::UnityEngine::Vector3 PGMIOKKLHIE; // 0x58
		::UnityEngine::Vector3 LKBKDNAMNEG; // 0x64
		::System::Boolean _IsInit; // 0x70
		// static const ::System::String* ONBFOIEKPIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_ONVALIDATE_OFFSET))(this);
		}

		::System::Void EIPDBAKPAHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_EIPDBAKPAHD_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void HPDHPKDDGFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_HPDHPKDDGFM_OFFSET))(this);
		}

		::System::Void MDIOJFEILML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_MDIOJFEILML_OFFSET))(this);
		}

		::System::Void HJCJOGIPAPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_HJCJOGIPAPP_OFFSET))(this);
		}

		::System::Void JKAAMIMGIAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTDIGITALALBUMCONTROL_JKAAMIMGIAG_OFFSET))(this);
		}

	};
}
