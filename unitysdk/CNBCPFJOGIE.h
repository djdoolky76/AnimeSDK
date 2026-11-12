#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNBCPFJOGIE_DAGCKHNLECO_OFFSET UNITYSDK_OFFSET(0xE389D50)
#define CNBCPFJOGIE_EFMEPLPFBJA_OFFSET UNITYSDK_OFFSET(0xE389E50)
#define CNBCPFJOGIE_GET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0xE389AA0)
#define CNBCPFJOGIE_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0xE3899E0)
#define CNBCPFJOGIE_GET_ENABLEPARTOVERRIDEOWNERANIMSPEED_OFFSET UNITYSDK_OFFSET(0xE389B20)
#define CNBCPFJOGIE_GET_FORBIDKEEPKEYFORSTATUSWHENMODIFIERRENAME_OFFSET UNITYSDK_OFFSET(0xE389B00)
#define CNBCPFJOGIE_GET_FORBIDMONOEFFECTRESETPARTICLESYSTEMSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xE389B40)
#define CNBCPFJOGIE_GET_FORBIDRANGEPROPERTYCALLBACKMULTIINST_OFFSET UNITYSDK_OFFSET(0xE389AE0)
#define CNBCPFJOGIE_GET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0xE389A00)
#define CNBCPFJOGIE_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0xE3899A0)
#define CNBCPFJOGIE_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0xE389940)
#define CNBCPFJOGIE_GET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0xE389A80)
#define CNBCPFJOGIE_GET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xE389A60)
#define CNBCPFJOGIE_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0xE389960)
#define CNBCPFJOGIE_GET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0xE389A40)
#define CNBCPFJOGIE_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0xE389A20)
#define CNBCPFJOGIE_GET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET UNITYSDK_OFFSET(0xE389AC0)
#define CNBCPFJOGIE_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0xE3899C0)
#define CNBCPFJOGIE_GET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0xE389980)
#define CNBCPFJOGIE_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xE389B60)
#define CNBCPFJOGIE_SET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET UNITYSDK_OFFSET(0xE389AB0)
#define CNBCPFJOGIE_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET UNITYSDK_OFFSET(0xE3899F0)
#define CNBCPFJOGIE_SET_ENABLEPARTOVERRIDEOWNERANIMSPEED_OFFSET UNITYSDK_OFFSET(0xE389B30)
#define CNBCPFJOGIE_SET_FORBIDKEEPKEYFORSTATUSWHENMODIFIERRENAME_OFFSET UNITYSDK_OFFSET(0xE389B10)
#define CNBCPFJOGIE_SET_FORBIDMONOEFFECTRESETPARTICLESYSTEMSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xE389B50)
#define CNBCPFJOGIE_SET_FORBIDRANGEPROPERTYCALLBACKMULTIINST_OFFSET UNITYSDK_OFFSET(0xE389AF0)
#define CNBCPFJOGIE_SET_GLOBALCLEARATTACKCACHE_OFFSET UNITYSDK_OFFSET(0xE389A10)
#define CNBCPFJOGIE_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET UNITYSDK_OFFSET(0xE3899B0)
#define CNBCPFJOGIE_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET UNITYSDK_OFFSET(0xE389950)
#define CNBCPFJOGIE_SET_MODIFIERRESTACKPROPERTYREPORT_OFFSET UNITYSDK_OFFSET(0xE389A90)
#define CNBCPFJOGIE_SET_MODIFIERSAFESTACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xE389A70)
#define CNBCPFJOGIE_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET UNITYSDK_OFFSET(0xE389970)
#define CNBCPFJOGIE_SET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET UNITYSDK_OFFSET(0xE389A50)
#define CNBCPFJOGIE_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET UNITYSDK_OFFSET(0xE389A30)
#define CNBCPFJOGIE_SET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET UNITYSDK_OFFSET(0xE389AD0)
#define CNBCPFJOGIE_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET UNITYSDK_OFFSET(0xE3899D0)
#define CNBCPFJOGIE_SET_STRICTLIMBOENTITYDIECHECK_OFFSET UNITYSDK_OFFSET(0xE389990)

inline static constexpr unsigned int CNBCPFJOGIE_TypeDefinitionIndex = 57722;

	class CNBCPFJOGIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_OEGAKDACCDM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0xDFE0);
		}

		static ::System::Boolean* StaticGet__SkipDamageStanceEventOnBreak_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB0);
		}

		static ::System::Boolean* StaticGet__ByHaveEnemyAliveIncludeCustomUnselectableTarget_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB1);
		}

		static ::System::Boolean* StaticGet__GlobalClearAttackCache_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB2);
		}

		static ::System::Boolean* StaticGet__ForbidRangePropertyCallbackMultiInst_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB3);
		}

		static ::System::Boolean* StaticGet__NotResetHandlerForEntityInDieState_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB4);
		}

		static ::System::Boolean* StaticGet__InsertAbilityAfterUltraSkillEndDontTickAbility_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB5);
		}

		static ::System::Boolean* StaticGet__HandleMaterialEffectRenderMaskConflict_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB6);
		}

		static ::System::Boolean* StaticGet__DisableDamageStanceBreakDelayAddMdf_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB7);
		}

		static ::System::Boolean* StaticGet__StrictLimboEntityDieCheck_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB8);
		}

		static ::System::Boolean* StaticGet__SelectFriendSkillWhenNoEnemy_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EB9);
		}

		static ::System::Boolean* StaticGet__ForbidKeepKeyForStatusWhenModifierRename_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBA);
		}

		static ::System::Boolean* StaticGet__SkipAddModifierWhenCasterDead_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBB);
		}

		static ::System::Boolean* StaticGet__EnablePartOverrideOwnerAnimSpeed_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBC);
		}

		static ::System::Boolean* StaticGet__PreventAliveStateResetWhenCurrentHPZeroInLimbo_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBD);
		}

		static ::System::Boolean* StaticGet__ModifierSafeStackProperty_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBE);
		}

		static ::System::Boolean* StaticGet__ForbidMonoEffectResetParticleSystemSimulationSpeed_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EBF);
		}

		static ::System::Boolean* StaticGet__ModifierRestackPropertyReport_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNBCPFJOGIE")->GetStaticField(0x2EC0);
		}

		static ::System::Boolean get_InsertAbilityAfterUltraSkillEndDontTickAbility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))();
		}

		static ::System::Void set_InsertAbilityAfterUltraSkillEndDontTickAbility(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_INSERTABILITYAFTERULTRASKILLENDDONTTICKABILITY_OFFSET))(a1);
		}

		static ::System::Boolean get_NotResetHandlerForEntityInDieState()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))();
		}

		static ::System::Void set_NotResetHandlerForEntityInDieState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_NOTRESETHANDLERFORENTITYINDIESTATE_OFFSET))(a1);
		}

		static ::System::Boolean get_StrictLimboEntityDieCheck()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_STRICTLIMBOENTITYDIECHECK_OFFSET))();
		}

		static ::System::Void set_StrictLimboEntityDieCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_STRICTLIMBOENTITYDIECHECK_OFFSET))(a1);
		}

		static ::System::Boolean get_HandleMaterialEffectRenderMaskConflict()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))();
		}

		static ::System::Void set_HandleMaterialEffectRenderMaskConflict(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_HANDLEMATERIALEFFECTRENDERMASKCONFLICT_OFFSET))(a1);
		}

		static ::System::Boolean get_SkipDamageStanceEventOnBreak()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))();
		}

		static ::System::Void set_SkipDamageStanceEventOnBreak(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_SKIPDAMAGESTANCEEVENTONBREAK_OFFSET))(a1);
		}

		static ::System::Boolean get_DisableDamageStanceBreakDelayAddMdf()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))();
		}

		static ::System::Void set_DisableDamageStanceBreakDelayAddMdf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_DISABLEDAMAGESTANCEBREAKDELAYADDMDF_OFFSET))(a1);
		}

		static ::System::Boolean get_GlobalClearAttackCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_GLOBALCLEARATTACKCACHE_OFFSET))();
		}

		static ::System::Void set_GlobalClearAttackCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_GLOBALCLEARATTACKCACHE_OFFSET))(a1);
		}

		static ::System::Boolean get_SelectFriendSkillWhenNoEnemy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))();
		}

		static ::System::Void set_SelectFriendSkillWhenNoEnemy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_SELECTFRIENDSKILLWHENNOENEMY_OFFSET))(a1);
		}

		static ::System::Boolean get_PreventAliveStateResetWhenCurrentHPZeroInLimbo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET))();
		}

		static ::System::Void set_PreventAliveStateResetWhenCurrentHPZeroInLimbo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_PREVENTALIVESTATERESETWHENCURRENTHPZEROINLIMBO_OFFSET))(a1);
		}

		static ::System::Boolean get_ModifierSafeStackProperty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_MODIFIERSAFESTACKPROPERTY_OFFSET))();
		}

		static ::System::Void set_ModifierSafeStackProperty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_MODIFIERSAFESTACKPROPERTY_OFFSET))(a1);
		}

		static ::System::Boolean get_ModifierRestackPropertyReport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_MODIFIERRESTACKPROPERTYREPORT_OFFSET))();
		}

		static ::System::Void set_ModifierRestackPropertyReport(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_MODIFIERRESTACKPROPERTYREPORT_OFFSET))(a1);
		}

		static ::System::Boolean get_ByHaveEnemyAliveIncludeCustomUnselectableTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET))();
		}

		static ::System::Void set_ByHaveEnemyAliveIncludeCustomUnselectableTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_BYHAVEENEMYALIVEINCLUDECUSTOMUNSELECTABLETARGET_OFFSET))(a1);
		}

		static ::System::Boolean get_SkipAddModifierWhenCasterDead()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET))();
		}

		static ::System::Void set_SkipAddModifierWhenCasterDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_SKIPADDMODIFIERWHENCASTERDEAD_OFFSET))(a1);
		}

		static ::System::Boolean get_ForbidRangePropertyCallbackMultiInst()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_FORBIDRANGEPROPERTYCALLBACKMULTIINST_OFFSET))();
		}

		static ::System::Void set_ForbidRangePropertyCallbackMultiInst(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_FORBIDRANGEPROPERTYCALLBACKMULTIINST_OFFSET))(a1);
		}

		static ::System::Boolean get_ForbidKeepKeyForStatusWhenModifierRename()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_FORBIDKEEPKEYFORSTATUSWHENMODIFIERRENAME_OFFSET))();
		}

		static ::System::Void set_ForbidKeepKeyForStatusWhenModifierRename(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_FORBIDKEEPKEYFORSTATUSWHENMODIFIERRENAME_OFFSET))(a1);
		}

		static ::System::Boolean get_EnablePartOverrideOwnerAnimSpeed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_ENABLEPARTOVERRIDEOWNERANIMSPEED_OFFSET))();
		}

		static ::System::Void set_EnablePartOverrideOwnerAnimSpeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_ENABLEPARTOVERRIDEOWNERANIMSPEED_OFFSET))(a1);
		}

		static ::System::Boolean get_ForbidMonoEffectResetParticleSystemSimulationSpeed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_GET_FORBIDMONOEFFECTRESETPARTICLESYSTEMSIMULATIONSPEED_OFFSET))();
		}

		static ::System::Void set_ForbidMonoEffectResetParticleSystemSimulationSpeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_SET_FORBIDMONOEFFECTRESETPARTICLESYSTEMSIMULATIONSPEED_OFFSET))(a1);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNBCPFJOGIE_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Boolean EFMEPLPFBJA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_EFMEPLPFBJA_OFFSET))(a1);
		}

		static ::System::Boolean DAGCKHNLECO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CNBCPFJOGIE_DAGCKHNLECO_OFFSET))(a1);
		}

	};
