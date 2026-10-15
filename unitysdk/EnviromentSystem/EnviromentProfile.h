#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentProfile_ELFMOJELKBJ.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class COGBNIGPJPO;
class KLEFGGIHGMI;
class SceneLightVolume;
namespace EnviromentSystem { class EnviroBlockDataTransProperty; }
namespace EnviromentSystem { class EnviroBoolProperty; }
namespace EnviromentSystem { class EnviroEffectLightProperty; }
namespace EnviromentSystem { class EnviroEnumProperty; }
namespace EnviromentSystem { class EnviroFloatProperty; }
namespace EnviromentSystem { class EnviroGpuParticleProperty; }
namespace EnviromentSystem { class EnviroGradientProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroParticleProperty; }
namespace EnviromentSystem { class EnviroPointLightProperty; }
namespace EnviromentSystem { class EnviroPostProcessVolumeProperty; }
namespace EnviromentSystem { class EnviroPrefabProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroReflectionProbeProperty; }
namespace EnviromentSystem { class EnviroTextureProperty; }
namespace EnviromentSystem { class EnviroVectorProperty; }
namespace EnviromentSystem { class EnviroWindZoneProperty; }
namespace EnviromentSystem { class EnviromentClip; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_AAFFDLBLNJG_OFFSET UNITYSDK_OFFSET(0x15628790)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15627760)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ADIGGANAMPH_OFFSET UNITYSDK_OFFSET(0x15631FA0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BAODPCDPFML_OFFSET UNITYSDK_OFFSET(0x156316E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BIPFPBKFGDE_OFFSET UNITYSDK_OFFSET(0x15628380)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BNBAJJPAFBM_OFFSET UNITYSDK_OFFSET(0x15632050)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BNILHCDGHJB_OFFSET UNITYSDK_OFFSET(0x156321F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BPPDJFCNPOK_OFFSET UNITYSDK_OFFSET(0x15627920)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CADFCEAHNCF_OFFSET UNITYSDK_OFFSET(0x156282D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0x1562D160)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CCTOR_OFFSET UNITYSDK_OFFSET(0x156333D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CDDMBLPLDIA_OFFSET UNITYSDK_OFFSET(0x155EBA50)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CDJLIEFHELP_OFFSET UNITYSDK_OFFSET(0x15632630)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CJDMHOHBIMG_OFFSET UNITYSDK_OFFSET(0x15631460)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CJPLNHNIHFD_OFFSET UNITYSDK_OFFSET(0x15631770)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CLMBJABNGFP_OFFSET UNITYSDK_OFFSET(0x1562D1B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CMFABFAOFAH_OFFSET UNITYSDK_OFFSET(0x156305A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x15633320)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x1562EBF0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DKOCBLEOCGK_OFFSET UNITYSDK_OFFSET(0x15631120)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DMACADKNLAA_OFFSET UNITYSDK_OFFSET(0x15631800)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DPOANCGDMBP_OFFSET UNITYSDK_OFFSET(0x1562F7A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EDFJNHAMKBL_OFFSET UNITYSDK_OFFSET(0x1562D230)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EOPDCMGLONM_OFFSET UNITYSDK_OFFSET(0x15631BB0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EPNFLFKBJDM_OFFSET UNITYSDK_OFFSET(0x15632270)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FCFIDCJINFO_OFFSET UNITYSDK_OFFSET(0x155E82E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FGFDGBDLOLO_OFFSET UNITYSDK_OFFSET(0x1562FE20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FMCJGKMKEHN_OFFSET UNITYSDK_OFFSET(0x1562EED0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x15629960)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FNNIMKNFGOM_OFFSET UNITYSDK_OFFSET(0x15631E00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GBFEIPPEKJN_OFFSET UNITYSDK_OFFSET(0x15630CB0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GDGEKGGJCBJ_OFFSET UNITYSDK_OFFSET(0x15631B30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x156273B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x156274A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x15627480)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1562ECA0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HDPEELLHEPC_OFFSET UNITYSDK_OFFSET(0x156278A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HFKCFGKAGHG_OFFSET UNITYSDK_OFFSET(0x156332A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HGNDDFPBPIB_OFFSET UNITYSDK_OFFSET(0x1562F290)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IDJBADIDJOI_OFFSET UNITYSDK_OFFSET(0x1562E910)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IIDAAPIMLJK_1_OFFSET UNITYSDK_OFFSET(0x1562A2E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IIDAAPIMLJK_OFFSET UNITYSDK_OFFSET(0x15629B90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IOBHEKEGKKH_OFFSET UNITYSDK_OFFSET(0x1562FC20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JAECGCDKGAH_OFFSET UNITYSDK_OFFSET(0x15631C20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JBEHEMPJHPK_OFFSET UNITYSDK_OFFSET(0x1562FA70)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JEJIFBIIFHE_OFFSET UNITYSDK_OFFSET(0x1562E6A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JICOLFIJBKF_OFFSET UNITYSDK_OFFSET(0x1562F0B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JJFPKNJMOLO_OFFSET UNITYSDK_OFFSET(0x15632680)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15629A30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JNIDGOJFKGL_OFFSET UNITYSDK_OFFSET(0x15630350)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KAHLLJCNAKL_OFFSET UNITYSDK_OFFSET(0x1560EE90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KLINIHAEICE_OFFSET UNITYSDK_OFFSET(0x15627360)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KPIGDFGAMJC_OFFSET UNITYSDK_OFFSET(0x1562EB40)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15627C50)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LDJEBEJDDBA_OFFSET UNITYSDK_OFFSET(0x1562A340)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LGJKJJCJCJE_OFFSET UNITYSDK_OFFSET(0x15631670)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x1562E770)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LLBKEEPHIND_OFFSET UNITYSDK_OFFSET(0x1562D2B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LPANPOJMENG_OFFSET UNITYSDK_OFFSET(0x156284E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_MINDLBJNIOO_OFFSET UNITYSDK_OFFSET(0x15632120)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NALODEBBOKO_OFFSET UNITYSDK_OFFSET(0x15625880)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NDMOKDMDFOJ_OFFSET UNITYSDK_OFFSET(0x15632360)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NGCOAMENJDI_OFFSET UNITYSDK_OFFSET(0x15627510)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NHGCDGPCLKI_OFFSET UNITYSDK_OFFSET(0x15627310)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NJKCJDDALFJ_OFFSET UNITYSDK_OFFSET(0x156312D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NJLHMEFCDLM_OFFSET UNITYSDK_OFFSET(0x1562ED80)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NLBGIBDFJIN_OFFSET UNITYSDK_OFFSET(0x1562F8C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NOMFNJGPCLN_OFFSET UNITYSDK_OFFSET(0x15630E60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OAEMNALIIDK_OFFSET UNITYSDK_OFFSET(0x15631600)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OCNADHMAJGP_OFFSET UNITYSDK_OFFSET(0x1562E9C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OGIFHDOHHJJ_OFFSET UNITYSDK_OFFSET(0x15630A00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15632C20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15632BE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OOJPHMNKKKB_OFFSET UNITYSDK_OFFSET(0x1562AF50)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PFGFFKNBFKC_OFFSET UNITYSDK_OFFSET(0x15630010)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PGGCHPHENLI_OFFSET UNITYSDK_OFFSET(0x156319A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PLBNJCBMIOH_OFFSET UNITYSDK_OFFSET(0x1562A090)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PLOPPLMOJHH_OFFSET UNITYSDK_OFFSET(0x15632760)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15628CC0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x156273C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x156274B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x15627490)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile_TypeDefinitionIndex = 49586;

	class EnviromentProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* OnLoadFinish; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PropertiesTable; // 0x20
		::System::Boolean _isFullProfile; // 0x28
		::System::Byte _padding0[0x7];
		::EnviromentSystem::EnviromentProfile* activeProfileTransitionTarget; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _ClipTypes; // 0x38
		::System::String* ProfilePath; // 0x40
		::System::String* ProfilePathNext; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* AsyncLoadResources; // 0x50
		::System::Boolean IsAsyncLoadFinished; // 0x58
		::System::Boolean IsInited; // 0x59
		::System::Byte _padding1[0x2];
		::System::Int32 loadResourcesCount; // 0x5C
		::System::Int32 iTaskDoneCount; // 0x60
		::System::Byte _padding2[0x4];
		::EnviromentSystem::EnviroBlockDataTransProperty* _EnviroBlockDataTransProperty; // 0x68
		::System::Boolean IsSubClip; // 0x70
		::System::Boolean IsKeepEnviroBlockData; // 0x71
		::System::Boolean NeedUpdateEnvPrefab; // 0x72
		::System::Boolean OriIsSubClip; // 0x73
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviromentClip*>* EnviroProfileClips; // 0x78
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroBoolProperty*>* EnviroBoolProperties; // 0x80
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroFloatProperty*>* EnviroFloatProperties; // 0x88
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty*>* EnviroLocalLightGroupProperties; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroVectorProperty*>* EnviroVectorProperties; // 0x98
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEnumProperty*>* EnviroEnumProperties; // 0xA0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroTextureProperty*>* EnviroTextureProperties; // 0xA8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPrefabProperty*>* EnviroPrefabProperties; // 0xB0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGradientProperty*>* EnviroGradientProperties; // 0xB8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGpuParticleProperty*>* EnviroGpuParticleProperties; // 0xC0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroReflectionProbeProperty*>* EnviroReflectionProbeProperties; // 0xC8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPointLightProperty*>* EnviroPointLightProperties; // 0xD0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroParticleProperty*>* EnviroParticleProperties; // 0xD8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEffectLightProperty*>* EnviroEffectLightingProperties; // 0xE0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPostProcessVolumeProperty*>* EnviroPPVolumeProperties; // 0xE8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroWindZoneProperty*>* EnviroWindZoneProperties; // 0xF0
		::System::Boolean IsCancelAsyncLoad; // 0xF8
		::System::Byte _padding4[0x7];
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* TempProperties; // 0x100
		::Il2CppArray<::System::Int32>* TempPropertiesArray; // 0x108
		::EnviromentSystem::EnviromentProfile_ELFMOJELKBJ _CopyTexCmd; // 0x110
		static ::EnviromentSystem::EnviromentProfile** StaticGet__DefaultProfileTemplate()
		{
			return (::EnviromentSystem::EnviromentProfile**)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x58360);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet__EnvPropShaderIDToIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x58368);
		}

		static ::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>** StaticGet__DefaultProfilePool()
		{
			return (::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>**)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x58370);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>** StaticGet__LoadResources()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>**)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x58378);
		}

		static ::System::Int32* StaticGet_ShadowDirID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x13620);
		}

		static ::System::Int32* StaticGet_GlobalRotMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x13624);
		}

		static ::System::Int32* StaticGet_TransitionRateID()
		{
			return (::System::Int32*)UnitySDK::FromName("EnviromentSystem", "EnviromentProfile")->GetStaticField(0x13628);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CCTOR_OFFSET))();
		}

		::System::Int32 NHGCDGPCLKI(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NHGCDGPCLKI_OFFSET))(this, a1);
		}

		::System::Void KLINIHAEICE(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KLINIHAEICE_OFFSET))(this, a1, a2);
		}

		::COGBNIGPJPO* get_ActiveProfileTransitionTarget()
		{
			return ((::COGBNIGPJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
		}

		::System::Void set_ActiveProfileTransitionTarget(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
		}

		::System::String* get_ProfilePathEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET))(this);
		}

		::System::Void set_ProfilePathEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET))(this, a1);
		}

		::System::String* get_NameEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET))(this);
		}

		::System::Void set_NameEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET))(this, a1);
		}

		static ::System::Void NGCOAMENJDI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NGCOAMENJDI_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* HDPEELLHEPC()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HDPEELLHEPC_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* BIPFPBKFGDE()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BIPFPBKFGDE_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* BPPDJFCNPOK()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BPPDJFCNPOK_OFFSET))();
		}

		::System::Void LPANPOJMENG(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LPANPOJMENG_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IIDAAPIMLJK(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IIDAAPIMLJK_OFFSET))(this, a1);
		}

		::System::Void IIDAAPIMLJK_1(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IIDAAPIMLJK_1_OFFSET))(this, a1, a2);
		}

		::System::Void CADFCEAHNCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CADFCEAHNCF_OFFSET))(this);
		}

		::System::Void LDJEBEJDDBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LDJEBEJDDBA_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void OOJPHMNKKKB(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OOJPHMNKKKB_OFFSET))(this, a1);
		}

		::SceneLightVolume* CCCMOCIELFO()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CCCMOCIELFO_OFFSET))(this);
		}

		::System::Void CLMBJABNGFP(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CLMBJABNGFP_OFFSET))(this, a1);
		}

		::System::Void EDFJNHAMKBL(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EDFJNHAMKBL_OFFSET))(this, a1);
		}

		::System::Void LLBKEEPHIND(::COGBNIGPJPO* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LLBKEEPHIND_OFFSET))(this, a1, a2);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void IDJBADIDJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IDJBADIDJOI_OFFSET))(this);
		}

		::System::Void JEJIFBIIFHE(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JEJIFBIIFHE_OFFSET))(this, a1);
		}

		::System::Void OCNADHMAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OCNADHMAJGP_OFFSET))(this);
		}

		::System::Void KPIGDFGAMJC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KPIGDFGAMJC_OFFSET))(this, a1);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KAHLLJCNAKL(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_KAHLLJCNAKL_OFFSET))(this, a1, a2);
		}

		::System::Void NJLHMEFCDLM(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NJLHMEFCDLM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* FMCJGKMKEHN(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FMCJGKMKEHN_OFFSET))(this, a1);
		}

		::UnityEngine::Light* JICOLFIJBKF(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JICOLFIJBKF_OFFSET))(this, a1);
		}

		::System::Boolean HGNDDFPBPIB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HGNDDFPBPIB_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroProperty* FCFIDCJINFO(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FCFIDCJINFO_OFFSET))(this, a1);
		}

		::System::Int32 DPOANCGDMBP(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DPOANCGDMBP_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* NLBGIBDFJIN(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NLBGIBDFJIN_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* JBEHEMPJHPK(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JBEHEMPJHPK_OFFSET))(this, a1);
		}

		::System::Void IOBHEKEGKKH(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_IOBHEKEGKKH_OFFSET))(this, a1, a2);
		}

		::System::Void FGFDGBDLOLO(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FGFDGBDLOLO_OFFSET))(this, a1, a2);
		}

		::System::Single PLBNJCBMIOH(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PLBNJCBMIOH_OFFSET))(this, a1);
		}

		::System::Void PFGFFKNBFKC(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PFGFFKNBFKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JNIDGOJFKGL(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JNIDGOJFKGL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 NALODEBBOKO(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NALODEBBOKO_OFFSET))(this, a1);
		}

		::System::Void CMFABFAOFAH(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CMFABFAOFAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CDDMBLPLDIA(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CDDMBLPLDIA_OFFSET))(this, a1);
		}

		::System::Boolean OGIFHDOHHJJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OGIFHDOHHJJ_OFFSET))(this, a1);
		}

		::System::Boolean GBFEIPPEKJN(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GBFEIPPEKJN_OFFSET))(this, a1);
		}

		::System::Void NOMFNJGPCLN(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NOMFNJGPCLN_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* DKOCBLEOCGK(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DKOCBLEOCGK_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroGpuParticleProperty* NJKCJDDALFJ()
		{
			return ((::EnviromentSystem::EnviroGpuParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NJKCJDDALFJ_OFFSET))(this);
		}

		::EnviromentSystem::EnviroWindZoneProperty* CJDMHOHBIMG()
		{
			return ((::EnviromentSystem::EnviroWindZoneProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CJDMHOHBIMG_OFFSET))(this);
		}

		::System::Boolean OAEMNALIIDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_OAEMNALIIDK_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* LGJKJJCJCJE()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_LGJKJJCJCJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 BAODPCDPFML()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BAODPCDPFML_OFFSET))(this);
		}

		::UnityEngine::Vector3 CJPLNHNIHFD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CJPLNHNIHFD_OFFSET))(this);
		}

		::EnviromentSystem::EnviroParticleProperty* DMACADKNLAA()
		{
			return ((::EnviromentSystem::EnviroParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_DMACADKNLAA_OFFSET))(this);
		}

		::EnviromentSystem::EnviroEffectLightProperty* PGGCHPHENLI()
		{
			return ((::EnviromentSystem::EnviroEffectLightProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PGGCHPHENLI_OFFSET))(this);
		}

		::UnityEngine::Vector3 GDGEKGGJCBJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GDGEKGGJCBJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 EOPDCMGLONM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EOPDCMGLONM_OFFSET))(this);
		}

		::System::Void JAECGCDKGAH(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JAECGCDKGAH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::VolumeProfile* FNNIMKNFGOM()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_FNNIMKNFGOM_OFFSET))(this);
		}

		::EnviromentSystem::EnviroProperty* ADIGGANAMPH(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ADIGGANAMPH_OFFSET))(this, a1);
		}

		::System::Void BNBAJJPAFBM(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BNBAJJPAFBM_OFFSET))(this, a1);
		}

		::System::Void MINDLBJNIOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_MINDLBJNIOO_OFFSET))(this);
		}

		::System::Void BNILHCDGHJB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_BNILHCDGHJB_OFFSET))(this, a1, a2);
		}

		::System::Void EPNFLFKBJDM(::UnityEngine::Rendering::AmbientVolumneData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_EPNFLFKBJDM_OFFSET))(this, a1);
		}

		::System::Void AAFFDLBLNJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_AAFFDLBLNJG_OFFSET))(this);
		}

		::System::Void NDMOKDMDFOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_NDMOKDMDFOJ_OFFSET))(this);
		}

		::System::Void CDJLIEFHELP(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_CDJLIEFHELP_OFFSET))(this, a1, a2);
		}

		::System::Int32 JJFPKNJMOLO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_JJFPKNJMOLO_OFFSET))(this, a1);
		}

		::System::Void PLOPPLMOJHH(::COGBNIGPJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COGBNIGPJPO*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_PLOPPLMOJHH_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* HFKCFGKAGHG()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_HFKCFGKAGHG_OFFSET))();
		}

	};
}
