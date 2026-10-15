#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_PathDeformMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD5C400)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD5DA60)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xCD5BE00)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_EBONGGMKPLB_OFFSET UNITYSDK_OFFSET(0xCD5C380)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_ENAFPBJJIHP_OFFSET UNITYSDK_OFFSET(0xCD5CB40)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD5CB00)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD5C460)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD5BD00)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD5C2B0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD5C4C0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD5BD90)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD5C520)

namespace RPG::Client
{
	class Effect_PathDeformBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* AxisAlignBoundCorners; // 0x40
		::UnityEngine::Bounds _RenderBound; // 0x48
		::System::Collections::Generic::List_1<::System::Single>* _PerInsPropertyList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void EBONGGMKPLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_EBONGGMKPLB_OFFSET))(this);
		}

		::System::Void ENAFPBJJIHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_ENAFPBJJIHP_OFFSET))(this);
		}

		::RPG::Client::Effect_PathDeformMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_PathDeformMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
