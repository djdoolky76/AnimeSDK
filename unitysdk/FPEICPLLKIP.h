#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AIKPPIALBEM;
class FiveDimRenderingPanel;
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesBoardView; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesRouteRendererView; }
namespace RPG::GameCore { class ChenLingFesRegionCellConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FPEICPLLKIP_ABJAEHMHFKN_OFFSET UNITYSDK_OFFSET(0x15914AD0)
#define FPEICPLLKIP_APAGHCDPPAJ_OFFSET UNITYSDK_OFFSET(0x159114A0)
#define FPEICPLLKIP_BJPJALNIPAO_OFFSET UNITYSDK_OFFSET(0x15916CB0)
#define FPEICPLLKIP_BONCBJPFJDO_OFFSET UNITYSDK_OFFSET(0x15911C00)
#define FPEICPLLKIP_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0x15917930)
#define FPEICPLLKIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15911570)
#define FPEICPLLKIP_DBGAKJNFPAJ_OFFSET UNITYSDK_OFFSET(0x15910B50)
#define FPEICPLLKIP_DHFLECOHKFF_OFFSET UNITYSDK_OFFSET(0x15917400)
#define FPEICPLLKIP_DHNAJHHHEJK_OFFSET UNITYSDK_OFFSET(0x159141D0)
#define FPEICPLLKIP_DIAJCENIJHG_OFFSET UNITYSDK_OFFSET(0x15916530)
#define FPEICPLLKIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15911890)
#define FPEICPLLKIP_EJLOGENPDFD_OFFSET UNITYSDK_OFFSET(0x15911510)
#define FPEICPLLKIP_FACGJKLHCGA_OFFSET UNITYSDK_OFFSET(0x159148D0)
#define FPEICPLLKIP_GET_CELLENTITYDICT_OFFSET UNITYSDK_OFFSET(0x15917A40)
#define FPEICPLLKIP_GET_ENDCELLENTITY_OFFSET UNITYSDK_OFFSET(0x15917A80)
#define FPEICPLLKIP_GET_ITEMENTITYLIST_OFFSET UNITYSDK_OFFSET(0x15917AA0)
#define FPEICPLLKIP_GET_RENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x15917A20)
#define FPEICPLLKIP_GET_STARTCELLENTITY_OFFSET UNITYSDK_OFFSET(0x15917A60)
#define FPEICPLLKIP_GET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x15917A00)
#define FPEICPLLKIP_GFICBEBHPBA_OFFSET UNITYSDK_OFFSET(0x15913A40)
#define FPEICPLLKIP_GGKGJHFEFOO_OFFSET UNITYSDK_OFFSET(0x159159A0)
#define FPEICPLLKIP_GIDHHFJNPIK_OFFSET UNITYSDK_OFFSET(0x15912090)
#define FPEICPLLKIP_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0x15911B30)
#define FPEICPLLKIP_HKCLAFGIHDG_OFFSET UNITYSDK_OFFSET(0x15917130)
#define FPEICPLLKIP_HKHIAMPNPJK_OFFSET UNITYSDK_OFFSET(0x159179A0)
#define FPEICPLLKIP_IIAJCDFKJMB_OFFSET UNITYSDK_OFFSET(0x15913750)
#define FPEICPLLKIP_IPOLEOIHKCP_1_OFFSET UNITYSDK_OFFSET(0x15917600)
#define FPEICPLLKIP_IPOLEOIHKCP_OFFSET UNITYSDK_OFFSET(0x159174F0)
#define FPEICPLLKIP_JMGEOHAGLID_OFFSET UNITYSDK_OFFSET(0x15912600)
#define FPEICPLLKIP_KICGJMFMFAF_OFFSET UNITYSDK_OFFSET(0x15912110)
#define FPEICPLLKIP_KJGODFCGLKP_OFFSET UNITYSDK_OFFSET(0x15914C50)
#define FPEICPLLKIP_KPBEHADODAM_OFFSET UNITYSDK_OFFSET(0x159110F0)
#define FPEICPLLKIP_LNOKGNHLOEH_OFFSET UNITYSDK_OFFSET(0x15911E40)
#define FPEICPLLKIP_NIFOLKEOLEK_OFFSET UNITYSDK_OFFSET(0x15913250)
#define FPEICPLLKIP_NMMKCPIKIKH_OFFSET UNITYSDK_OFFSET(0x15910BF0)
#define FPEICPLLKIP_PAFPGODPADL_OFFSET UNITYSDK_OFFSET(0x15917890)
#define FPEICPLLKIP_PAMLPKIGMAF_OFFSET UNITYSDK_OFFSET(0x15911420)
#define FPEICPLLKIP_PJBGBLMCEBG_OFFSET UNITYSDK_OFFSET(0x15911340)
#define FPEICPLLKIP_PKECFGEKCCD_OFFSET UNITYSDK_OFFSET(0x15916A80)
#define FPEICPLLKIP_PLJEIOIBEFJ_OFFSET UNITYSDK_OFFSET(0x15914510)
#define FPEICPLLKIP_SET_CELLENTITYDICT_OFFSET UNITYSDK_OFFSET(0x15917A50)
#define FPEICPLLKIP_SET_ENDCELLENTITY_OFFSET UNITYSDK_OFFSET(0x15917A90)
#define FPEICPLLKIP_SET_ITEMENTITYLIST_OFFSET UNITYSDK_OFFSET(0x15917AB0)
#define FPEICPLLKIP_SET_RENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0x15917A30)
#define FPEICPLLKIP_SET_STARTCELLENTITY_OFFSET UNITYSDK_OFFSET(0x15917A70)
#define FPEICPLLKIP_SET_VIEWROOT_OFFSET UNITYSDK_OFFSET(0x15917A10)
#define FPEICPLLKIP__ONRELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x15911A50)

	class FPEICPLLKIP
	{
	public:
		::AIKPPIALBEM* LAKIKOLKPGI; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::NGFHCJIAOLH*>* _CellEntityDict_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* _ItemEntityList_k__BackingField; // 0x40
		::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x48
		::OAIPJANPCEK* PDENFEFCAGN; // 0x50
		::NGFHCJIAOLH* _EndCellEntity_k__BackingField; // 0x58
		::NGFHCJIAOLH* _StartCellEntity_k__BackingField; // 0x60
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x68
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x70
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView* KOFNPFEAIEF; // 0x78
		::UnityEngine::Transform* _ViewRoot_k__BackingField; // 0x80
		::FiveDimRenderingPanel* _RenderingPanel_k__BackingField; // 0x88
		// static const ::System::Object JMLLPOEOFLO; // 0x0
		::System::Void _ctor(::HDIAALCMDNG* a1, ::OAIPJANPCEK* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HDIAALCMDNG*, ::OAIPJANPCEK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DBGAKJNFPAJ(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesRouteRendererView*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_DBGAKJNFPAJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NMMKCPIKIKH()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_NMMKCPIKIKH_OFFSET))(this);
		}

		::System::Void PJBGBLMCEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_PJBGBLMCEBG_OFFSET))(this);
		}

		::System::Void PAMLPKIGMAF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_PAMLPKIGMAF_OFFSET))(this, a1);
		}

		::System::Void APAGHCDPPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_APAGHCDPPAJ_OFFSET))(this);
		}

		::System::Void EJLOGENPDFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_EJLOGENPDFD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnReleaseView(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP__ONRELEASEVIEW_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPEICPLLKIP_HHHBOFNGHCK_OFFSET))(this, a1);
		}

		::NGFHCJIAOLH* KPBEHADODAM(::System::Int32 a1)
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPEICPLLKIP_KPBEHADODAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* BONCBJPFJDO(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FPEICPLLKIP_BONCBJPFJDO_OFFSET))(this, a1);
		}

		::System::Int32 LNOKGNHLOEH(::UnityEngine::Vector2Int a1, ::RPG::GameCore::ChenLingFesCellType a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::GameCore::ChenLingFesCellType, ::System::Int32))((::PBYTE)hIl2Cpp + FPEICPLLKIP_LNOKGNHLOEH_OFFSET))(this, a1, a2, a3);
		}

		::NGFHCJIAOLH* GIDHHFJNPIK()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GIDHHFJNPIK_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView* KICGJMFMFAF(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_KICGJMFMFAF_OFFSET))(this, a1);
		}

		::NGFHCJIAOLH* JMGEOHAGLID(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_JMGEOHAGLID_OFFSET))(this, a1);
		}

		::System::Void NIFOLKEOLEK(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_NIFOLKEOLEK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* IIAJCDFKJMB()
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_IIAJCDFKJMB_OFFSET))(this);
		}

		::NGFHCJIAOLH* GFICBEBHPBA(::RPG::GameCore::ChenLingFesRegionCellConfig* a1)
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID, ::RPG::GameCore::ChenLingFesRegionCellConfig*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GFICBEBHPBA_OFFSET))(this, a1);
		}

		::System::Boolean DHNAJHHHEJK(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_DHNAJHHHEJK_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLJEIOIBEFJ(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_PLJEIOIBEFJ_OFFSET))(this, a1, a2);
		}

		::System::Void FACGJKLHCGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_FACGJKLHCGA_OFFSET))(this, a1);
		}

		::System::Void ABJAEHMHFKN(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPEICPLLKIP_ABJAEHMHFKN_OFFSET))(this, a1, a2);
		}

		::System::Boolean KJGODFCGLKP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FPEICPLLKIP_KJGODFCGLKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GGKGJHFEFOO(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GGKGJHFEFOO_OFFSET))(this, a1);
		}

		::System::Void DIAJCENIJHG(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_DIAJCENIJHG_OFFSET))(this, a1);
		}

		::System::Void PKECFGEKCCD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_PKECFGEKCCD_OFFSET))(this, a1);
		}

		::System::Void BJPJALNIPAO(::NGFHCJIAOLH* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_BJPJALNIPAO_OFFSET))(this, a1, a2);
		}

		::System::Void HKCLAFGIHDG(::NGFHCJIAOLH* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_HKCLAFGIHDG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TriggerEffectParamsRef DHFLECOHKFF(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPEICPLLKIP_DHFLECOHKFF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TriggerEffectParamsRef IPOLEOIHKCP(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPEICPLLKIP_IPOLEOIHKCP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TriggerEffectParamsRef IPOLEOIHKCP_1(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPEICPLLKIP_IPOLEOIHKCP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MonoEffect* PAFPGODPADL(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_PAFPGODPADL_OFFSET))(this, a1, a2);
		}

		::System::Void CPNEMOBKHEL(::RPG::Client::TriggerEffectParamsRef a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + FPEICPLLKIP_CPNEMOBKHEL_OFFSET))(this, a1);
		}

		::System::Void HKHIAMPNPJK(::System::Single a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_HKHIAMPNPJK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* get_ViewRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_VIEWROOT_OFFSET))(this);
		}

		::System::Void set_ViewRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_VIEWROOT_OFFSET))(this, a1);
		}

		::FiveDimRenderingPanel* get_RenderingPanel()
		{
			return ((::FiveDimRenderingPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_RENDERINGPANEL_OFFSET))(this);
		}

		::System::Void set_RenderingPanel(::FiveDimRenderingPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_RENDERINGPANEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::NGFHCJIAOLH*>* get_CellEntityDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_CELLENTITYDICT_OFFSET))(this);
		}

		::System::Void set_CellEntityDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::NGFHCJIAOLH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::NGFHCJIAOLH*>*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_CELLENTITYDICT_OFFSET))(this, a1);
		}

		::NGFHCJIAOLH* get_StartCellEntity()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_STARTCELLENTITY_OFFSET))(this);
		}

		::System::Void set_StartCellEntity(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_STARTCELLENTITY_OFFSET))(this, a1);
		}

		::NGFHCJIAOLH* get_EndCellEntity()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_ENDCELLENTITY_OFFSET))(this);
		}

		::System::Void set_EndCellEntity(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_ENDCELLENTITY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* get_ItemEntityList()
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEICPLLKIP_GET_ITEMENTITYLIST_OFFSET))(this);
		}

		::System::Void set_ItemEntityList(::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*))((::PBYTE)hIl2Cpp + FPEICPLLKIP_SET_ITEMENTITYLIST_OFFSET))(this, a1);
		}

	};
