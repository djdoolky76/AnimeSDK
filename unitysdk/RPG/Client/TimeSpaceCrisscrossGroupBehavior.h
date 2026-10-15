#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class IDEFMHBFDKL;
class IFELGKPONAK;
class JMEAKCMLLJE;
class NNDAJDLAHNC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupMonoPlugin; }
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AIFCIBKIGBB_OFFSET UNITYSDK_OFFSET(0xE28D080)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AIJOPEFFMLO_OFFSET UNITYSDK_OFFSET(0xE28A620)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AJIHGLFALCB_OFFSET UNITYSDK_OFFSET(0xE28BE80)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_ALJKNMOOMFF_OFFSET UNITYSDK_OFFSET(0xE28A7D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xE28BC30)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_BOADDHIOAIO_OFFSET UNITYSDK_OFFSET(0xE28C990)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_BPGEGLHECBJ_OFFSET UNITYSDK_OFFSET(0xE28B720)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE28D570)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE28BEE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CJGALMBOBAI_OFFSET UNITYSDK_OFFSET(0xE28ADC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CNMJODEOMBG_OFFSET UNITYSDK_OFFSET(0xE288590)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CODEMHHMKLP_OFFSET UNITYSDK_OFFSET(0xE286CD0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE28D460)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DFKBDKIMGFI_OFFSET UNITYSDK_OFFSET(0xE2843F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DLPEHPJCKLE_OFFSET UNITYSDK_OFFSET(0xE2844A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DMLDEJDELFN_OFFSET UNITYSDK_OFFSET(0xE284D10)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FEDIAIOKNPC_OFFSET UNITYSDK_OFFSET(0xE286590)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FGEADGGJFOH_OFFSET UNITYSDK_OFFSET(0xE28B050)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FKANFFGBMMI_OFFSET UNITYSDK_OFFSET(0xE286790)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FMIJOAJAOMA_OFFSET UNITYSDK_OFFSET(0xE28C670)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GBCPFFBBIOP_OFFSET UNITYSDK_OFFSET(0xE28D030)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GCBKENOMFMI_OFFSET UNITYSDK_OFFSET(0xE287490)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GET_ISINASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE28D440)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE284C90)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GOLBCJHMOOG_OFFSET UNITYSDK_OFFSET(0xE289EB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HCFALMIOKDI_OFFSET UNITYSDK_OFFSET(0xE289010)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HGOJNFKDIMA_OFFSET UNITYSDK_OFFSET(0xE28C450)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HGOMHPKOCBG_OFFSET UNITYSDK_OFFSET(0xE284580)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HLOFLONHFBG_OFFSET UNITYSDK_OFFSET(0xE28D3E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HMGFOPOBEGB_OFFSET UNITYSDK_OFFSET(0xE284010)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HOCEKNCJPGN_OFFSET UNITYSDK_OFFSET(0xE28ACE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_ICCDMHGCIOL_OFFSET UNITYSDK_OFFSET(0xE28A410)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IKEADNEBLLO_OFFSET UNITYSDK_OFFSET(0xE289CA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IMDMBNMKFFI_OFFSET UNITYSDK_OFFSET(0xE28C5E0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IMKJEGPFDPF_OFFSET UNITYSDK_OFFSET(0xE286A30)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JCIONHHNLPD_OFFSET UNITYSDK_OFFSET(0xE28BE20)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPFHCALGBHD_OFFSET UNITYSDK_OFFSET(0xE284640)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPJKEDNPPPM_OFFSET UNITYSDK_OFFSET(0xE28CE20)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE28C100)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_KGCCDJLAFNP_OFFSET UNITYSDK_OFFSET(0xE28A6F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE28B780)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xE28C520)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_LNNPHMPCABP_OFFSET UNITYSDK_OFFSET(0xE28C830)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MCMJDIJAPGA_OFFSET UNITYSDK_OFFSET(0xE28ABB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE28BC80)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MFMGONDHFID_OFFSET UNITYSDK_OFFSET(0xE284360)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MPDAEPNMABP_OFFSET UNITYSDK_OFFSET(0xE28B0A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE28C0A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_NLMCDFIALLL_OFFSET UNITYSDK_OFFSET(0xE28AC60)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OCMCDLAODKE_OFFSET UNITYSDK_OFFSET(0xE289380)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE28C160)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OLGIGCMBPLL_OFFSET UNITYSDK_OFFSET(0xE28C720)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OMGNJOFHKIP_OFFSET UNITYSDK_OFFSET(0xE287D90)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PBFPFFBFJEF_OFFSET UNITYSDK_OFFSET(0xE28A8F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE28BB40)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PELICLCOHDJ_OFFSET UNITYSDK_OFFSET(0xE28D380)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PJCPODPJBIP_OFFSET UNITYSDK_OFFSET(0xE28AF90)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PJLBPAIKOEK_OFFSET UNITYSDK_OFFSET(0xE289AC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE28C060)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PPKNKHBHFCG_OFFSET UNITYSDK_OFFSET(0xE28BDD0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_SET_ISINASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xE28D450)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE28C1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior_TypeDefinitionIndex = 70201;

	class TimeSpaceCrisscrossGroupBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MeshRenderer* _Eff_Fill_Renderer; // 0x38
		::RPG::Client::TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag _LazyLoadUnloadTag; // 0x40
		::System::Boolean _HasAppliedLoadUnload; // 0x41
		::System::Boolean _IsRegisteredToTSCManager; // 0x42
		::System::Byte _padding0[0x5];
		::IFELGKPONAK* _TSCInstanceItemRenderer; // 0x48
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* _TSCRendererA; // 0x50
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* _TSCRendererB; // 0x58
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersA; // 0x60
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::UnityEngine::Renderer*>*>* _CollectorAllRenderersB; // 0x68
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::PoolList_1<::UnityEngine::Collider*>*, ::JMEAKCMLLJE*>>* _CollectorAllColliders; // 0x70
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin*>*>* _CollectorAllIRIs; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::GameObjectAudio*>* _AudioSourcesTSA; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::GameObjectAudio*>* _AudioSourcesTSB; // 0x88
		::System::Nullable_1<::System::Object*> _FrozenState; // 0x90
		::System::Boolean _IsInAsyncInitialize_k__BackingField; // 0x98
		::System::Byte _padding1[0x3];
		::System::Int32 AsyncWorkID; // 0x9C
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>** StaticGet_s_AllInstances()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>**)UnitySDK::FromName("RPG.Client", "TimeSpaceCrisscrossGroupBehavior")->GetStaticField(0x19D40);
		}

		static ::System::Boolean* StaticGet_s_EnableLoadUnloadBehavior()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TimeSpaceCrisscrossGroupBehavior")->GetStaticField(0x5A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void HMGFOPOBEGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HMGFOPOBEGB_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* DFKBDKIMGFI(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DFKBDKIMGFI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* MFMGONDHFID(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MFMGONDHFID_OFFSET))(this, a1);
		}

		::System::Boolean DLPEHPJCKLE(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DLPEHPJCKLE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds HGOMHPKOCBG(::UnityEngine::Bounds a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HGOMHPKOCBG_OFFSET))(this, a1);
		}

		::System::Void JPFHCALGBHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPFHCALGBHD_OFFSET))(this);
		}

		::System::Void DMLDEJDELFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_DMLDEJDELFN_OFFSET))(this);
		}

		::System::Void FEDIAIOKNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FEDIAIOKNPC_OFFSET))(this);
		}

		::System::Boolean FKANFFGBMMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FKANFFGBMMI_OFFSET))(this);
		}

		::System::Void IMKJEGPFDPF(::UnityEngine::Transform* a1, ::RPG::Client::TSCRendererType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IMKJEGPFDPF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CODEMHHMKLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CODEMHHMKLP_OFFSET))(this);
		}

		::System::Void GCBKENOMFMI(::UnityEngine::Transform* a1, ::RPG::Client::TSCRendererType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GCBKENOMFMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OMGNJOFHKIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OMGNJOFHKIP_OFFSET))(this);
		}

		::System::Void CNMJODEOMBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CNMJODEOMBG_OFFSET))(this);
		}

		::System::Void HCFALMIOKDI(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HCFALMIOKDI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCMCDLAODKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OCMCDLAODKE_OFFSET))(this);
		}

		::System::Void PJLBPAIKOEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PJLBPAIKOEK_OFFSET))(this);
		}

		::System::Void IKEADNEBLLO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IKEADNEBLLO_OFFSET))(this, a1);
		}

		::System::Void ICCDMHGCIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_ICCDMHGCIOL_OFFSET))(this);
		}

		::System::Void GOLBCJHMOOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GOLBCJHMOOG_OFFSET))(this);
		}

		::System::Void AIJOPEFFMLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AIJOPEFFMLO_OFFSET))(this);
		}

		::System::Void KGCCDJLAFNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_KGCCDJLAFNP_OFFSET))(this);
		}

		::System::Void ALJKNMOOMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_ALJKNMOOMFF_OFFSET))(this);
		}

		::System::Void PBFPFFBFJEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PBFPFFBFJEF_OFFSET))(this);
		}

		::System::Void MCMJDIJAPGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MCMJDIJAPGA_OFFSET))(this);
		}

		::System::Void NLMCDFIALLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_NLMCDFIALLL_OFFSET))(this);
		}

		::System::Void HOCEKNCJPGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HOCEKNCJPGN_OFFSET))(this);
		}

		static ::System::Void CJGALMBOBAI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CJGALMBOBAI_OFFSET))(a1);
		}

		::System::Void FGEADGGJFOH(::RPG::Client::TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FGEADGGJFOH_OFFSET))(this, a1);
		}

		::System::Void PJCPODPJBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PJCPODPJBIP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void AODAHAFDMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AODAHAFDMKM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void PPKNKHBHFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PPKNKHBHFCG_OFFSET))(this);
		}

		::System::Void MPDAEPNMABP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_MPDAEPNMABP_OFFSET))(this);
		}

		::System::Void BPGEGLHECBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_BPGEGLHECBJ_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void JCIONHHNLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JCIONHHNLPD_OFFSET))(this);
		}

		::System::Void AJIHGLFALCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AJIHGLFALCB_OFFSET))(this);
		}

		::System::Single IMDMBNMKFFI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_IMDMBNMKFFI_OFFSET))(this);
		}

		::System::Void FMIJOAJAOMA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_FMIJOAJAOMA_OFFSET))(this, a1);
		}

		::System::Void OLGIGCMBPLL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_OLGIGCMBPLL_OFFSET))(this, a1, a2);
		}

		::System::Void LNNPHMPCABP(::System::Boolean a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_LNNPHMPCABP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOADDHIOAIO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_BOADDHIOAIO_OFFSET))(this, a1, a2);
		}

		::System::Void JPJKEDNPPPM(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_JPJKEDNPPPM_OFFSET))(this, a1);
		}

		::System::Void HGOJNFKDIMA(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HGOJNFKDIMA_OFFSET))(this, a1);
		}

		::System::Void GBCPFFBBIOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GBCPFFBBIOP_OFFSET))(this);
		}

		::System::Void AIFCIBKIGBB(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1, ::System::Boolean a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::System::Boolean, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_AIFCIBKIGBB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PELICLCOHDJ(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_PELICLCOHDJ_OFFSET))(this, a1, a2);
		}

		::System::Void HLOFLONHFBG(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_HLOFLONHFBG_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsInAsyncInitialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GET_ISINASYNCINITIALIZE_OFFSET))(this);
		}

		::System::Void set_IsInAsyncInitialize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_SET_ISINASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
