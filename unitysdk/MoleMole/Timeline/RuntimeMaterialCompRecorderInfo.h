#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace MoleMole::Timeline { class AttrKeyFrames; }
namespace MoleMole::Timeline { class FrameRecorder; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_BCDIPPNMNOP_OFFSET UNITYSDK_OFFSET(0x19B713C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_BGBKMFLNIMM_OFFSET UNITYSDK_OFFSET(0x19B6BE50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DCFFLIBIKAG_OFFSET UNITYSDK_OFFSET(0x19B6E7A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DGMNHOHJHKP_OFFSET UNITYSDK_OFFSET(0x19B6CC90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DJACNKCOGOE_OFFSET UNITYSDK_OFFSET(0x19B6E920)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DLJLBMPPGHJ_OFFSET UNITYSDK_OFFSET(0x19B6C2E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_EBFPMIEECPO_OFFSET UNITYSDK_OFFSET(0x19B70550)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_FICPEPJLJDJ_OFFSET UNITYSDK_OFFSET(0x19B6F510)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_FKJHIPJDFEC_OFFSET UNITYSDK_OFFSET(0x19B6DD90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x19B6BE20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET UNITYSDK_OFFSET(0x19B6AF10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x19B6ACA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x19B6BE00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GGBMAIOPNBI_OFFSET UNITYSDK_OFFSET(0x19B703E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HDOLDEOIMKI_OFFSET UNITYSDK_OFFSET(0x19B6DF90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGMMODLNOMH_OFFSET UNITYSDK_OFFSET(0x19B6CF40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGMNJNGCEMA_OFFSET UNITYSDK_OFFSET(0x19B6C6F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGPJCHPNMKN_OFFSET UNITYSDK_OFFSET(0x19B6DB10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HMGHLMMLMBP_OFFSET UNITYSDK_OFFSET(0x19B6C7D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_JBOODJHJPEN_OFFSET UNITYSDK_OFFSET(0x19B6BE90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_JKEIEDKBALE_OFFSET UNITYSDK_OFFSET(0x19B70970)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KBJNGEIGEHI_OFFSET UNITYSDK_OFFSET(0x19B6DBA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KEANNAFJEAA_OFFSET UNITYSDK_OFFSET(0x19B70D80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KGDPLBLHHFJ_OFFSET UNITYSDK_OFFSET(0x19B6BB10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KOEPDGCGLDD_OFFSET UNITYSDK_OFFSET(0x19B6F270)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KPDCLFFLADJ_OFFSET UNITYSDK_OFFSET(0x19B70450)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LFFDMDPFGBM_OFFSET UNITYSDK_OFFSET(0x19B70BD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LGCAHBKLLFA_OFFSET UNITYSDK_OFFSET(0x19B6EEA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LIGEMCLPAEI_OFFSET UNITYSDK_OFFSET(0x19B71090)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MNGLAFENNOF_OFFSET UNITYSDK_OFFSET(0x19B6F930)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MPECHGFLKCO_OFFSET UNITYSDK_OFFSET(0x19B6D120)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_NEOBFGAPNDA_OFFSET UNITYSDK_OFFSET(0x19B6EAA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_NNHFHNCJFME_OFFSET UNITYSDK_OFFSET(0x19B6F210)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OCFEHKGLNMP_OFFSET UNITYSDK_OFFSET(0x19B71690)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OJOAKOEMAJD_OFFSET UNITYSDK_OFFSET(0x19B6F070)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OKMLFFLGAIP_OFFSET UNITYSDK_OFFSET(0x19B6D910)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_PLHMDFKPEMI_OFFSET UNITYSDK_OFFSET(0x19B6DA50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_PMCMKKEJCNP_OFFSET UNITYSDK_OFFSET(0x19B6F6A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6B690)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_TypeDefinitionIndex = 45103;

	class RuntimeMaterialCompRecorderInfo : public ::System::Object
	{
	public:
		// static const ::System::Single mixDeltaFloat; // 0x0
		// static const ::System::String* MultiMaterialKey; // 0x0
		// static const ::System::String* MultiMaterialPattern; // 0x0
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x10
		::UnityEngine::Renderer* MeshRenderer; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* sourceMaterials; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::RuntimeMaterialInfo*>* UpdateMeshRenderers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* _frameAttrs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::AttrKeyFrames*>* frameAttrsList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _lastFrameSignatureByMaterialIndex; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*>* _runtimeKeyframeCacheByMaterialIndex; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*>* _runtimeKeyframeEntryPoolByMaterialIndex; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* _resolvedFrameKeyCacheByMaterialIndex; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::RecorderUnitType>* _frameRecorderTypeCache; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::KFrameFieldType>* _frameFieldTypeCache; // 0x68
		::MoleMole::Timeline::FrameRecorder* _runtimeFrameRecorder; // 0x70
		::MoleMole::Timeline::FrameRecorder* _inspectorFrameRecorder; // 0x78

		::System::Void _ctor(::UnityEngine::Renderer* PBFBIGIIIGG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET))(this, PBFBIGIIIGG);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_instanceMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* get_FrameAttrs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET))(this);
		}

		static ::System::Boolean BGBKMFLNIMM(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_BGBKMFLNIMM_OFFSET))(AEIHFBNNLBP);
		}

		::System::Void KGDPLBLHHFJ(::System::Boolean IAOJECCOMPN, ::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KGDPLBLHHFJ_OFFSET))(this, IAOJECCOMPN, AEIHFBNNLBP);
		}

		::MoleMole::Timeline::KeyframeMBP* JBOODJHJPEN(::System::Int32 HKBBMLEAOIK, ::System::String* OCDIGJNADCB, ::UnityEngine::Keyframe GBGCFJMGALM, ::MoleMole::Timeline::RecorderUnitType IGKFJEFDOJJ, ::UnityEngine::Timeline::KFrameFieldType PGBEMEPAPLD)
		{
			return ((::MoleMole::Timeline::KeyframeMBP*(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Keyframe, ::MoleMole::Timeline::RecorderUnitType, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_JBOODJHJPEN_OFFSET))(this, HKBBMLEAOIK, OCDIGJNADCB, GBGCFJMGALM, IGKFJEFDOJJ, PGBEMEPAPLD);
		}

		::System::Void HMGHLMMLMBP(::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HMGHLMMLMBP_OFFSET))(this, IAOJECCOMPN);
		}

		::System::Void HGMMODLNOMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGMMODLNOMH_OFFSET))(this);
		}

		::System::Void DGMNHOHJHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DGMNHOHJHKP_OFFSET))(this);
		}

		::System::Void MPECHGFLKCO(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* COLKGFFNBCI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MPECHGFLKCO_OFFSET))(this, COLKGFFNBCI);
		}

		::System::Void DLJLBMPPGHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DLJLBMPPGHJ_OFFSET))(this);
		}

		static ::System::Boolean HGMNJNGCEMA(::MoleMole::Timeline::KeyframeMBP* ODMDNBPAKPB, ::UnityEngine::Keyframe GBGCFJMGALM)
		{
			return ((::System::Boolean(*)(::MoleMole::Timeline::KeyframeMBP*, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGMNJNGCEMA_OFFSET))(ODMDNBPAKPB, GBGCFJMGALM);
		}

		static ::System::Boolean PLHMDFKPEMI(::System::String* IMLEJDEMNMC, ::System::Int32 HKBBMLEAOIK)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_PLHMDFKPEMI_OFFSET))(IMLEJDEMNMC, HKBBMLEAOIK);
		}

		::System::Void KBJNGEIGEHI(::System::Int32 HKBBMLEAOIK, ::System::String* DGDGBJAHDJP, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KBJNGEIGEHI_OFFSET))(this, HKBBMLEAOIK, DGDGBJAHDJP, GLPLOOEONEA);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* FKJHIPJDFEC(::System::Int32 HKBBMLEAOIK, ::System::Double EPPCCEEAHLN)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_FKJHIPJDFEC_OFFSET))(this, HKBBMLEAOIK, EPPCCEEAHLN);
		}

		::System::Int32 DCFFLIBIKAG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DCFFLIBIKAG_OFFSET))(this);
		}

		::System::Void DJACNKCOGOE(::UnityEngine::Renderer* PBFBIGIIIGG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_DJACNKCOGOE_OFFSET))(this, PBFBIGIIIGG);
		}

		::System::Void NEOBFGAPNDA(::System::Boolean MLLBKHOAAGG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_NEOBFGAPNDA_OFFSET))(this, MLLBKHOAAGG);
		}

		::System::Void LGCAHBKLLFA(::UnityEngine::Renderer* PBFBIGIIIGG, ::UnityEngine::Timeline::TimelineClip* DBAEGNNLACK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LGCAHBKLLFA_OFFSET))(this, PBFBIGIIIGG, DBAEGNNLACK);
		}

		::UnityEngine::Timeline::KFrameFieldType OJOAKOEMAJD(::MoleMole::Timeline::RecorderUnitType IGKFJEFDOJJ, ::System::String* IMLEJDEMNMC)
		{
			return ((::UnityEngine::Timeline::KFrameFieldType(*)(::PVOID, ::MoleMole::Timeline::RecorderUnitType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OJOAKOEMAJD_OFFSET))(this, IGKFJEFDOJJ, IMLEJDEMNMC);
		}

		::System::Void NNHFHNCJFME(::System::Collections::Generic::List_1<::System::String*>* LDHAIIPOBBG, ::System::Double EPPCCEEAHLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_NNHFHNCJFME_OFFSET))(this, LDHAIIPOBBG, EPPCCEEAHLN);
		}

		::System::Void KOEPDGCGLDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KOEPDGCGLDD_OFFSET))(this);
		}

		::MoleMole::Timeline::RecorderUnitType FICPEPJLJDJ(::MoleMole::Timeline::RuntimeMaterialInfo* JNEPILOGAAD, ::System::String* OCDIGJNADCB)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialInfo*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_FICPEPJLJDJ_OFFSET))(this, JNEPILOGAAD, OCDIGJNADCB);
		}

		static ::System::Int32 PMCMKKEJCNP(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* FPBMFGBKHNA)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_PMCMKKEJCNP_OFFSET))(FPBMFGBKHNA);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* MNGLAFENNOF(::System::Double EPPCCEEAHLN, ::System::Int32 HKBBMLEAOIK)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MNGLAFENNOF_OFFSET))(this, EPPCCEEAHLN, HKBBMLEAOIK);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* GGBMAIOPNBI(::System::Int32 HKBBMLEAOIK, ::System::Double EPPCCEEAHLN, ::System::Boolean JEHCBLBLEAO)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GGBMAIOPNBI_OFFSET))(this, HKBBMLEAOIK, EPPCCEEAHLN, JEHCBLBLEAO);
		}

		::System::Void EBFPMIEECPO(::System::Double EPPCCEEAHLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_EBFPMIEECPO_OFFSET))(this, EPPCCEEAHLN);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* KPDCLFFLADJ(::System::Int32 HKBBMLEAOIK, ::System::Double EPPCCEEAHLN)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KPDCLFFLADJ_OFFSET))(this, HKBBMLEAOIK, EPPCCEEAHLN);
		}

		static ::System::String* HGPJCHPNMKN(::System::Int32 HKBBMLEAOIK)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HGPJCHPNMKN_OFFSET))(HKBBMLEAOIK);
		}

		::System::Void OKMLFFLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OKMLFFLGAIP_OFFSET))(this);
		}

		::System::Void JKEIEDKBALE(::UnityEngine::Renderer* PBFBIGIIIGG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_JKEIEDKBALE_OFFSET))(this, PBFBIGIIIGG);
		}

		::System::Boolean LFFDMDPFGBM(::System::Int32 HKBBMLEAOIK, ::System::Int32 NICMIODCOAL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LFFDMDPFGBM_OFFSET))(this, HKBBMLEAOIK, NICMIODCOAL);
		}

		::System::Void HDOLDEOIMKI(::System::Int32 HKBBMLEAOIK, ::System::Double EPPCCEEAHLN, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* FPBMFGBKHNA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_HDOLDEOIMKI_OFFSET))(this, HKBBMLEAOIK, EPPCCEEAHLN, FPBMFGBKHNA);
		}

		::System::Void LIGEMCLPAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_LIGEMCLPAEI_OFFSET))(this);
		}

		::System::Void BCDIPPNMNOP(::System::Double EPPCCEEAHLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_BCDIPPNMNOP_OFFSET))(this, EPPCCEEAHLN);
		}

		::System::Void OCFEHKGLNMP(::UnityEngine::Renderer* PBFBIGIIIGG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_OCFEHKGLNMP_OFFSET))(this, PBFBIGIIIGG);
		}

		::System::String* KEANNAFJEAA(::System::Int32 HKBBMLEAOIK, ::System::String* IMLEJDEMNMC)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_KEANNAFJEAA_OFFSET))(this, HKBBMLEAOIK, IMLEJDEMNMC);
		}
	};
}
