#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Light; }
namespace XftWeapon { class XWeaponTrail; }

#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x135B7600)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ANIMATORS_OFFSET UNITYSDK_OFFSET(0x135B7120)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_DIROVERRIDELIGHT_OFFSET UNITYSDK_OFFSET(0x135B73C0)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ISALLCOMPONENTSCACHED_OFFSET UNITYSDK_OFFSET(0x135B7070)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_XWEAPONS_OFFSET UNITYSDK_OFFSET(0x135B7270)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_LCGBGGOFBGD_OFFSET UNITYSDK_OFFSET(0x135B7760)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETBOOLBYNAME_OFFSET UNITYSDK_OFFSET(0x135B7A10)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETFLOATBYNAME_OFFSET UNITYSDK_OFFSET(0x135B7C20)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETINTBYNAME_OFFSET UNITYSDK_OFFSET(0x135B7E40)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETTRIGGERBYNAME_OFFSET UNITYSDK_OFFSET(0x135B7810)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_UPDATECACHESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x135B76E0)
#define MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x135B8050)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionBehaviour_TypeDefinitionIndex = 47093;

	class MonoEffectExtensionBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoEffectPluginMask _MonoEffectPluginMask; // 0x18
		::System::Boolean isNewVersion; // 0x38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Animator*>* _animators; // 0x40
		::Il2CppArray<::XftWeapon::XWeaponTrail*>* _xWeapons; // 0x48
		::UnityEngine::Light* _dirOverrideLight; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAllComponentsCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ISALLCOMPONENTSCACHED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animator*>* get_animators()
		{
			return ((::Il2CppArray<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_ANIMATORS_OFFSET))(this);
		}

		::Il2CppArray<::XftWeapon::XWeaponTrail*>* get_xWeapons()
		{
			return ((::Il2CppArray<::XftWeapon::XWeaponTrail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_XWEAPONS_OFFSET))(this);
		}

		::UnityEngine::Light* get_dirOverrideLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_GET_DIROVERRIDELIGHT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateCacheSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_UPDATECACHESERIALIZEDATA_OFFSET))(this);
		}

		::System::Void SetTriggerByName(::System::String* HIAIKHDFCLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETTRIGGERBYNAME_OFFSET))(this, HIAIKHDFCLN);
		}

		::System::Void SetBoolByName(::System::String* HIAIKHDFCLN, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETBOOLBYNAME_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
		}

		::System::Void SetFloatByName(::System::String* HIAIKHDFCLN, ::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETFLOATBYNAME_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
		}

		::System::Void SetIntByName(::System::String* HIAIKHDFCLN, ::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_SETINTBYNAME_OFFSET))(this, HIAIKHDFCLN, EGEGIMGMJHN);
		}

		::System::Void LCGBGGOFBGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONBEHAVIOUR_LCGBGGOFBGD_OFFSET))(this);
		}
	};
}
