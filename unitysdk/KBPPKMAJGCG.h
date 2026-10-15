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

#define KBPPKMAJGCG_AFNEJOOHKPO_OFFSET UNITYSDK_OFFSET(0xB3273B0)
#define KBPPKMAJGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3276B0)
#define KBPPKMAJGCG_CFDDCIEMDGF_OFFSET UNITYSDK_OFFSET(0xB327100)
#define KBPPKMAJGCG_CLONNNKNENE_OFFSET UNITYSDK_OFFSET(0xB326A50)
#define KBPPKMAJGCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB327410)
#define KBPPKMAJGCG_DGOOCLHJHNE_OFFSET UNITYSDK_OFFSET(0xB3245C0)
#define KBPPKMAJGCG_FFHMHEKMLGN_OFFSET UNITYSDK_OFFSET(0xB324360)
#define KBPPKMAJGCG_GOIGOJDPCIE_OFFSET UNITYSDK_OFFSET(0xB324420)
#define KBPPKMAJGCG_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0xB3236B0)
#define KBPPKMAJGCG_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB320FA0)
#define KBPPKMAJGCG_HKOEIFLENHP_OFFSET UNITYSDK_OFFSET(0xB324490)
#define KBPPKMAJGCG_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xB322E70)
#define KBPPKMAJGCG_KEMGMGNODNC_OFFSET UNITYSDK_OFFSET(0xB325C90)
#define KBPPKMAJGCG_KHMOKBGBENC_OFFSET UNITYSDK_OFFSET(0xB321300)
#define KBPPKMAJGCG_KLBPICFAJMD_OFFSET UNITYSDK_OFFSET(0xB3261F0)
#define KBPPKMAJGCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB320B70)
#define KBPPKMAJGCG_MDLNFECJMIM_OFFSET UNITYSDK_OFFSET(0xB325E70)
#define KBPPKMAJGCG_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB320DC0)
#define KBPPKMAJGCG_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB326870)
#define KBPPKMAJGCG_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0xB323490)
#define KBPPKMAJGCG_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0xB3272F0)
#define KBPPKMAJGCG_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB320C00)
#define KBPPKMAJGCG_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB320D40)
#define KBPPKMAJGCG_TICK_OFFSET UNITYSDK_OFFSET(0xB3216A0)

inline static constexpr unsigned int KBPPKMAJGCG_TypeDefinitionIndex = 70324;

	class KBPPKMAJGCG : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::System::Single>*>* EFCCPGPEGHM; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Il2CppArray<::UnityEngine::Matrix4x4>*>* AELNHCFMIHG; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Material*>* KCABHDGHJOI; // 0x48
		::System::Int32 CNAGCEIFFFO; // 0x50
		::System::Int32 IJEBBKHNMDE; // 0x54
		::System::Int32 NNLIABGLMAP; // 0x58
		::System::Int32 LFDJKLLBDNJ; // 0x5C
		::System::Boolean GFGGJHIEPMN; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 HDOGJOBHHGF; // 0x64
		::UnityEngine::Vector3 BCJIIOELICG; // 0x68
		::System::Single HDHPNOOMAGE; // 0x74
		::System::Single DADEEMLDLNC; // 0x78
		::System::Int32 GNKPALAHKIN; // 0x7C
		::System::Int32 LOJEIJMMLFJ; // 0x80
		::System::Int32 OJLAALDNFMM; // 0x84
		::System::Int32 NEPNKDLPPGL; // 0x88
		::System::Int32 ENKLELJAAEO; // 0x8C
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x90
		::System::Int32 AFDELOKGNCB; // 0xA0
		::System::Int32 HMBFGOAJDEL; // 0xA4
		::System::Int32 EENJHKEBPBJ; // 0xA8
		::System::Single JBJNJAIMFGD; // 0xAC
		static ::System::String** StaticGet_DLPLGPICFNC()
		{
			return (::System::String**)UnitySDK::FromName("", "KBPPKMAJGCG")->GetStaticField(0x34040);
		}

		static ::UnityEngine::ComputeShader** StaticGet_EGDOCDDNBHI()
		{
			return (::UnityEngine::ComputeShader**)UnitySDK::FromName("", "KBPPKMAJGCG")->GetStaticField(0x34048);
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
