#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightProjectionConfig; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::GameCore { class GridFightProjectionConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET UNITYSDK_OFFSET(0xDC3D8D0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDC3C8B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC3B130)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET UNITYSDK_OFFSET(0xDC3D4D0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET UNITYSDK_OFFSET(0xDC3C560)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET UNITYSDK_OFFSET(0xDC3DCF0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xDC3D5A0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC3ADB0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISSELLABLE_OFFSET UNITYSDK_OFFSET(0xDC3AC90)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISTRAITUNLOCK_OFFSET UNITYSDK_OFFSET(0xDC3CCA0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0xDC3CB20)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_PROJECTIONDESC_OFFSET UNITYSDK_OFFSET(0xDC3CB90)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDC3CC50)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xDC3D4B0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xDC3AE60)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_SORTEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0xDC3C910)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0xDC3C8C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET UNITYSDK_OFFSET(0xDC3CD00)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0xDC3D4C0)
#define RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET UNITYSDK_OFFSET(0xDC3CD50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightProjectionConfig_TypeDefinitionIndex = 66749;

	class GridFightProjectionConfig : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x10
		::RPG::GameCore::GridFightProjectionConfigRow* _Row; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>** StaticGet__RowByRoleID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightProjectionConfigRow*>**)UnitySDK::FromName("RPG.Client", "GridFightProjectionConfig")->GetStaticField(0x732A0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::GridFightProjectionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightProjectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightProjectionConfig* GetByRoleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightProjectionConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETBYROLEID_OFFSET))(a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_TRAITIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SortedTraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_SORTEDTRAITIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_ProjectionDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_PROJECTIONDESC_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsSellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISSELLABLE_OFFSET))(this);
		}

		::System::Boolean get_IsTraitUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ISTRAITUNLOCK_OFFSET))(this);
		}

		::System::String* get_UnlockRule()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_UNLOCKRULE_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_SET_ROLECONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetActivateTraitThresholdLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETACTIVATETRAITTHRESHOLDLAYER_OFFSET))(this, a1);
		}

		::System::String* GetTraitUnlockRule(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITUNLOCKRULE_OFFSET))(this, a1);
		}

		::System::Boolean CanSummonInTeamContext(::NDPFOOJIAIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_CANSUMMONINTEAMCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean GetTraitSummonRuleActive(::System::UInt32 a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG_GETTRAITSUMMONRULEACTIVE_OFFSET))(this, a1, a2);
		}

		::System::String* _GetUnlockRuleTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPROJECTIONCONFIG__GETUNLOCKRULETIP_OFFSET))(this);
		}

	};
}
