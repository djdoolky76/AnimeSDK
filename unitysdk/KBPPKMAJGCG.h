#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
class KBPPKMAJGCG_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class GPUTransformLoopAnim; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define KBPPKMAJGCG_AFNEJOOHKPO_OFFSET UNITYSDK_OFFSET(0xB32DEF0)
#define KBPPKMAJGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB32E1F0)
#define KBPPKMAJGCG_CFDDCIEMDGF_OFFSET UNITYSDK_OFFSET(0xB32DC40)
#define KBPPKMAJGCG_CLONNNKNENE_OFFSET UNITYSDK_OFFSET(0xB32D590)
#define KBPPKMAJGCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB32DF50)
#define KBPPKMAJGCG_DGOOCLHJHNE_OFFSET UNITYSDK_OFFSET(0xB32B100)
#define KBPPKMAJGCG_FFHMHEKMLGN_OFFSET UNITYSDK_OFFSET(0xB32AEA0)
#define KBPPKMAJGCG_GOIGOJDPCIE_OFFSET UNITYSDK_OFFSET(0xB32AF60)
#define KBPPKMAJGCG_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xB32A1F0)
#define KBPPKMAJGCG_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB327AD0)
#define KBPPKMAJGCG_HKOEIFLENHP_OFFSET UNITYSDK_OFFSET(0xB32AFD0)
#define KBPPKMAJGCG_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xB3299A0)
#define KBPPKMAJGCG_KEMGMGNODNC_OFFSET UNITYSDK_OFFSET(0xB32C7D0)
#define KBPPKMAJGCG_KHMOKBGBENC_OFFSET UNITYSDK_OFFSET(0xB327E30)
#define KBPPKMAJGCG_KLBPICFAJMD_OFFSET UNITYSDK_OFFSET(0xB32CD30)
#define KBPPKMAJGCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3276A0)
#define KBPPKMAJGCG_MDLNFECJMIM_OFFSET UNITYSDK_OFFSET(0xB32C9B0)
#define KBPPKMAJGCG_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB3278F0)
#define KBPPKMAJGCG_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB32D3B0)
#define KBPPKMAJGCG_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0xB329FC0)
#define KBPPKMAJGCG_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0xB32DE30)
#define KBPPKMAJGCG_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB327730)
#define KBPPKMAJGCG_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB327870)
#define KBPPKMAJGCG_TICK_OFFSET UNITYSDK_OFFSET(0xB3281D0)

inline static constexpr unsigned int KBPPKMAJGCG_TypeDefinitionIndex = 70324;

	class KBPPKMAJGCG : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::System::Single>*>* EFCCPGPEGHM; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* AELNHCFMIHG; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Material*>* KCABHDGHJOI; // 0x48
		::System::Int32 CNAGCEIFFFO; // 0x50
		::System::Int32 OJLAALDNFMM; // 0x54
		::System::Single HDHPNOOMAGE; // 0x58
		::System::Int32 LOJEIJMMLFJ; // 0x5C
		::System::Int32 HMBFGOAJDEL; // 0x60
		::System::Int32 GNKPALAHKIN; // 0x64
		::System::Boolean GFGGJHIEPMN; // 0x68
		::System::Byte _padding0[0x3];
		::System::Int32 IJEBBKHNMDE; // 0x6C
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x70
		::System::Int32 NEPNKDLPPGL; // 0x80
		::UnityEngine::Vector3 BCJIIOELICG; // 0x84
		::System::Int32 LFDJKLLBDNJ; // 0x90
		::System::Int32 AFDELOKGNCB; // 0x94
		::System::Int32 EENJHKEBPBJ; // 0x98
		::System::Int32 HDOGJOBHHGF; // 0x9C
		::System::Int32 ENKLELJAAEO; // 0xA0
		::System::Single JBJNJAIMFGD; // 0xA4
		::System::Int32 NNLIABGLMAP; // 0xA8
		::System::Single DADEEMLDLNC; // 0xAC
		static ::UnityEngine::ComputeShader** StaticGet_EGDOCDDNBHI()
		{
			return (::UnityEngine::ComputeShader**)UnitySDK::FromName("", "KBPPKMAJGCG")->GetStaticField(0x35210);
		}

		static ::System::String** StaticGet_DLPLGPICFNC()
		{
			return (::System::String**)UnitySDK::FromName("", "KBPPKMAJGCG")->GetStaticField(0x35218);
		}

		// static const ::System::Object HCJPHCDPMEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBPPKMAJGCG_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_TICK_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OKKLJMBPFOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_OKKLJMBPFOG_OFFSET))(this, a1);
		}

		::System::Void HAOBJNHJFGM(::KBPPKMAJGCG_AnimatedItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_HAOBJNHJFGM_OFFSET))(this, a1, a2);
		}

		::System::Void CLONNNKNENE(::KBPPKMAJGCG_AnimatedItem* a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_CLONNNKNENE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DGOOCLHJHNE(::KBPPKMAJGCG_AnimatedItem* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_DGOOCLHJHNE_OFFSET))(this, a1, a2);
		}

		::System::Void KEMGMGNODNC(::KBPPKMAJGCG_AnimatedItem* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_KEMGMGNODNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MDLNFECJMIM(::KBPPKMAJGCG_AnimatedItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*, ::System::Int32))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_MDLNFECJMIM_OFFSET))(this, a1, a2);
		}

		::System::Void KLBPICFAJMD(::KBPPKMAJGCG_AnimatedItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_KLBPICFAJMD_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds CFDDCIEMDGF()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_CFDDCIEMDGF_OFFSET))(this);
		}

		::System::Void KHMOKBGBENC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_KHMOKBGBENC_OFFSET))(this);
		}

		::System::Void OLMFHCLLBNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_OLMFHCLLBNN_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* FFHMHEKMLGN()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_FFHMHEKMLGN_OFFSET))(this);
		}

		::System::Void HKOEIFLENHP(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_HKOEIFLENHP_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeShader* AFNEJOOHKPO()
		{
			return ((::UnityEngine::ComputeShader*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_AFNEJOOHKPO_OFFSET))(this);
		}

		::RPG::Client::BezierCurve* GOIGOJDPCIE()
		{
			return ((::RPG::Client::BezierCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_GOIGOJDPCIE_OFFSET))(this);
		}

		::RPG::Client::GPUTransformLoopAnim* PNIEFOONFOP()
		{
			return ((::RPG::Client::GPUTransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG_PNIEFOONFOP_OFFSET))(this);
		}

	};
