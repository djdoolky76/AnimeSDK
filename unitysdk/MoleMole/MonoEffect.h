#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/MonoEffectPluginMask.h"
#include "unitysdk/MoleMole/MonoEffectRuntimeDataCache.h"
#include "unitysdk/MoleMole/MonoEffect_AJCEGOLPCEE.h"
#include "unitysdk/MoleMole/MonoEffect_KNINDHJIAMO.h"
#include "unitysdk/MoleMole/MonoEffect_OMJIAAEBPPA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class GIPLLNOAECM;
namespace MoleMole { class DynamicBoneParaSwitch; }
namespace MoleMole { class MonoEffectExtensionBehaviour; }
namespace MoleMole { class MonoEffectPluginAttachPoint; }
namespace MoleMole { class MonoEffectPluginAttachToCamera; }
namespace MoleMole { class MonoEffectPluginAudio; }
namespace MoleMole { class MonoEffectPluginClipPlane; }
namespace MoleMole { class MonoEffectPluginConstantScreenSize; }
namespace MoleMole { class MonoEffectPluginDestroy; }
namespace MoleMole { class MonoEffectPluginDither; }
namespace MoleMole { class MonoEffectPluginFade; }
namespace MoleMole { class MonoEffectPluginFollow; }
namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace MoleMole { class MonoEffectPluginHitWall; }
namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }
namespace MoleMole { class MonoEffectPluginScreenEffect; }
namespace MoleMole { class MonoEffectPluginStateAnimation; }
namespace MoleMole { class MonoEffectPluginSyncEntityPos; }
namespace MoleMole { class MonoEffectPluginTransform; }
namespace MoleMole { class MonoEffectSelfAttachPoint; }
namespace MoleMole { class MonoEffectShape; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class XWeaponTrailCustom; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class PBDDeformer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECT_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x1468D360)
#define MOLEMOLE_MONOEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1468A590)
#define MOLEMOLE_MONOEFFECT_BBNIOPNBLKG_OFFSET UNITYSDK_OFFSET(0x1468D0F0)
#define MOLEMOLE_MONOEFFECT_CLEARPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1468BE40)
#define MOLEMOLE_MONOEFFECT_CLEARRENDER_OFFSET UNITYSDK_OFFSET(0x1468C210)
#define MOLEMOLE_MONOEFFECT_COLGFJCOBBE_OFFSET UNITYSDK_OFFSET(0x1468AFC0)
#define MOLEMOLE_MONOEFFECT_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x14685D40)
#define MOLEMOLE_MONOEFFECT_DOCACHEBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x14689E90)
#define MOLEMOLE_MONOEFFECT_EDFNIGBCOGK_OFFSET UNITYSDK_OFFSET(0x1468B060)
#define MOLEMOLE_MONOEFFECT_GETCACHEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x14689560)
#define MOLEMOLE_MONOEFFECT_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x14689C10)
#define MOLEMOLE_MONOEFFECT_GET_CACHEDBEHAVIOURS_OFFSET UNITYSDK_OFFSET(0x1468A530)
#define MOLEMOLE_MONOEFFECT_GET_CACHEDRENDERERSTOENABLE_OFFSET UNITYSDK_OFFSET(0x14689E30)
#define MOLEMOLE_MONOEFFECT_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x14689520)
#define MOLEMOLE_MONOEFFECT_GET_DYNAMICBONEPARASWITCHES_OFFSET UNITYSDK_OFFSET(0x14688D40)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATIONS_OFFSET UNITYSDK_OFFSET(0x14686F20)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATION_OFFSET UNITYSDK_OFFSET(0x14686DA0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTLOGICCONTROLLER_OFFSET UNITYSDK_OFFSET(0x146871C0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14689540)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x14687AC0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHTOCAMERA_OFFSET UNITYSDK_OFFSET(0x14688A40)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINAUDIO_OFFSET UNITYSDK_OFFSET(0x14687340)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x14688BC0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCONSTANTSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x14689050)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDESTROY_OFFSET UNITYSDK_OFFSET(0x14687940)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDITHER_OFFSET UNITYSDK_OFFSET(0x146874C0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFADE_OFFSET UNITYSDK_OFFSET(0x14687640)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOWCAMERA_OFFSET UNITYSDK_OFFSET(0x14688ED0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOW_OFFSET UNITYSDK_OFFSET(0x146877C0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINGROUNDLIGHTING_OFFSET UNITYSDK_OFFSET(0x146885C0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINLASERLINERENDERERS_OFFSET UNITYSDK_OFFSET(0x146888C0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x14687C40)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSTATEANIMATION_OFFSET UNITYSDK_OFFSET(0x14689350)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSYNCENTITYPOS_OFFSET UNITYSDK_OFFSET(0x146891D0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINTRANSFORM_OFFSET UNITYSDK_OFFSET(0x14687DC0)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTSELFATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x14688740)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTSHAPE_OFFSET UNITYSDK_OFFSET(0x14687F40)
#define MOLEMOLE_MONOEFFECT_GET_EFFECTWEAPONTRAIL_OFFSET UNITYSDK_OFFSET(0x146880C0)
#define MOLEMOLE_MONOEFFECT_GET_FINALANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1468B790)
#define MOLEMOLE_MONOEFFECT_GET_FINALPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x1468B760)
#define MOLEMOLE_MONOEFFECT_GET_ISALLCOMPONENTSCACHED_OFFSET UNITYSDK_OFFSET(0x14685F30)
#define MOLEMOLE_MONOEFFECT_GET_ISINACTIVECOMPCACHED_OFFSET UNITYSDK_OFFSET(0x14685EA0)
#define MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTLIGHTS_OFFSET UNITYSDK_OFFSET(0x14686140)
#define MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTRENDERS_OFFSET UNITYSDK_OFFSET(0x146866B0)
#define MOLEMOLE_MONOEFFECT_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0x14685FE0)
#define MOLEMOLE_MONOEFFECT_GET_MONOEFFECTEXTENSIONBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x14687030)
#define MOLEMOLE_MONOEFFECT_GET_NEEDINACTIVECACHED_OFFSET UNITYSDK_OFFSET(0x14685E40)
#define MOLEMOLE_MONOEFFECT_GET_PARTICLESYS_OFFSET UNITYSDK_OFFSET(0x14686AC0)
#define MOLEMOLE_MONOEFFECT_GET_PBDDEFORMER_OFFSET UNITYSDK_OFFSET(0x146884C0)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLBULLET_OFFSET UNITYSDK_OFFSET(0x146883C0)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLSCRATCH_OFFSET UNITYSDK_OFFSET(0x146882C0)
#define MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALL_OFFSET UNITYSDK_OFFSET(0x146881C0)
#define MOLEMOLE_MONOEFFECT_GET_POLYGONBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x146894D0)
#define MOLEMOLE_MONOEFFECT_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x14686550)
#define MOLEMOLE_MONOEFFECT_GET_SIMULATORMGR_OFFSET UNITYSDK_OFFSET(0x14686C20)
#define MOLEMOLE_MONOEFFECT_GHJPIBKPGGF_OFFSET UNITYSDK_OFFSET(0x1468A7D0)
#define MOLEMOLE_MONOEFFECT_INITPARTICLES_OFFSET UNITYSDK_OFFSET(0x1468B860)
#define MOLEMOLE_MONOEFFECT_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x1468D2F0)
#define MOLEMOLE_MONOEFFECT_LCGBGGOFBGD_OFFSET UNITYSDK_OFFSET(0x1468A9E0)
#define MOLEMOLE_MONOEFFECT_LMBNMDHGDPL_OFFSET UNITYSDK_OFFSET(0x1468B500)
#define MOLEMOLE_MONOEFFECT_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x14685C40)
#define MOLEMOLE_MONOEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1468B180)
#define MOLEMOLE_MONOEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x14685C80)
#define MOLEMOLE_MONOEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14685B50)
#define MOLEMOLE_MONOEFFECT_RESETPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x1468C2F0)
#define MOLEMOLE_MONOEFFECT_SETATTACH_OFFSET UNITYSDK_OFFSET(0x1468B7C0)
#define MOLEMOLE_MONOEFFECT_SETCOMPONENTSACTIVE_OFFSET UNITYSDK_OFFSET(0x1468C340)
#define MOLEMOLE_MONOEFFECT_SET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x14689530)
#define MOLEMOLE_MONOEFFECT_SET_EFFECTMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14689550)
#define MOLEMOLE_MONOEFFECT_UPDATECACHESERIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1468CA60)
#define MOLEMOLE_MONOEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468D000)
#define MOLEMOLE_MONOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1468CF50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffect_TypeDefinitionIndex = 89486;

	class MonoEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>** StaticGet_FIFONGHPPGI()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x4C150);
		}
		static ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>** StaticGet_BJJMABOONBM()
		{
			return (::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x4C158);
		}
		static ::System::Boolean* StaticGet_monoEffectUseSimulateTimeOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x11A20);
		}
		static ::System::Boolean* StaticGet_monoEffectNotSimulateIfNoOffset()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoEffect_TypeDefinitionIndex)->GetStaticField(0x11A21);
		}
		::UnityEngine::Vector3 OffsetVec3; // 0x18
		::UnityEngine::Vector3 PosOffset; // 0x24
		::UnityEngine::Vector3 AngleOffset; // 0x30
		::System::Boolean IsUseStartTimeOffset; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single StartTimeOffset; // 0x40
		::System::Boolean IgnoreWorldTimeScale; // 0x44
		::System::Boolean IgnoreOwnerTimeScale; // 0x45
		::System::Boolean IgnoreWitchTimeScale; // 0x46
		::System::Byte _padding1[0x1];
		::MoleMole::MonoEffect_KNINDHJIAMO ActionWhenAttachedCasterKilled; // 0x48
		::MoleMole::MonoEffect_OMJIAAEBPPA CasterKilledType; // 0x4C
		::System::Boolean IsUseLayeredEffect; // 0x50
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* LayeredEffectList; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* TagGoConfigList; // 0x60
		::System::Boolean IgnoreBlackScreenHide; // 0x68
		::System::Boolean NeedShowLightInBlackScreen; // 0x69
		::System::Boolean IgnoreColorAdjustment; // 0x6A
		::System::Boolean IsExcludeFromLevelEndEffectDisappear; // 0x6B
		::System::Byte _padding3[0x4];
		::MoleMole::GameplayTag EffectTag; // 0x70
		::MoleMole::MonoEffectPluginMask _MonoEffectPluginMask; // 0x80
		::System::Boolean _isInactiveCached; // 0xA0
		::System::Byte _padding4[0x7];
		::Il2CppArray<::UnityEngine::Light*>* _lights; // 0xA8
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* _layeredEffectLights; // 0xB0
		::Il2CppArray<::UnityEngine::Renderer*>* _renderers; // 0xB8
		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* _layeredEffectRenders; // 0xC0
		::Il2CppArray<::UnityEngine::ParticleSystem*>* _particleSys; // 0xC8
		::MoleMole::EffectSimulate::NapEffectSimulatorMgr* _SimulatorMgr; // 0xD0
		::UnityEngine::Animation* _effectAnimation; // 0xD8
		::System::Boolean GPAMFJJOLHP; // 0xE0
		::System::Byte _padding5[0x7];
		::Il2CppArray<::UnityEngine::Animation*>* ODBDDDICMBE; // 0xE8
		::MoleMole::MonoEffectExtensionBehaviour* _MonoEffectExtensionBehaviour; // 0xF0
		::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* _effectLogicController; // 0xF8
		::MoleMole::MonoEffectPluginAudio* _effectPluginAudio; // 0x100
		::MoleMole::MonoEffectPluginDither* _effectPluginDither; // 0x108
		::MoleMole::MonoEffectPluginFade* _effectPluginFade; // 0x110
		::MoleMole::MonoEffectPluginFollow* _effectPluginFollow; // 0x118
		::MoleMole::MonoEffectPluginDestroy* _effectPluginDestroy; // 0x120
		::MoleMole::MonoEffectPluginAttachPoint* _effectPluginAttachPoint; // 0x128
		::MoleMole::MonoEffectPluginScreenEffect* _effectPluginScreenEffect; // 0x130
		::MoleMole::MonoEffectPluginTransform* _effectPluginTransform; // 0x138
		::MoleMole::MonoEffectShape* _effectShape; // 0x140
		::MoleMole::Battle::XWeaponTrailCustom* _effectWeapontrail; // 0x148
		::MoleMole::MonoEffectPluginHitWall* _pluginHitWall; // 0x150
		::MoleMole::MonoEffectPluginHitWallScratch* _pluginHitWallScratch; // 0x158
		::MoleMole::MonoEffectPluginHitWallBullet* _pluginHitWallBullet; // 0x160
		::UnityEngine::PBDDeformer* _deformer; // 0x168
		::MoleMole::MonoEffectPluginGroundLighting* _effectPluginGroundLighting; // 0x170
		::MoleMole::MonoEffectSelfAttachPoint* _effectSelfAttachPoint; // 0x178
		::MoleMole::MonoEffectPluginLaserLineRenderers* _effectPluginLaserLineRenderers; // 0x180
		::MoleMole::MonoEffectPluginAttachToCamera* _effectPluginAttachToCamera; // 0x188
		::MoleMole::MonoEffectPluginClipPlane* _effectPluginClipPlane; // 0x190
		::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* _dynamicBoneParaSwitches; // 0x198
		::MoleMole::MonoEffectPluginFollowCamera* _effectPluginFollowCamera; // 0x1A0
		::MoleMole::MonoEffectPluginConstantScreenSize* _effectPluginConstantScreenSize; // 0x1A8
		::MoleMole::MonoEffectPluginSyncEntityPos* _effectPluginSyncEntityPos; // 0x1B0
		::MoleMole::MonoEffectPluginStateAnimation* _effectPluginStateAnimation; // 0x1B8
		::MoleMole::MonoEffect_AJCEGOLPCEE BKMIDBIHNLJ; // 0x1C0
		::System::Byte _padding6[0x4];
		::GIPLLNOAECM* AFKGMLBJMMO; // 0x1C8
		::System::Boolean CEPNKGFFMNF; // 0x1D0
		::System::Byte _padding7[0x7];
		::Il2CppArray<::UnityEngine::Material*>* PHGNAAFKDNK; // 0x1D8
		::MoleMole::Battle::Entity* _MPGMBGLCGOK_k__BackingField; // 0x1E0
		::AEMCAOEICDG* _NLDGDGEMNOB_k__BackingField; // 0x1E8
		::System::Boolean IsBehavioursCached; // 0x1F0
		::System::Byte _padding8[0x7];
		::Il2CppArray<::UnityEngine::Renderer*>* _cacheRenderersToEnable; // 0x1F8
		::Il2CppArray<::UnityEngine::Behaviour*>* _cachedBehaviours; // 0x200
		::MoleMole::MonoEffectRuntimeDataCache RuntimeDataCache; // 0x208
		::MCKCKBEGCCM RenderersThatNeedTimeOffsetMaterial; // 0x290
		::UnityEngine::Vector3 GFNAJECLBDB; // 0x2D0
		::UnityEngine::Vector3 JGKJAINABBD; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean get_NeedInactiveCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_NEEDINACTIVECACHED_OFFSET))(this);
		}

		::System::Boolean get_IsInactiveCompCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_ISINACTIVECOMPCACHED_OFFSET))(this);
		}

		::System::Boolean get_IsAllComponentsCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_ISALLCOMPONENTSCACHED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Light*>* get_Lights()
		{
			return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>* get_LayeredEffectLights()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Light*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTLIGHTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_RENDERERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>* get_LayeredEffectRenders()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Renderer*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_LAYEREDEFFECTRENDERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem*>* get_ParticleSys()
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PARTICLESYS_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::NapEffectSimulatorMgr* get_SimulatorMgr()
		{
			return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_SIMULATORMGR_OFFSET))(this);
		}

		::UnityEngine::Animation* get_EffectAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATION_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Animation*>* get_EffectAnimations()
		{
			return ((::Il2CppArray<::UnityEngine::Animation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTANIMATIONS_OFFSET))(this);
		}

		::MoleMole::MonoEffectExtensionBehaviour* get_MonoEffectExtensionBehaviour()
		{
			return ((::MoleMole::MonoEffectExtensionBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_MONOEFFECTEXTENSIONBEHAVIOUR_OFFSET))(this);
		}

		::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* get_EffectLogicController()
		{
			return ((::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTLOGICCONTROLLER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAudio* get_EffectPluginAudio()
		{
			return ((::MoleMole::MonoEffectPluginAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINAUDIO_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginDither* get_EffectPluginDither()
		{
			return ((::MoleMole::MonoEffectPluginDither*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDITHER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFade* get_EffectPluginFade()
		{
			return ((::MoleMole::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFADE_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFollow* get_EffectPluginFollow()
		{
			return ((::MoleMole::MonoEffectPluginFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOW_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginDestroy* get_EffectPluginDestroy()
		{
			return ((::MoleMole::MonoEffectPluginDestroy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINDESTROY_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAttachPoint* get_EffectPluginAttachPoint()
		{
			return ((::MoleMole::MonoEffectPluginAttachPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHPOINT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginScreenEffect* get_EffectPluginScreenEffect()
		{
			return ((::MoleMole::MonoEffectPluginScreenEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSCREENEFFECT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginTransform* get_EffectPluginTransform()
		{
			return ((::MoleMole::MonoEffectPluginTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINTRANSFORM_OFFSET))(this);
		}

		::MoleMole::MonoEffectShape* get_EffectShape()
		{
			return ((::MoleMole::MonoEffectShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTSHAPE_OFFSET))(this);
		}

		::MoleMole::Battle::XWeaponTrailCustom* get_EffectWeapontrail()
		{
			return ((::MoleMole::Battle::XWeaponTrailCustom*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTWEAPONTRAIL_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWall* get_PluginHitWall()
		{
			return ((::MoleMole::MonoEffectPluginHitWall*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALL_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWallScratch* get_PluginHitWallScratch()
		{
			return ((::MoleMole::MonoEffectPluginHitWallScratch*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLSCRATCH_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginHitWallBullet* get_PluginHitWallBullet()
		{
			return ((::MoleMole::MonoEffectPluginHitWallBullet*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PLUGINHITWALLBULLET_OFFSET))(this);
		}

		::UnityEngine::PBDDeformer* get_PBDDeformer()
		{
			return ((::UnityEngine::PBDDeformer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_PBDDEFORMER_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginGroundLighting* get_EffectPluginGroundLighting()
		{
			return ((::MoleMole::MonoEffectPluginGroundLighting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINGROUNDLIGHTING_OFFSET))(this);
		}

		::MoleMole::MonoEffectSelfAttachPoint* get_EffectSelfAttachPoint()
		{
			return ((::MoleMole::MonoEffectSelfAttachPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTSELFATTACHPOINT_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginLaserLineRenderers* get_EffectPluginLaserLineRenderers()
		{
			return ((::MoleMole::MonoEffectPluginLaserLineRenderers*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINLASERLINERENDERERS_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginAttachToCamera* get_EffectPluginAttachToCamera()
		{
			return ((::MoleMole::MonoEffectPluginAttachToCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINATTACHTOCAMERA_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginClipPlane* get_EffectPluginClipPlane()
		{
			return ((::MoleMole::MonoEffectPluginClipPlane*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCLIPPLANE_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>* get_DynamicBoneParaSwitches()
		{
			return ((::Il2CppArray<::MoleMole::DynamicBoneParaSwitch*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_DYNAMICBONEPARASWITCHES_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginFollowCamera* get_EffectPluginFollowCamera()
		{
			return ((::MoleMole::MonoEffectPluginFollowCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINFOLLOWCAMERA_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginConstantScreenSize* get_EffectPluginConstantScreenSize()
		{
			return ((::MoleMole::MonoEffectPluginConstantScreenSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINCONSTANTSCREENSIZE_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginSyncEntityPos* get_EffectPluginSyncEntityPos()
		{
			return ((::MoleMole::MonoEffectPluginSyncEntityPos*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSYNCENTITYPOS_OFFSET))(this);
		}

		::MoleMole::MonoEffectPluginStateAnimation* get_EffectPluginStateAnimation()
		{
			return ((::MoleMole::MonoEffectPluginStateAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTPLUGINSTATEANIMATION_OFFSET))(this);
		}

		::GIPLLNOAECM* get_PolygonBehavior()
		{
			return ((::GIPLLNOAECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_POLYGONBEHAVIOR_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* get_casterEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CASTERENTITY_OFFSET))(this);
		}

		::System::Void set_casterEntity(::MoleMole::Battle::Entity* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SET_CASTERENTITY_OFFSET))(this, EGEGIMGMJHN);
		}

		::AEMCAOEICDG* get_effectModelComponent()
		{
			return ((::AEMCAOEICDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_EFFECTMODELCOMPONENT_OFFSET))(this);
		}

		::System::Void set_effectModelComponent(::AEMCAOEICDG* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SET_EFFECTMODELCOMPONENT_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Material* GetCachedMaterial(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GETCACHEDMATERIAL_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Material* GetSharedMaterial(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GETSHAREDMATERIAL_OFFSET))(this, ABHBKFJKINO);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_CachedRenderersToEnable()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CACHEDRENDERERSTOENABLE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Behaviour*>* get_CachedBehaviours()
		{
			return ((::Il2CppArray<::UnityEngine::Behaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_CACHEDBEHAVIOURS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalPosOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_FINALPOSOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalAngleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GET_FINALANGLEOFFSET_OFFSET))(this);
		}

		::System::Void SetAttach(::UnityEngine::Vector3 ODNKEAPMILG, ::UnityEngine::Vector3 GEDCCBHAEDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SETATTACH_OFFSET))(this, ODNKEAPMILG, GEDCCBHAEDM);
		}

		::System::Void InitParticles(::System::Single CAOPDAMCNCN, ::System::Boolean HFEDICLFPKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_INITPARTICLES_OFFSET))(this, CAOPDAMCNCN, HFEDICLFPKO);
		}

		::System::Void ClearParticleSystems(::System::Boolean HKLFOAJLIAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_CLEARPARTICLESYSTEMS_OFFSET))(this, HKLFOAJLIAE);
		}

		::System::Void ClearRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_CLEARRENDER_OFFSET))(this);
		}

		::System::Void ResetPlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_RESETPLAYSTATE_OFFSET))(this);
		}

		::System::Void SetComponentsActive(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_SETCOMPONENTSACTIVE_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void DoCacheBehaviours()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_DOCACHEBEHAVIOURS_OFFSET))(this);
		}

		::System::Void UpdateCacheSerializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_UPDATECACHESERIALIZEDATA_OFFSET))(this);
		}

		::System::Void LMBNMDHGDPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_LMBNMDHGDPL_OFFSET))(this);
		}

		::System::Void BBNIOPNBLKG(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_BBNIOPNBLKG_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void LCGBGGOFBGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_LCGBGGOFBGD_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void GHJPIBKPGGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_GHJPIBKPGGF_OFFSET))(this);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_DLIDBNKMKCO_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_AJEEBNCNHMN_OFFSET))(this);
		}

		::System::Void EDFNIGBCOGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_EDFNIGBCOGK_OFFSET))(this);
		}

		::System::Void COLGFJCOBBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_COLGFJCOBBE_OFFSET))(this);
		}
	};
}
