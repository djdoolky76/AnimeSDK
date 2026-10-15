#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimGridPropView_CellWaterReflectionState.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/MMHKHFAEOAD.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EMJIDLCDFMI;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView_ONDFHPBICNH; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_AKHBEMHPMNL_OFFSET UNITYSDK_OFFSET(0xD442700)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_APPLYRENDERERTRANSFORMLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0xD4443A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CABHHLMJNJJ_OFFSET UNITYSDK_OFFSET(0xD440120)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CANCELPOSTLOAD_OFFSET UNITYSDK_OFFSET(0xD440FF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CDEHMODIKPA_OFFSET UNITYSDK_OFFSET(0xD440060)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CFGLHIFNNKP_OFFSET UNITYSDK_OFFSET(0xD440F30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLLFBGPNCBG_OFFSET UNITYSDK_OFFSET(0xD4417A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD445A60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_EBHCNOFLDAJ_OFFSET UNITYSDK_OFFSET(0xD441930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_FPOOJKCKOFE_OFFSET UNITYSDK_OFFSET(0xD43F9A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GEPIJAAOGKO_OFFSET UNITYSDK_OFFSET(0xD440610)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GETCELLGAMEOBJECTBYCOORD_OFFSET UNITYSDK_OFFSET(0xD444C50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GET_GRIDMAINCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD445A50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GET_ISLOCKSNAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD445A40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_IEKANGDBNIM_OFFSET UNITYSDK_OFFSET(0xD442BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_INITATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0xD4405C0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD43F920)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KIBPAMBMNBB_OFFSET UNITYSDK_OFFSET(0xD442340)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KLDPBMMKONH_OFFSET UNITYSDK_OFFSET(0xD445260)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KLMNPGCNLEE_OFFSET UNITYSDK_OFFSET(0xD442B80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KOFLGGBONLG_OFFSET UNITYSDK_OFFSET(0xD4403E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_MJEEMGMBEMM_OFFSET UNITYSDK_OFFSET(0xD443DB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_OCMCDLAODKE_OFFSET UNITYSDK_OFFSET(0xD441CA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ODHJEADPCNF_OFFSET UNITYSDK_OFFSET(0xD440260)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_OPNHLACOCNI_OFFSET UNITYSDK_OFFSET(0xD4459F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PFAIMMOCLCO_OFFSET UNITYSDK_OFFSET(0xD4439E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PJAFFFNIFKC_OFFSET UNITYSDK_OFFSET(0xD440530)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PNFJCJKNEDJ_OFFSET UNITYSDK_OFFSET(0xD4451F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_POSTLOADASYNC_OFFSET UNITYSDK_OFFSET(0xD440710)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_POSTLOAD_OFFSET UNITYSDK_OFFSET(0xD441090)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD43FE70)

namespace RPG::Client::LittleGame::FiveDim
{
	class FiveDimGridPropView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::System::String* CellPrefabPath; // 0x208
		::UnityEngine::Vector2Int GridSize; // 0x210
		::KJFIKOKBCCA PHJFHLAIEJM; // 0x218
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FCIJMJCKEDI; // 0x2A8
		::System::Collections::Generic::List_1<::System::Object*>* ONOJHKOFFGG; // 0x2B0
		::UnityEngine::BoxCollider* BOOFEFIDKNC; // 0x2B8
		::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_ONDFHPBICNH* HDPLDMIJCHN; // 0x2C0
		::RPG::PoolDictionary_2<::UnityEngine::Vector2Int, ::System::Object*>* IBPMJANFJHG; // 0x2C8
		::RPG::PoolDictionary_2<::UnityEngine::Transform*, ::UnityEngine::Vector2Int>* DFBGNPFBBOI; // 0x2D0
		::KJFIKOKBCCA FIFDNBFOODC; // 0x2D8
		// static const ::System::String* CJODGKMOFOE; // 0x0
		// static const ::System::String* GOBJADOOPJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::EMJIDLCDFMI* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void InitAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_INITATTACHPOINTS_OFFSET))(this);
		}

		::System::Void PostLoadAsync(::EMJIDLCDFMI* a1, ::Entitas::IEntity* a2, ::KJFIKOKBCCA a3)
		{
			return ((::System::Void(*)(::PVOID, ::EMJIDLCDFMI*, ::Entitas::IEntity*, ::KJFIKOKBCCA))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_POSTLOADASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CancelPostLoad(::EMJIDLCDFMI* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CANCELPOSTLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void PostLoad(::EMJIDLCDFMI* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EMJIDLCDFMI*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_POSTLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void EBHCNOFLDAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_EBHCNOFLDAJ_OFFSET))(this);
		}

		::System::Void PJAFFFNIFKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PJAFFFNIFKC_OFFSET))(this);
		}

		::System::Void OCMCDLAODKE(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_OCMCDLAODKE_OFFSET))(this, a1, a2);
		}

		::System::Void GEPIJAAOGKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GEPIJAAOGKO_OFFSET))(this);
		}

		::System::Void KIBPAMBMNBB(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KIBPAMBMNBB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODHJEADPCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_ODHJEADPCNF_OFFSET))(this);
		}

		::System::Void KOFLGGBONLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KOFLGGBONLG_OFFSET))(this);
		}

		::System::Void AKHBEMHPMNL(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_AKHBEMHPMNL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFGLHIFNNKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CFGLHIFNNKP_OFFSET))(this);
		}

		::UnityEngine::Transform* CLLFBGPNCBG()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CLLFBGPNCBG_OFFSET))(this);
		}

		::System::Void KLMNPGCNLEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KLMNPGCNLEE_OFFSET))(this);
		}

		::System::String* PFAIMMOCLCO(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PFAIMMOCLCO_OFFSET))(this, a1, a2);
		}

		::System::Void MJEEMGMBEMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_MJEEMGMBEMM_OFFSET))(this);
		}

		::System::Void ApplyRendererTransformLocalOffset(::UnityEngine::Vector3 a1, ::System::Collections::Generic::Dictionary_2<::MMHKHFAEOAD, ::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::MMHKHFAEOAD, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_APPLYRENDERERTRANSFORMLOCALOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Void CABHHLMJNJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CABHHLMJNJJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCellGameObjectByCoord(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GETCELLGAMEOBJECTBYCOORD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CDEHMODIKPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_CDEHMODIKPA_OFFSET))(this);
		}

		::System::Void FPOOJKCKOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_FPOOJKCKOFE_OFFSET))(this);
		}

		::System::Void IEKANGDBNIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_IEKANGDBNIM_OFFSET))(this);
		}

		::System::Void KLDPBMMKONH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_KLDPBMMKONH_OFFSET))(this, a1);
		}

		::System::Boolean PNFJCJKNEDJ(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState a1, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_CellWaterReflectionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_PNFJCJKNEDJ_OFFSET))(this, a1, a2);
		}

		::System::String* OPNHLACOCNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_OPNHLACOCNI_OFFSET))(this);
		}

		::System::Boolean get_IsLockSnapTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GET_ISLOCKSNAPTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::BoxCollider* get_GridMainCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW_GET_GRIDMAINCOLLIDER_OFFSET))(this);
		}

	};
}
