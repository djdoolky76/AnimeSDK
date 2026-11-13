#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMEOMKNPNCC.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/AAKKBPEKHMI.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HNIKNEDBKPA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define NBNNPCIIDAJ_AFOIPFCOPHM_OFFSET UNITYSDK_OFFSET(0x150D6D10)
#define NBNNPCIIDAJ_AIJNAGGPKGK_OFFSET UNITYSDK_OFFSET(0x150CDCF0)
#define NBNNPCIIDAJ_ANAJMDCGEKD_OFFSET UNITYSDK_OFFSET(0x150CAFB0)
#define NBNNPCIIDAJ_BCHPLAGEIAL_OFFSET UNITYSDK_OFFSET(0x150D9880)
#define NBNNPCIIDAJ_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0x150CA9E0)
#define NBNNPCIIDAJ_BPPKPEBDDLG_OFFSET UNITYSDK_OFFSET(0x150D1920)
#define NBNNPCIIDAJ_CBEHKCIEHFC_OFFSET UNITYSDK_OFFSET(0x150D9F20)
#define NBNNPCIIDAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x150DB0E0)
#define NBNNPCIIDAJ_CNMENEKOAHK_OFFSET UNITYSDK_OFFSET(0x150D1F10)
#define NBNNPCIIDAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x150CA0E0)
#define NBNNPCIIDAJ_DCJOBPKKIDB_OFFSET UNITYSDK_OFFSET(0x150CA770)
#define NBNNPCIIDAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150CA560)
#define NBNNPCIIDAJ_DOCCJCCFPGC_OFFSET UNITYSDK_OFFSET(0x150DA2B0)
#define NBNNPCIIDAJ_ECFCCNAKPPI_OFFSET UNITYSDK_OFFSET(0x150DA240)
#define NBNNPCIIDAJ_EFDJNLHIMGC_OFFSET UNITYSDK_OFFSET(0x150DA1F0)
#define NBNNPCIIDAJ_EJMIKAHHHNG_OFFSET UNITYSDK_OFFSET(0x150D8E90)
#define NBNNPCIIDAJ_EJPNMBJOJOP_OFFSET UNITYSDK_OFFSET(0x150CA0C0)
#define NBNNPCIIDAJ_GAFDAEFNDHC_OFFSET UNITYSDK_OFFSET(0x150CE920)
#define NBNNPCIIDAJ_GCKFDBDOJLP_OFFSET UNITYSDK_OFFSET(0x150D0920)
#define NBNNPCIIDAJ_GET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA1D0)
#define NBNNPCIIDAJ_GET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA1B0)
#define NBNNPCIIDAJ_GET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA190)
#define NBNNPCIIDAJ_GICKFHDDDDK_OFFSET UNITYSDK_OFFSET(0x150D6ED0)
#define NBNNPCIIDAJ_GMEMMEBEEHP_OFFSET UNITYSDK_OFFSET(0x150CADE0)
#define NBNNPCIIDAJ_HAFBFIGIMAO_OFFSET UNITYSDK_OFFSET(0x150CBA70)
#define NBNNPCIIDAJ_HEFEIDHBDAA_OFFSET UNITYSDK_OFFSET(0x150D9A60)
#define NBNNPCIIDAJ_HMCFINFPJKM_OFFSET UNITYSDK_OFFSET(0x150CE160)
#define NBNNPCIIDAJ_HOADHDCNLGP_OFFSET UNITYSDK_OFFSET(0x150D2A10)
#define NBNNPCIIDAJ_ICABJFPLDAM_OFFSET UNITYSDK_OFFSET(0x150D6EA0)
#define NBNNPCIIDAJ_IFDPEJOGEOG_OFFSET UNITYSDK_OFFSET(0x150D9F40)
#define NBNNPCIIDAJ_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x150CAFE0)
#define NBNNPCIIDAJ_KHNDILLHLMA_OFFSET UNITYSDK_OFFSET(0x150D6BB0)
#define NBNNPCIIDAJ_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0x150CA420)
#define NBNNPCIIDAJ_LGMLHNIDKKL_OFFSET UNITYSDK_OFFSET(0x150CA0D0)
#define NBNNPCIIDAJ_LHKLOKABLCP_OFFSET UNITYSDK_OFFSET(0x150D76D0)
#define NBNNPCIIDAJ_LIMGLHBMDAB_OFFSET UNITYSDK_OFFSET(0x150D5520)
#define NBNNPCIIDAJ_MFBKGKIGKBL_OFFSET UNITYSDK_OFFSET(0x150D6330)
#define NBNNPCIIDAJ_MJNOBGCDMCP_OFFSET UNITYSDK_OFFSET(0x150CA610)
#define NBNNPCIIDAJ_NEHIEJNHGND_OFFSET UNITYSDK_OFFSET(0x150D8760)
#define NBNNPCIIDAJ_NFLAKFJCIPF_OFFSET UNITYSDK_OFFSET(0x150CA6D0)
#define NBNNPCIIDAJ_NKJCANGHHBK_OFFSET UNITYSDK_OFFSET(0x150CBA20)
#define NBNNPCIIDAJ_OHEBKHLNPKL_OFFSET UNITYSDK_OFFSET(0x150CE030)
#define NBNNPCIIDAJ_SET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA1E0)
#define NBNNPCIIDAJ_SET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA1C0)
#define NBNNPCIIDAJ_SET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0x150DA1A0)

inline static constexpr unsigned int NBNNPCIIDAJ_TypeDefinitionIndex = 58316;

	class NBNNPCIIDAJ : public ::KMEOMKNPNCC
	{
	public:
		::UnityEngine::AnimationCurve* LGAGBDIKJJF; // 0x168
		::HNIKNEDBKPA* BGDDKFHKAKM; // 0x170
		::UnityEngine::AnimationCurve* FNDBMFAFMLC; // 0x178
		::Il2CppArray<::System::Single>* ALPEIPDOHGA; // 0x180
		::System::Single EOKPGGEGDJO; // 0x188
		::System::Single EPKPLHFGKDC; // 0x18C
		::System::Int32 GNPNBOOCKPC; // 0x190
		::System::Boolean _IsSavedBeforeStoryLayerMask_k__BackingField; // 0x194
		::System::Byte _padding0[0x3];
		::UnityEngine::LayerMask _BeforeStoryMoveCapsuleCastLayerMask_k__BackingField; // 0x198
		::UnityEngine::LayerMask _BeforeStoryMoveRaycastLayerMask_k__BackingField; // 0x19C
		static ::System::Single* StaticGet_ICDGEGEEIDE()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x6330);
		}

		static ::System::Single* StaticGet_PIGACIFPMNK()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x6334);
		}

		static ::System::Single* StaticGet_CPAENPDMEIG()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x6338);
		}

		static ::System::Single* StaticGet_HLDOMGBBGIA()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x633C);
		}

		static ::System::Single* StaticGet_HAOBIPNJAAC()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x6340);
		}

		static ::System::Single* StaticGet_FPPMDGPADJN()
		{
			return (::System::Single*)UnitySDK::FromName("", "NBNNPCIIDAJ")->GetStaticField(0x6344);
		}

		// static const ::System::Object NCJLEHIMLKF; // 0x0
		// static const ::System::Object BCPBNNAPAHD; // 0x0
		// static const ::System::Object GNIMPHJJJKM; // 0x0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_CCTOR_OFFSET))();
		}

		::UnityEngine::AnimationCurve* EJPNMBJOJOP()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_EJPNMBJOJOP_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* LGMLHNIDKKL()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_LGMLHNIDKKL_OFFSET))(this);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void MJNOBGCDMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_MJNOBGCDMCP_OFFSET))(this);
		}

		::System::Void NFLAKFJCIPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_NFLAKFJCIPF_OFFSET))(this);
		}

		::UnityEngine::Vector3 DCJOBPKKIDB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_DCJOBPKKIDB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMEMMEBEEHP(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GMEMMEBEEHP_OFFSET))(this, a1);
		}

		::System::Void KHIMHKPIMGJ(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_KHIMHKPIMGJ_OFFSET))(this, a1);
		}

		::System::Void GAFDAEFNDHC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GAFDAEFNDHC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 MFBKGKIGKBL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Boolean a6, ::UnityEngine::RaycastHit a7)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_MFBKGKIGKBL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void AIJNAGGPKGK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_AIJNAGGPKGK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LIMGLHBMDAB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_LIMGLHBMDAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Single KHNDILLHLMA(::System::Single a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_KHNDILLHLMA_OFFSET))(this, a1, a2);
		}

		::System::Void HMCFINFPJKM(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_HMCFINFPJKM_OFFSET))(this, a1);
		}

		::System::Void OHEBKHLNPKL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_OHEBKHLNPKL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 HOADHDCNLGP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::System::Boolean a5, ::UnityEngine::RaycastHit a6)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_HOADHDCNLGP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 GICKFHDDDDK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GICKFHDDDDK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 LHKLOKABLCP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_LHKLOKABLCP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 EJMIKAHHHNG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_EJMIKAHHHNG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NEHIEJNHGND(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_NEHIEJNHGND_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GCKFDBDOJLP(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GCKFDBDOJLP_OFFSET))(this, a1, a2);
		}

		::System::Boolean HEFEIDHBDAA(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_HEFEIDHBDAA_OFFSET))(this, a1, a2);
		}

		::System::Boolean HAFBFIGIMAO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::AAKKBPEKHMI a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::AAKKBPEKHMI))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_HAFBFIGIMAO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CNMENEKOAHK(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_CNMENEKOAHK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single IFDPEJOGEOG(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_IFDPEJOGEOG_OFFSET))(this, a1);
		}

		::System::Boolean BCHPLAGEIAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::RaycastHit a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit, ::System::Single))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_BCHPLAGEIAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 BPPKPEBDDLG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_BPPKPEBDDLG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AFOIPFCOPHM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_AFOIPFCOPHM_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANAJMDCGEKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_ANAJMDCGEKD_OFFSET))(this);
		}

		::System::Boolean ICABJFPLDAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_ICABJFPLDAM_OFFSET))(this);
		}

		::System::Boolean CBEHKCIEHFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_CBEHKCIEHFC_OFFSET))(this);
		}

		::System::Boolean get_IsSavedBeforeStoryLayerMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET))(this);
		}

		::System::Void set_IsSavedBeforeStoryLayerMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_SET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_BeforeStoryMoveRaycastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_BeforeStoryMoveRaycastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_SET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_BeforeStoryMoveCapsuleCastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_GET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_BeforeStoryMoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_SET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
		}

		::System::Void EFDJNLHIMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_EFDJNLHIMGC_OFFSET))(this);
		}

		::System::Void ECFCCNAKPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_ECFCCNAKPPI_OFFSET))(this);
		}

		::UnityEngine::Vector3 DOCCJCCFPGC(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_DOCCJCCFPGC_OFFSET))(this, a1);
		}

		::System::Single NKJCANGHHBK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNPCIIDAJ_NKJCANGHHBK_OFFSET))(this);
		}

	};
