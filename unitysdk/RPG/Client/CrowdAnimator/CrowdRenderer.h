#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFMMKIMHFPA.h"
#include "unitysdk/MAIGDLAGBLF.h"
#include "unitysdk/OIDGABHGFKB.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
class GCFPDEHADKC;
class OEIPELDMAAE;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdRenderer; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ACEDJELALGN_OFFSET UNITYSDK_OFFSET(0xCBCC7A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AHPIPINFEBC_OFFSET UNITYSDK_OFFSET(0xCBCB410)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AMJAKIGCCOL_OFFSET UNITYSDK_OFFSET(0xCBD37D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AOKFDCIEMKF_OFFSET UNITYSDK_OFFSET(0xCBCC450)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBCBC70)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBD4710)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CEPGEJIPJPL_OFFSET UNITYSDK_OFFSET(0xCBCA010)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CLDGJLDGFOE_OFFSET UNITYSDK_OFFSET(0xCBCF9B0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xCBD4700)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCBCF890)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0xCBCDC80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EILPKODAIEI_OFFSET UNITYSDK_OFFSET(0xCBD3550)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EMEEMGANDGP_OFFSET UNITYSDK_OFFSET(0xCBCCC90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCBD4430)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FBNGAFAAOJK_OFFSET UNITYSDK_OFFSET(0xCBD3B40)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FCKDIKELDFN_OFFSET UNITYSDK_OFFSET(0xCBD1B60)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FOJJIIFABAD_OFFSET UNITYSDK_OFFSET(0xCBD23F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FPOOLEHGLHG_OFFSET UNITYSDK_OFFSET(0xCBC9D30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCBC9AB0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET UNITYSDK_OFFSET(0xCBD4420)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_HBPPOOHCKHG_OFFSET UNITYSDK_OFFSET(0xCBCFA30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_HNEICMGIGFC_OFFSET UNITYSDK_OFFSET(0xCBD2630)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_IAEBAPMFBNC_OFFSET UNITYSDK_OFFSET(0xCBD1B00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_INIT_OFFSET UNITYSDK_OFFSET(0xCBCBF80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_JAHLEMHFFOF_OFFSET UNITYSDK_OFFSET(0xCBCCA00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_JJMEDOHDKBM_OFFSET UNITYSDK_OFFSET(0xCBD1950)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_KCDFCFIJGFE_OFFSET UNITYSDK_OFFSET(0xCBD1980)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCBCC0A0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LDPFAPEFNBA_OFFSET UNITYSDK_OFFSET(0xCBD2C20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LEKBGPHFICC_OFFSET UNITYSDK_OFFSET(0xCBD13C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LMCMAFOOAAA_OFFSET UNITYSDK_OFFSET(0xCBCB390)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LOLJDLFOBHO_OFFSET UNITYSDK_OFFSET(0xCBCDF80)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_MGCFALHICEM_OFFSET UNITYSDK_OFFSET(0xCBCB2F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_MNHJMFIFLOJ_OFFSET UNITYSDK_OFFSET(0xCBCB270)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_NEJNJOFHOHK_OFFSET UNITYSDK_OFFSET(0xCBD21E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OFDGDJBOJCF_OFFSET UNITYSDK_OFFSET(0xCBD1E00)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OHKHOLCFAKO_OFFSET UNITYSDK_OFFSET(0xCBD1A40)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OIKKKPGAPJD_OFFSET UNITYSDK_OFFSET(0xCBCFC90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCBCE4C0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCBCE3D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCBCBF30)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONLLNGBKKDA_OFFSET UNITYSDK_OFFSET(0xCBD3050)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_PLHNKHICLEF_OFFSET UNITYSDK_OFFSET(0xCBCA640)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_PPMOIFEIFMK_OFFSET UNITYSDK_OFFSET(0xCBCA240)
#define RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0xCBCE590)

namespace RPG::Client::CrowdAnimator
{
	class CrowdRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::ComputeShader** StaticGet_HBCIMMEMAAH()
		{
			return (::UnityEngine::ComputeShader**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC70);
		}

		static ::Il2CppArray<::LFMMKIMHFPA>** StaticGet_KALCHLIGCKJ()
		{
			return (::Il2CppArray<::LFMMKIMHFPA>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC78);
		}

		static ::Il2CppArray<::UnityEngine::Vector4>** StaticGet_BGGMKGMCHDA()
		{
			return (::Il2CppArray<::UnityEngine::Vector4>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC80);
		}

		static ::UnityEngine::ComputeShader** StaticGet_JDLHPFAKHMD()
		{
			return (::UnityEngine::ComputeShader**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC88);
		}

		static ::UnityEngine::RenderTexture** StaticGet_KCDEFIDFNMB()
		{
			return (::UnityEngine::RenderTexture**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC90);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_MNCAPILLHKN()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CC98);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_JMAFHECEMLM()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCA0);
		}

		static ::Il2CppArray<::GCFPDEHADKC*>** StaticGet_HGLAMDDFDHD()
		{
			return (::Il2CppArray<::GCFPDEHADKC*>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCA8);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_BFNGNFMEPJO()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCB0);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_ABGAGOMFNAP()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCB8);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_JNGOJOFAANB()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCC0);
		}

		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_FIFAJNAGPGI()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCC8);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_CANLEJJHFLB()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>** StaticGet_JAEEIJEDBPO()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCD8);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_GODCEIKHPLF()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCE0);
		}

		static ::Il2CppArray<::System::UInt32>** StaticGet_BMNACADOALP()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCE8);
		}

		static ::Il2CppArray<::OEIPELDMAAE*>** StaticGet_MECAEHPHNIE()
		{
			return (::Il2CppArray<::OEIPELDMAAE*>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCF0);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_JJMEOKDJOGM()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CCF8);
		}

		static ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>** StaticGet_KDBMGJFCDDM()
		{
			return (::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdInstance*>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD00);
		}

		static ::UnityEngine::RenderTexture** StaticGet_OLEHMEJMPPI()
		{
			return (::UnityEngine::RenderTexture**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD08);
		}

		static ::RPG::Client::CrowdAnimator::CrowdRenderer** StaticGet_FLMODBLFAGD()
		{
			return (::RPG::Client::CrowdAnimator::CrowdRenderer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD10);
		}

		static ::UnityEngine::RenderTexture** StaticGet_KOHFOKGFDGC()
		{
			return (::UnityEngine::RenderTexture**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD18);
		}

		static ::UnityEngine::ComputeBuffer** StaticGet_EJKNMFNHGNM()
		{
			return (::UnityEngine::ComputeBuffer**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD20);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>** StaticGet_AKBJJNGNNEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::UnityEngine::Texture2D*>**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x1CD28);
		}

		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_NHPMMHIJKHK()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6800);
		}

		static ::System::Int32* StaticGet_OMBHBCJGGNH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6808);
		}

		static ::System::Int32* StaticGet_EEHLPNGHDHJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x680C);
		}

		static ::RPG::CustomRP::Quality* StaticGet_RenderQuality()
		{
			return (::RPG::CustomRP::Quality*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6810);
		}

		static ::System::Int32* StaticGet_ADAMEECBBHK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6814);
		}

		static ::Unity::Collections::NativeArray_1<::System::UInt32>* StaticGet_PLFBPIOBOGI()
		{
			return (::Unity::Collections::NativeArray_1<::System::UInt32>*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6818);
		}

		static ::System::Int32* StaticGet_AGKGFLBMJOJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6828);
		}

		static ::System::Boolean* StaticGet_CKHLLBPFKPJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x682C);
		}

		static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>* StaticGet_BGOPFBBGCND()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6830);
		}

		static ::System::Int32* StaticGet_JNIBINIBHAO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6840);
		}

		static ::System::Boolean* StaticGet_CAKGIPPNJBC()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6844);
		}

		static ::System::Boolean* StaticGet_DebugForceDisable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6845);
		}

		static ::System::Boolean* StaticGet_JCHNGPHKGAG()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6846);
		}

		static ::System::Boolean* StaticGet_FLHJPMGBEGF()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6847);
		}

		static ::System::Int32* StaticGet_AHBFOCILMFI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6848);
		}

		static ::System::Int32* StaticGet_OKPGILGHOIJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x684C);
		}

		static ::System::Int32* StaticGet_OMHOCLGPCDA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6850);
		}

		static ::System::Int32* StaticGet_GENIJLNADBF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6854);
		}

		static ::Unity::Collections::NativeArray_1<::MAIGDLAGBLF>* StaticGet_NCAHKPOJFEP()
		{
			return (::Unity::Collections::NativeArray_1<::MAIGDLAGBLF>*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6858);
		}

		static ::System::Int32* StaticGet_EBJKGILBDML()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6868);
		}

		static ::System::Int32* StaticGet_IIGCPIDDPOC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x686C);
		}

		static ::Unity::Collections::NativeArray_1<::OIDGABHGFKB>* StaticGet_FAECNGCPLKF()
		{
			return (::Unity::Collections::NativeArray_1<::OIDGABHGFKB>*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6870);
		}

		static ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>* StaticGet_FHDNCDMGIHA()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>*)UnitySDK::FromName("RPG.Client.CrowdAnimator", "CrowdRenderer")->GetStaticField(0x6880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONDESTROY_OFFSET))(this);
		}

		static ::RPG::Client::CrowdAnimator::CrowdRenderer* get_Instance()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdRenderer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_INIT_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_RELEASE_OFFSET))(this);
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DESTROYINSTANCE_OFFSET))();
		}

		::MAIGDLAGBLF MNHJMFIFLOJ(::System::Int32 a1)
		{
			return ((::MAIGDLAGBLF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_MNHJMFIFLOJ_OFFSET))(this, a1);
		}

		::OIDGABHGFKB MGCFALHICEM(::System::Int32 a1)
		{
			return ((::OIDGABHGFKB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_MGCFALHICEM_OFFSET))(this, a1);
		}

		::System::Void LMCMAFOOAAA(::System::Int32 a1, ::MAIGDLAGBLF a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MAIGDLAGBLF))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LMCMAFOOAAA_OFFSET))(this, a1, a2);
		}

		::System::Void AHPIPINFEBC(::System::Int32 a1, ::OIDGABHGFKB a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::OIDGABHGFKB))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AHPIPINFEBC_OFFSET))(this, a1, a2);
		}

		::System::Void CLDGJLDGFOE(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CLDGJLDGFOE_OFFSET))(this, a1, a2);
		}

		::System::Void CEPGEJIPJPL(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_CEPGEJIPJPL_OFFSET))(this, a1, a2);
		}

		::System::Void FPOOLEHGLHG(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FPOOLEHGLHG_OFFSET))(this, a1);
		}

		::System::Void PPMOIFEIFMK(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_PPMOIFEIFMK_OFFSET))(this, a1);
		}

		::System::Void PLHNKHICLEF(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_PLHNKHICLEF_OFFSET))(this, a1);
		}

		static ::UnityEngine::Camera* JJMEDOHDKBM()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_JJMEDOHDKBM_OFFSET))();
		}

		static ::System::Single KCDFCFIJGFE()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_KCDFCFIJGFE_OFFSET))();
		}

		static ::System::Int32 OHKHOLCFAKO()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OHKHOLCFAKO_OFFSET))();
		}

		static ::System::Void IAEBAPMFBNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_IAEBAPMFBNC_OFFSET))(a1);
		}

		static ::System::Void AOKFDCIEMKF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AOKFDCIEMKF_OFFSET))();
		}

		static ::System::Void DGHLCFLEJFC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_DGHLCFLEJFC_OFFSET))();
		}

		static ::System::Void ACEDJELALGN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ACEDJELALGN_OFFSET))();
		}

		static ::System::Void JAHLEMHFFOF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_JAHLEMHFFOF_OFFSET))();
		}

		static ::System::Void EMEEMGANDGP(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EMEEMGANDGP_OFFSET))(a1);
		}

		::OEIPELDMAAE* HBPPOOHCKHG(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
		{
			return ((::OEIPELDMAAE*(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_HBPPOOHCKHG_OFFSET))(this, a1, a2);
		}

		static ::System::Void FCKDIKELDFN(::OEIPELDMAAE* a1)
		{
			return ((::System::Void(*)(::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FCKDIKELDFN_OFFSET))(a1);
		}

		::System::Void LEKBGPHFICC(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LEKBGPHFICC_OFFSET))(this, a1);
		}

		static ::System::Void OFDGDJBOJCF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OFDGDJBOJCF_OFFSET))(a1);
		}

		static ::System::Void OIKKKPGAPJD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_OIKKKPGAPJD_OFFSET))(a1);
		}

		::GCFPDEHADKC* FOJJIIFABAD(::System::String* a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::UnityEngine::Material* a4, ::RPG::Client::CrowdAnimator::CrowdPrototype* a5, ::OEIPELDMAAE* a6)
		{
			return ((::GCFPDEHADKC*(*)(::PVOID, ::System::String*, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FOJJIIFABAD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ONLLNGBKKDA(::GCFPDEHADKC* a1, ::OEIPELDMAAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GCFPDEHADKC*, ::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_ONLLNGBKKDA_OFFSET))(this, a1, a2);
		}

		static ::System::Void LDPFAPEFNBA(::GCFPDEHADKC* a1)
		{
			return ((::System::Void(*)(::GCFPDEHADKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LDPFAPEFNBA_OFFSET))(a1);
		}

		static ::System::Void FBNGAFAAOJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_FBNGAFAAOJK_OFFSET))(a1);
		}

		static ::System::Void AMJAKIGCCOL(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_AMJAKIGCCOL_OFFSET))(a1);
		}

		static ::UnityEngine::Texture2D* HNEICMGIGFC(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::UnityEngine::Mesh* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Texture2D*(*)(::RPG::Client::CrowdAnimator::CrowdPrototype*, ::UnityEngine::Mesh*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_HNEICMGIGFC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NEJNJOFHOHK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_NEJNJOFHOHK_OFFSET))();
		}

		static ::System::Void EILPKODAIEI(::GCFPDEHADKC* a1)
		{
			return ((::System::Void(*)(::GCFPDEHADKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EILPKODAIEI_OFFSET))(a1);
		}

		static ::System::Void LOLJDLFOBHO(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_LOLJDLFOBHO_OFFSET))(a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDRENDERER_EXECUTE_OFFSET))(this, a1, a2);
		}

	};
}
