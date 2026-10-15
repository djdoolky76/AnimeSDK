#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Effect_PathDeformMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD535D0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD54C30)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xCD52FD0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_EBONGGMKPLB_OFFSET UNITYSDK_OFFSET(0xCD53550)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_ENAFPBJJIHP_OFFSET UNITYSDK_OFFSET(0xCD53D10)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD53CD0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD53630)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD52ED0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD53480)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD53690)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD52F60)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCD536F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior_TypeDefinitionIndex = 70527;

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
