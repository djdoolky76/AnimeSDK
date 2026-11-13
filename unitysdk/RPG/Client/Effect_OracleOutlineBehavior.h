#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_OracleOutlineMonoPlugin; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x189894E0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x18988940)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x189894D0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x18988D20)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x189893D0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GHGDHDCADMC_OFFSET UNITYSDK_OFFSET(0x18988DA0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_ILLIHHHDLIL_OFFSET UNITYSDK_OFFSET(0x189892E0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x189889B0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x189887F0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x18988A70)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LGFNHPJACMO_OFFSET UNITYSDK_OFFSET(0x18989360)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x189888E0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x18988A10)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x18988880)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_OracleOutlineBehavior_TypeDefinitionIndex = 72488;

	class Effect_OracleOutlineBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean refresh; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::LineRenderer* outlineRenderer; // 0x40
		::UnityEngine::MaterialPropertyBlock* _block; // 0x48
		static ::System::Int32* StaticGet__Dither_On()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_OracleOutlineBehavior")->GetStaticField(0xD110);
		}

		static ::System::Int32* StaticGet__Dither_Alpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_OracleOutlineBehavior")->GetStaticField(0xD114);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void GHGDHDCADMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GHGDHDCADMC_OFFSET))(this);
		}

		::System::Void LGFNHPJACMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LGFNHPJACMO_OFFSET))(this);
		}

		::System::Void ILLIHHHDLIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_ILLIHHHDLIL_OFFSET))(this, a1);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GFIJGKKMMIP_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_OracleOutlineMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_OracleOutlineMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
