#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BPCBGBDIFDE_KDCFMKHGLEM.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_OOABFKDMAAA.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/OLPPOJJADDO.h"
#include "unitysdk/PEMDFINAHEA.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"

class BOALGPJCKIE;
class BPCBGBDIFDE_NEOJPFIKEOA;
class CDLADONELEK;
class GLAAJLGNEGP;
class IOOIHHOJOPI;
class LBIHDBHFJKE;
class LHGLNFHJEHK;
class MALOGCCEPHE;
class Map3DFogItem;
class MonoSceneMap3DConfig;
class NHHJOAHKHAB;
class OFPJBGCDOMK;
namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class ConfigUIUrbanMap; }
namespace MoleMole { class MapGroupMemberStateConfig; }
namespace MoleMole { class SphereCameraConfig; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class NMANHEHIJAL_1;

#define BPCBGBDIFDE_ADALGLPDMIP_OFFSET UNITYSDK_OFFSET(0x11627DE0)
#define BPCBGBDIFDE_ADDHAKDDJMG_OFFSET UNITYSDK_OFFSET(0x11619630)
#define BPCBGBDIFDE_ADNPOPDLPPJ_OFFSET UNITYSDK_OFFSET(0x1161BD10)
#define BPCBGBDIFDE_ALLCEHHPIEJ_OFFSET UNITYSDK_OFFSET(0x11605DA0)
#define BPCBGBDIFDE_AMGIDGDECNN_OFFSET UNITYSDK_OFFSET(0x11610970)
#define BPCBGBDIFDE_AOALEGDOPLM_OFFSET UNITYSDK_OFFSET(0x1162AC00)
#define BPCBGBDIFDE_AOMKILNJNJF_OFFSET UNITYSDK_OFFSET(0x11626630)
#define BPCBGBDIFDE_BALFCLABIOP_OFFSET UNITYSDK_OFFSET(0x11618920)
#define BPCBGBDIFDE_BBJNDONMMNG_OFFSET UNITYSDK_OFFSET(0x11613C40)
#define BPCBGBDIFDE_BKAEGEFIKKK_OFFSET UNITYSDK_OFFSET(0x116289E0)
#define BPCBGBDIFDE_BMMLKODFJLI_OFFSET UNITYSDK_OFFSET(0x11628BF0)
#define BPCBGBDIFDE_BPPOINLBFEK_OFFSET UNITYSDK_OFFSET(0x1161B020)
#define BPCBGBDIFDE_CBFNDBIEKAI_OFFSET UNITYSDK_OFFSET(0x1162D180)
#define BPCBGBDIFDE_CDEPOAEKJHK_OFFSET UNITYSDK_OFFSET(0x11629E60)
#define BPCBGBDIFDE_CGPGPBMFDPP_OFFSET UNITYSDK_OFFSET(0x11624EA0)
#define BPCBGBDIFDE_CPLIOBFPJMM_OFFSET UNITYSDK_OFFSET(0x1162E600)
#define BPCBGBDIFDE_DBDDPPKFDHC_OFFSET UNITYSDK_OFFSET(0x11618260)
#define BPCBGBDIFDE_DBOMJJMDCBN_OFFSET UNITYSDK_OFFSET(0x1162C200)
#define BPCBGBDIFDE_DDABOLEGNAC_OFFSET UNITYSDK_OFFSET(0x11611090)
#define BPCBGBDIFDE_DGLHIHMFCAL_OFFSET UNITYSDK_OFFSET(0x1162DC40)
#define BPCBGBDIFDE_DHBDNJGCLKL_OFFSET UNITYSDK_OFFSET(0x1161CE50)
#define BPCBGBDIFDE_DIOPAFIMLBE_OFFSET UNITYSDK_OFFSET(0x116170E0)
#define BPCBGBDIFDE_DJDJFHMDABM_OFFSET UNITYSDK_OFFSET(0x11627D40)
#define BPCBGBDIFDE_DJOIBDBNBMO_OFFSET UNITYSDK_OFFSET(0x116277F0)
#define BPCBGBDIFDE_DMGPIEEFHCI_OFFSET UNITYSDK_OFFSET(0x116265D0)
#define BPCBGBDIFDE_DOFNLNAGDOC_OFFSET UNITYSDK_OFFSET(0x1161D480)
#define BPCBGBDIFDE_EAOHJDBEKDJ_OFFSET UNITYSDK_OFFSET(0x1160A720)
#define BPCBGBDIFDE_EBKPMHMDPNM_OFFSET UNITYSDK_OFFSET(0x1162BD40)
#define BPCBGBDIFDE_EEDGCFNOCCI_OFFSET UNITYSDK_OFFSET(0x11624510)
#define BPCBGBDIFDE_EIHGCFNMEOK_OFFSET UNITYSDK_OFFSET(0x11625390)
#define BPCBGBDIFDE_EJCPCONIDEM_OFFSET UNITYSDK_OFFSET(0x1162A8C0)
#define BPCBGBDIFDE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x11604960)
#define BPCBGBDIFDE_EPNOLOAOIBJ_OFFSET UNITYSDK_OFFSET(0x1160F4F0)
#define BPCBGBDIFDE_FCJCFIHFAIG_OFFSET UNITYSDK_OFFSET(0x1161B4A0)
#define BPCBGBDIFDE_FCLFIKKPCDB_OFFSET UNITYSDK_OFFSET(0x1161B740)
#define BPCBGBDIFDE_FGFLADDMKCD_OFFSET UNITYSDK_OFFSET(0x11611260)
#define BPCBGBDIFDE_FHMKJBHMENA_OFFSET UNITYSDK_OFFSET(0x11629210)
#define BPCBGBDIFDE_FHPNBFDGBAN_OFFSET UNITYSDK_OFFSET(0x11616680)
#define BPCBGBDIFDE_FLFCJLPMMII_OFFSET UNITYSDK_OFFSET(0x11616EC0)
#define BPCBGBDIFDE_FPEIHBFFCNG_OFFSET UNITYSDK_OFFSET(0x1161DE30)
#define BPCBGBDIFDE_GAMPDFKLDJD_OFFSET UNITYSDK_OFFSET(0x11623590)
#define BPCBGBDIFDE_GAOCICGKDAG_OFFSET UNITYSDK_OFFSET(0x1162F1E0)
#define BPCBGBDIFDE_GBHHBGCOMLH_OFFSET UNITYSDK_OFFSET(0x11608C60)
#define BPCBGBDIFDE_GEELILGCMHC_OFFSET UNITYSDK_OFFSET(0x116247D0)
#define BPCBGBDIFDE_GKCJNFDBGNL_OFFSET UNITYSDK_OFFSET(0x1162EBF0)
#define BPCBGBDIFDE_GMPHEFOPMLM_OFFSET UNITYSDK_OFFSET(0x11611120)
#define BPCBGBDIFDE_GNIOGMLPMNF_OFFSET UNITYSDK_OFFSET(0x1162CDF0)
#define BPCBGBDIFDE_HGOFINENHAG_OFFSET UNITYSDK_OFFSET(0x11607D70)
#define BPCBGBDIFDE_HHMIKHDFGDJ_OFFSET UNITYSDK_OFFSET(0x1162C600)
#define BPCBGBDIFDE_HJJPJIIGKFK_OFFSET UNITYSDK_OFFSET(0x1162C290)
#define BPCBGBDIFDE_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x11604F40)
#define BPCBGBDIFDE_HPFBKDABCJA_OFFSET UNITYSDK_OFFSET(0x11628B40)
#define BPCBGBDIFDE_IABGFCJPJPO_OFFSET UNITYSDK_OFFSET(0x116165A0)
#define BPCBGBDIFDE_IAHBCEHMAGD_OFFSET UNITYSDK_OFFSET(0x11623EF0)
#define BPCBGBDIFDE_IAHCJBJIOKD_OFFSET UNITYSDK_OFFSET(0x1161D470)
#define BPCBGBDIFDE_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1162B940)
#define BPCBGBDIFDE_IGHPLHCFHCE_OFFSET UNITYSDK_OFFSET(0x11614DA0)
#define BPCBGBDIFDE_IHACFOMPKAA_OFFSET UNITYSDK_OFFSET(0x11627E30)
#define BPCBGBDIFDE_IHCFOIJOAKH_OFFSET UNITYSDK_OFFSET(0x1161B930)
#define BPCBGBDIFDE_IIAMKLNHDGM_OFFSET UNITYSDK_OFFSET(0x1162B9D0)
#define BPCBGBDIFDE_IIGLKGBCCLJ_OFFSET UNITYSDK_OFFSET(0x1160B1A0)
#define BPCBGBDIFDE_IMGJKLMFMFH_OFFSET UNITYSDK_OFFSET(0x11618CF0)
#define BPCBGBDIFDE_IMMCGLANEBI_OFFSET UNITYSDK_OFFSET(0x11625B50)
#define BPCBGBDIFDE_INHMIHAHEEE_OFFSET UNITYSDK_OFFSET(0x116109F0)
#define BPCBGBDIFDE_JDFCEKNDKGI_OFFSET UNITYSDK_OFFSET(0x1162E9B0)
#define BPCBGBDIFDE_JDFOIHIMMEN_OFFSET UNITYSDK_OFFSET(0x116256D0)
#define BPCBGBDIFDE_JEGJAEGEMGF_OFFSET UNITYSDK_OFFSET(0x1161E050)
#define BPCBGBDIFDE_JEJGHFALALP_OFFSET UNITYSDK_OFFSET(0x11614CA0)
#define BPCBGBDIFDE_JIIFFOFLOAB_OFFSET UNITYSDK_OFFSET(0x1162E350)
#define BPCBGBDIFDE_JJCFGCEHKMB_OFFSET UNITYSDK_OFFSET(0x11611710)
#define BPCBGBDIFDE_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x11628DE0)
#define BPCBGBDIFDE_KIDHBFBMHIN_OFFSET UNITYSDK_OFFSET(0x11610D10)
#define BPCBGBDIFDE_KMFCKCEPJMN_OFFSET UNITYSDK_OFFSET(0x116087B0)
#define BPCBGBDIFDE_LBBFAEBPCGH_OFFSET UNITYSDK_OFFSET(0x1160BDD0)
#define BPCBGBDIFDE_LFGCKGHFLBI_OFFSET UNITYSDK_OFFSET(0x11628900)
#define BPCBGBDIFDE_LFPBONPJNDB_OFFSET UNITYSDK_OFFSET(0x1162A080)
#define BPCBGBDIFDE_LHIMBNGILLD_OFFSET UNITYSDK_OFFSET(0x116182F0)
#define BPCBGBDIFDE_LIPIABBELBN_OFFSET UNITYSDK_OFFSET(0x11610040)
#define BPCBGBDIFDE_LJFKNDPKJCG_OFFSET UNITYSDK_OFFSET(0x11616340)
#define BPCBGBDIFDE_LNFKHECINDE_OFFSET UNITYSDK_OFFSET(0x11606EA0)
#define BPCBGBDIFDE_MAONFFLFHIJ_OFFSET UNITYSDK_OFFSET(0x11629C20)
#define BPCBGBDIFDE_MCKDFPLBCPO_OFFSET UNITYSDK_OFFSET(0x11610FB0)
#define BPCBGBDIFDE_MDJGHGDABNI_OFFSET UNITYSDK_OFFSET(0x1162C070)
#define BPCBGBDIFDE_MECFNAOHOIE_OFFSET UNITYSDK_OFFSET(0x11625FD0)
#define BPCBGBDIFDE_MELKJHANODB_OFFSET UNITYSDK_OFFSET(0x1160A830)
#define BPCBGBDIFDE_MOEHNAAGDCJ_OFFSET UNITYSDK_OFFSET(0x1162E3F0)
#define BPCBGBDIFDE_MPAKIAPPFNK_OFFSET UNITYSDK_OFFSET(0x11613D10)
#define BPCBGBDIFDE_NCLODMMJDLH_OFFSET UNITYSDK_OFFSET(0x1161B200)
#define BPCBGBDIFDE_NDHAJAKMFPC_OFFSET UNITYSDK_OFFSET(0x1160B270)
#define BPCBGBDIFDE_NDPEBMGPDPH_OFFSET UNITYSDK_OFFSET(0x11626080)
#define BPCBGBDIFDE_NIFAOOBCOPJ_OFFSET UNITYSDK_OFFSET(0x1162D310)
#define BPCBGBDIFDE_NLHALAHHAOI_OFFSET UNITYSDK_OFFSET(0x1162A5D0)
#define BPCBGBDIFDE_NODEKKFJBDC_OFFSET UNITYSDK_OFFSET(0x1161BF90)
#define BPCBGBDIFDE_OACAJPAELGP_OFFSET UNITYSDK_OFFSET(0x1162E550)
#define BPCBGBDIFDE_OAIPAOINLNC_OFFSET UNITYSDK_OFFSET(0x1161E190)
#define BPCBGBDIFDE_OBJABEKGHOE_OFFSET UNITYSDK_OFFSET(0x116295F0)
#define BPCBGBDIFDE_ODCPIMJIKBO_OFFSET UNITYSDK_OFFSET(0x116044E0)
#define BPCBGBDIFDE_OEHLOCHLEMB_OFFSET UNITYSDK_OFFSET(0x1162EDD0)
#define BPCBGBDIFDE_OGEGKMNGJPP_OFFSET UNITYSDK_OFFSET(0x1161E060)
#define BPCBGBDIFDE_OHKCAJGOHND_OFFSET UNITYSDK_OFFSET(0x1162C1B0)
#define BPCBGBDIFDE_OHPEOMBLMAE_OFFSET UNITYSDK_OFFSET(0x11620250)
#define BPCBGBDIFDE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1162CF00)
#define BPCBGBDIFDE_OLIEENLGFDB_OFFSET UNITYSDK_OFFSET(0x11625960)
#define BPCBGBDIFDE_OMCANIMGCFM_OFFSET UNITYSDK_OFFSET(0x11624450)
#define BPCBGBDIFDE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x11605BB0)
#define BPCBGBDIFDE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x11606820)
#define BPCBGBDIFDE_ONHNMGPLNPK_OFFSET UNITYSDK_OFFSET(0x11628650)
#define BPCBGBDIFDE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x11606770)
#define BPCBGBDIFDE_OPJDCAKDDJB_OFFSET UNITYSDK_OFFSET(0x116072B0)
#define BPCBGBDIFDE_PAEBCDCAHIA_OFFSET UNITYSDK_OFFSET(0x11627C90)
#define BPCBGBDIFDE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11604F90)
#define BPCBGBDIFDE_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x1162C710)
#define BPCBGBDIFDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11606E60)
#define BPCBGBDIFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x116068D0)

inline static constexpr unsigned int BPCBGBDIFDE_TypeDefinitionIndex = 78640;

class BPCBGBDIFDE : public ::PBJOCICFNGK
{
public:
	static ::System::Int32* StaticGet_HPHALPPLKEL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10040);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_AEGLKKNFODD()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10044);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_BKBBMGDECAO()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10048);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet_FMEJJJAFKKO()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10058);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_EOHNGDPCDGA()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10068);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_JCDDMCJMJFO()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10078);
	}
	static ::System::Single* StaticGet_AABDJALAEAD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10088);
	}
	static ::System::Single* StaticGet_EEEEJHBHCAF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x1008C);
	}
	static ::System::Int32* StaticGet_JOHLLDIACMH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10090);
	}
	static ::Unity::Collections::NativeArray_1<::System::Single>* StaticGet_JNICJMIEIEM()
	{
		return (::Unity::Collections::NativeArray_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x10098);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_IBKKKIGGMHA()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100A8);
	}
	static ::Unity::Collections::NativeArray_1<::System::IntPtr>* StaticGet_OHJCLNIJLLO()
	{
		return (::Unity::Collections::NativeArray_1<::System::IntPtr>*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100B8);
	}
	static ::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate* StaticGet_IEFKGFFPEII()
	{
		return (::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100C8);
	}
	static ::System::Boolean* StaticGet_ILFKKGACODK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100E8);
	}
	static ::System::Boolean* StaticGet_MAACLJKHOEO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100E9);
	}
	static ::System::Boolean* StaticGet_GDDALFMJNPK()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100EA);
	}
	static ::System::Single* StaticGet_PJHKPJALFEK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x100EC);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_CAGFBFDLJGI()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(BPCBGBDIFDE_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 DHENEPPOLNN = 0x8; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* DCNODAGBFPA; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::SphereCameraConfig*>* CIMMGOHKGPJ; // 0x58
	::DBMAHDDGMHM_1<::UnityEngine::NAPRenderPipeline0::RTHandle*>* KMOCNMKJNKH; // 0x60
	::CDLADONELEK* IBBPMJHBFDH; // 0x68
	::System::Collections::Generic::List_1<::GLAAJLGNEGP*>* OLJODHILMCO; // 0x70
	::UnityEngine::RectTransform* CKBLHBCKOPC; // 0x78
	::DBMAHDDGMHM_1<::System::Single>* JDAFGDKOEKH; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea>* MHLOGEJCFBO; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::DG::Tweening::Tween*>* PHPAIDHHEJO; // 0x90
	::System::Collections::Generic::HashSet_1<::GLAAJLGNEGP*>* JJGPLLIGFNO; // 0x98
	::MonoSceneMap3DConfig* OGFFLAOKBMA; // 0xA0
	::BOALGPJCKIE* BENGHMCHNLI; // 0xA8
	::DBMAHDDGMHM_1<::System::Object*>* JDEIDICJNOK; // 0xB0
	::UnityEngine::RectTransform* JPMJCCNKPGG; // 0xB8
	::DBMAHDDGMHM_1<::MoleMole::UIUrbanMap3DModelContext*>* DAAAEJDBNFI; // 0xC0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea>* IDLMHGCHJOD; // 0xC8
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect* HJBAEJGNEKA; // 0xD0
	::DBMAHDDGMHM_1<::System::Boolean>* HOMIJPHKDGP; // 0xD8
	::Il2CppArray<::UnityEngine::Vector3>* IICCIFLPOID; // 0xE0
	::MoleMole::ConfigUIUrbanMap* LJFPGNPJNBE; // 0xE8
	::System::Collections::Generic::List_1<::GLAAJLGNEGP*>* JABMNOEEBHP; // 0xF0
	::MoleMole::UIBaseController* EGLDNKPNJCM; // 0xF8
	::UnityEngine::RectTransform* POBDCDCDPFF; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Queue_1<::GLAAJLGNEGP*>*>* JEGCMNFJEJN; // 0x108
	::MoleMole::Cameras::CameraTrackBlending* IIHNKHKMHLA; // 0x110
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BIJINKDOEEF; // 0x118
	::UnityEngine::Rendering::Volume* NHLHFHGJFAN; // 0x120
	::NMANHEHIJAL_1<::NMANHEHIJAL_1<::System::Object*>*>* BEMLALKKCHK; // 0x128
	::DG::Tweening::Tweener* BCONIFAHEKL; // 0x130
	::UnityEngine::Transform* MCMGNHAPPBH; // 0x138
	::BPCBGBDIFDE_NEOJPFIKEOA* GBAJGLFLGJE; // 0x140
	::Il2CppArray<::MoleMole::MapGroupMemberStateConfig*>* PFJNMJONMAL; // 0x148
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* BNHHEEPOIPH; // 0x150
	::UnityEngine::RectTransform* GKBMCOJMCHI; // 0x158
	::UnityEngine::RectTransform* EMJCIMFBMOB; // 0x160
	::OFPJBGCDOMK* FLPPAPCGHBP; // 0x168
	::DG::Tweening::Tweener* PMCIBBJMDDM; // 0x170
	::Il2CppArray<::UnityEngine::Vector3>* CLBIDEIINPL; // 0x178
	::System::UInt64 PBPLKNENGDN; // 0x180
	::UnityEngine::Vector2 PFDCHIDIJPB; // 0x188
	::System::Single IBHKAJCEEEC; // 0x190
	::System::Boolean JCIHBIDMOFF; // 0x194
	::System::Boolean HAKGIJDNJJE; // 0x195
	::System::Boolean LDBHBGINIOH; // 0x196
	::System::Boolean IGECMINMGPL; // 0x197
	::UnityEngine::Vector2 AFNLKADNBAM; // 0x198
	::System::Single HONNDJJFEDB; // 0x1A0
	::System::Boolean MKFBGJCHPDL; // 0x1A4
	::System::Boolean NAMGCHBNIBB; // 0x1A5
	::System::Boolean PEKGPPOJDDN; // 0x1A6
	::System::Boolean GBLIDELCMDE; // 0x1A7
	::System::Boolean LMJINJOPBPH; // 0x1A8
	::System::Boolean MIENEHBEAPF; // 0x1A9
	::System::Byte _padding0[0x2];
	::System::Single BADOALIIIBO; // 0x1AC
	::UnityEngine::Vector2 DOKIKBNHIPD; // 0x1B0
	::System::Boolean LMIFEFKCJAF; // 0x1B8
	::System::Boolean PLFBHLDHONM; // 0x1B9
	::System::Boolean CILGPEGDPGB; // 0x1BA
	::System::Byte _padding1[0x1];
	::System::Nullable_1<::System::Single> BBLDONNBHDE; // 0x1BC
	::System::Single EBHPCFDJFNE; // 0x1C4
	::System::Single AHKGJCJFGIF; // 0x1C8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBGBDIFDE__CCTOR_OFFSET))();
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OnClick(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD, ::UnityEngine::Vector2 ILOHHLNGEHM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ONCLICK_OFFSET))(this, DIHNFECKHMD, ILOHHLNGEHM);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* NLKGNMKCCBK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ONSCROLL_OFFSET))(this, NLKGNMKCCBK);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ONDRAG_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void LNFKHECINDE(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LNFKHECINDE_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void GBHHBGCOMLH(::MoleMole::Config::SceneConfigRuntimeDataArea EIFONLCJOPG, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GBHHBGCOMLH_OFFSET))(this, EIFONLCJOPG, DEBGKPLOPCG);
	}

	::System::Int32 MELKJHANODB(::GLAAJLGNEGP* HAAEBCOBKFF, ::GLAAJLGNEGP* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::GLAAJLGNEGP*, ::GLAAJLGNEGP*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MELKJHANODB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Single IIGLKGBCCLJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IIGLKGBCCLJ_OFFSET))(this);
	}

	::System::Boolean NDHAJAKMFPC(::GLAAJLGNEGP* HELLOIIPKGF, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLAAJLGNEGP*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NDHAJAKMFPC_OFFSET))(this, HELLOIIPKGF, HODAIDNDKHD);
	}

	::UnityEngine::Bounds EPNOLOAOIBJ(::System::Int32 MNDIBLLFAJI, ::System::Boolean JHHBPPHCCMG)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EPNOLOAOIBJ_OFFSET))(this, MNDIBLLFAJI, JHHBPPHCCMG);
	}

	::System::Boolean LIPIABBELBN(::UnityEngine::Vector2 HLFFCMIFFIB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LIPIABBELBN_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Boolean AMGIDGDECNN(::LBIHDBHFJKE* ANEHBNPMIGI, ::System::Boolean KKLAAGELBHK, ::System::Single ENEPLBHMAAC, ::System::Single& FBFBHAMEGOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::LBIHDBHFJKE*, ::System::Boolean, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_AMGIDGDECNN_OFFSET))(this, ANEHBNPMIGI, KKLAAGELBHK, ENEPLBHMAAC, FBFBHAMEGOC);
	}

	::System::Int32 INHMIHAHEEE(::System::Collections::Generic::IList_1<::LBIHDBHFJKE*>* DJLOKMMLFJC, ::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::LBIHDBHFJKE*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_INHMIHAHEEE_OFFSET))(this, DJLOKMMLFJC, CKPGOKHECCH);
	}

	::System::Void MCKDFPLBCPO(::UnityEngine::Rect MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MCKDFPLBCPO_OFFSET))(this, MGOFOAFCFIJ);
	}

	::System::Void DDABOLEGNAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DDABOLEGNAC_OFFSET))(this);
	}

	::System::Void JJCFGCEHKMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JJCFGCEHKMB_OFFSET))(this);
	}

	::UnityEngine::Vector3 JEJGHFALALP(::UnityEngine::Vector3 MAJLHHJCBOP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JEJGHFALALP_OFFSET))(this, MAJLHHJCBOP);
	}

	::System::Void IGHPLHCFHCE(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IGHPLHCFHCE_OFFSET))(this, EJGDHCIBCJH);
	}

	::Cysharp::Threading::Tasks::UniTask IABGFCJPJPO(::System::Int32 ALHGJFMFPJK, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IABGFCJPJPO_OFFSET))(this, ALHGJFMFPJK, AMIDHEAIANO);
	}

	::System::Void FHPNBFDGBAN(::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FHPNBFDGBAN_OFFSET))(this, EEGBEFGJJBM);
	}

	::System::Void DBDDPPKFDHC(::UnityEngine::Vector2 FMBGGHLKAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DBDDPPKFDHC_OFFSET))(this, FMBGGHLKAHI);
	}

	::System::Void LHIMBNGILLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LHIMBNGILLD_OFFSET))(this);
	}

	::System::Void LJFKNDPKJCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LJFKNDPKJCG_OFFSET))(this);
	}

	::System::Void ADDHAKDDJMG(::MoleMole::Config::SceneConfigRuntimeDataArea EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ADDHAKDDJMG_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BPPOINLBFEK(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* GEMCGGINMBE, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_BPPOINLBFEK_OFFSET))(this, GEMCGGINMBE, MCOHLHMKLIP);
	}

	::NHHJOAHKHAB* NCLODMMJDLH(::System::Int32 KLJNHMGMDNP)
	{
		return ((::NHHJOAHKHAB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NCLODMMJDLH_OFFSET))(this, KLJNHMGMDNP);
	}

	::MALOGCCEPHE* FCJCFIHFAIG(::System::Int32 ECAFPALMHLI)
	{
		return ((::MALOGCCEPHE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FCJCFIHFAIG_OFFSET))(this, ECAFPALMHLI);
	}

	::System::Void FCLFIKKPCDB(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD, ::UnityEngine::Vector2 ILOHHLNGEHM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FCLFIKKPCDB_OFFSET))(this, DIHNFECKHMD, ILOHHLNGEHM);
	}

	::System::Void IHCFOIJOAKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IHCFOIJOAKH_OFFSET))(this);
	}

	::System::Void ADNPOPDLPPJ(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* OFIGCGFLFHK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ADNPOPDLPPJ_OFFSET))(this, OFIGCGFLFHK);
	}

	::System::Void NODEKKFJBDC(::UnityEngine::Vector2 FMBGGHLKAHI, ::UnityEngine::Vector2 IDFPMOGMIGN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NODEKKFJBDC_OFFSET))(this, FMBGGHLKAHI, IDFPMOGMIGN);
	}

	::Map3DFogItem* DHBDNJGCLKL(::System::String* MNDIBLLFAJI)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DHBDNJGCLKL_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Collections::Generic::List_1<::GLAAJLGNEGP*>* IAHCJBJIOKD()
	{
		return ((::System::Collections::Generic::List_1<::GLAAJLGNEGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IAHCJBJIOKD_OFFSET))(this);
	}

	::System::Void DOFNLNAGDOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DOFNLNAGDOC_OFFSET))(this);
	}

	::System::Void FPEIHBFFCNG(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA EIFONLCJOPG, ::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FPEIHBFFCNG_OFFSET))(this, EIFONLCJOPG, IAKPGBCAAKM);
	}

	::DBMAHDDGMHM_1<::System::Single>* JEGJAEGEMGF()
	{
		return ((::DBMAHDDGMHM_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JEGJAEGEMGF_OFFSET))(this);
	}

	::System::Single OGEGKMNGJPP(::System::String* LIFIDOINPKP)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OGEGKMNGJPP_OFFSET))(this, LIFIDOINPKP);
	}

	::System::Void OAIPAOINLNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OAIPAOINLNC_OFFSET))(this);
	}

	::GLAAJLGNEGP* ALLCEHHPIEJ(::UnityEngine::Vector2 ILOHHLNGEHM)
	{
		return ((::GLAAJLGNEGP*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ALLCEHHPIEJ_OFFSET))(this, ILOHHLNGEHM);
	}

	::System::Void GMPHEFOPMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GMPHEFOPMLM_OFFSET))(this);
	}

	::System::Void OHPEOMBLMAE(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OHPEOMBLMAE_OFFSET))(this, KMOHKCADPNA);
	}

	::System::Void EIHGCFNMEOK(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EIHGCFNMEOK_OFFSET))(this, KDDJHNKKCAG);
	}

	::System::Int32 JDFOIHIMMEN(::System::Int32 FPBJKINKGDG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JDFOIHIMMEN_OFFSET))(this, FPBJKINKGDG);
	}

	::System::Void OLIEENLGFDB(::UnityEngine::EventSystems::BaseEventData* DIHNFECKHMD, ::UnityEngine::Vector2 ILOHHLNGEHM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OLIEENLGFDB_OFFSET))(this, DIHNFECKHMD, ILOHHLNGEHM);
	}

	static ::System::Void ODCPIMJIKBO(::System::Int32 LJBPECKCCEA)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ODCPIMJIKBO_OFFSET))(LJBPECKCCEA);
	}

	::System::Void IMMCGLANEBI(::System::Int32 KLJNHMGMDNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IMMCGLANEBI_OFFSET))(this, KLJNHMGMDNP);
	}

	::Cysharp::Threading::Tasks::UniTask MECFNAOHOIE(::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MECFNAOHOIE_OFFSET))(this, AMIDHEAIANO);
	}

	::UnityEngine::Vector2 NDPEBMGPDPH(::UnityEngine::Vector2 LFLJMBPFLDI, ::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Single KILPCOMOCMD, ::System::Single BBCODANAFGI, ::System::Single KBHFBLJPFJH, ::System::Single DGMGMEICCGE, ::UnityEngine::Vector2 NFNINGLADNJ)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NDPEBMGPDPH_OFFSET))(this, LFLJMBPFLDI, HBEKKMCBGBK, KILPCOMOCMD, BBCODANAFGI, KBHFBLJPFJH, DGMGMEICCGE, NFNINGLADNJ);
	}

	::System::Void DMGPIEEFHCI(::Map3DFogItem* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DMGPIEEFHCI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void AOMKILNJNJF(::System::Collections::Generic::List_1<::System::Object*>* OELNIEFKFKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_AOMKILNJNJF_OFFSET))(this, OELNIEFKFKB);
	}

	::System::Void DJOIBDBNBMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DJOIBDBNBMO_OFFSET))(this);
	}

	::System::Void PAEBCDCAHIA(::UnityEngine::EventSystems::PointerEventData* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_PAEBCDCAHIA_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Single DJDJFHMDABM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DJDJFHMDABM_OFFSET))(this);
	}

	::System::Void ADALGLPDMIP(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ADALGLPDMIP_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void IHACFOMPKAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IHACFOMPKAA_OFFSET))(this);
	}

	::System::Void LFGCKGHFLBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LFGCKGHFLBI_OFFSET))(this);
	}

	::System::Void BKAEGEFIKKK(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_BKAEGEFIKKK_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void HPFBKDABCJA(::System::Int32 OAPBKPMLLLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HPFBKDABCJA_OFFSET))(this, OAPBKPMLLLJ);
	}

	::System::Void HGOFINENHAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HGOFINENHAG_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UIUrbanMap3DModelContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::LHGLNFHJEHK* MAONFFLFHIJ(::Foundation::ViewObject::GroupMemberIdentifier OIEMPMGCNPD)
	{
		return ((::LHGLNFHJEHK*(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MAONFFLFHIJ_OFFSET))(this, OIEMPMGCNPD);
	}

	::System::Void MPAKIAPPFNK(::GLAAJLGNEGP* HELLOIIPKGF, ::OLPPOJJADDO GAJMDEOPEDE)
	{
		return ((::System::Void(*)(::PVOID, ::GLAAJLGNEGP*, ::OLPPOJJADDO))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MPAKIAPPFNK_OFFSET))(this, HELLOIIPKGF, GAJMDEOPEDE);
	}

	::System::Boolean CDEPOAEKJHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CDEPOAEKJHK_OFFSET))(this);
	}

	::System::Void LFPBONPJNDB(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* OFIGCGFLFHK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LFPBONPJNDB_OFFSET))(this, OFIGCGFLFHK);
	}

	::System::Int32 NLHALAHHAOI(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA FHEJELHALJE, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA HNHFLCJLMMO)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NLHALAHHAOI_OFFSET))(this, FHEJELHALJE, HNHFLCJLMMO);
	}

	::System::Void EJCPCONIDEM(::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EJCPCONIDEM_OFFSET))(this, KMOHKCADPNA);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> EEDGCFNOCCI(::UnityEngine::Bounds FIPBKPCHPAL)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EEDGCFNOCCI_OFFSET))(this, FIPBKPCHPAL);
	}

	::System::Void CGPGPBMFDPP(::System::Single MCJNJJFKIDO, ::System::Single MJILMIEGKLH, ::System::Single MDPPNMIPDMP, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CGPGPBMFDPP_OFFSET))(this, MCJNJJFKIDO, MJILMIEGKLH, MDPPNMIPDMP, MBNOFPBEFAO);
	}

	::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo OMCANIMGCFM()
	{
		return ((::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OMCANIMGCFM_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> GAMPDFKLDJD(::System::Nullable_1<::UnityEngine::Vector3> OELNABJCBMI, ::MoleMole::SphereCameraConfig* NOAIEEEDCON, ::LBIHDBHFJKE* ANEHBNPMIGI)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::MoleMole::SphereCameraConfig*, ::LBIHDBHFJKE*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GAMPDFKLDJD_OFFSET))(this, OELNABJCBMI, NOAIEEEDCON, ANEHBNPMIGI);
	}

	::System::Void DIOPAFIMLBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DIOPAFIMLBE_OFFSET))(this);
	}

	::System::Boolean KIDHBFBMHIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KIDHBFBMHIN_OFFSET))(this);
	}

	::BPCBGBDIFDE_KDCFMKHGLEM FLFCJLPMMII(::System::Int32 KMMGKJPAOMF, ::System::Int32 OLAHFMECDAI, ::System::String* EGNIEIAHPFH)
	{
		return ((::BPCBGBDIFDE_KDCFMKHGLEM(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FLFCJLPMMII_OFFSET))(this, KMMGKJPAOMF, OLAHFMECDAI, EGNIEIAHPFH);
	}

	::System::Boolean AOALEGDOPLM(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA MNDIBLLFAJI, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_AOALEGDOPLM_OFFSET))(this, MNDIBLLFAJI, NCCDJLDKFGA);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void OBJABEKGHOE(::System::Int32 MFIHJFIGJBP, ::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Camera* DPMFFFBLEDJ, ::MoleMole::UIBaseController* JNLBPMKIFNK, ::UnityEngine::RectTransform* NKAEPFPFLBC, ::UnityEngine::RectTransform* IAFMOGMFNHF, ::UnityEngine::RectTransform* BFJFBJOBFDM, ::UnityEngine::RectTransform* BHJDGOCPLNO, ::UnityEngine::RectTransform* HGHAKFDAIAA, ::System::Action* EJGDHCIBCJH, ::System::Boolean IDPGFGJKHEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OBJABEKGHOE_OFFSET))(this, MFIHJFIGJBP, IAPKABMDJNF, DPMFFFBLEDJ, JNLBPMKIFNK, NKAEPFPFLBC, IAFMOGMFNHF, BFJFBJOBFDM, BHJDGOCPLNO, HGHAKFDAIAA, EJGDHCIBCJH, IDPGFGJKHEK);
	}

	::System::Void IIAMKLNHDGM(::GLAAJLGNEGP* IPMMCGDMODG, ::UnityEngine::Vector3 PMMHPDOBJAC, ::System::Int32 ABHBKFJKINO, ::System::Single AHKGJCJFGIF, ::System::Single BADOALIIIBO)
	{
		return ((::System::Void(*)(::PVOID, ::GLAAJLGNEGP*, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IIAMKLNHDGM_OFFSET))(this, IPMMCGDMODG, PMMHPDOBJAC, ABHBKFJKINO, AHKGJCJFGIF, BADOALIIIBO);
	}

	::BFMLEHMAGAK_1<::PEMDFINAHEA>* BBJNDONMMNG(::GLAAJLGNEGP* HELLOIIPKGF)
	{
		return ((::BFMLEHMAGAK_1<::PEMDFINAHEA>*(*)(::PVOID, ::GLAAJLGNEGP*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_BBJNDONMMNG_OFFSET))(this, HELLOIIPKGF);
	}

	::System::Void FHMKJBHMENA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FHMKJBHMENA_OFFSET))(this);
	}

	::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3> EBKPMHMDPNM(::System::Int32 FPBJKINKGDG, ::System::Int32 JEANMAFKNNM, ::System::Int32 FNDAHENBAGJ)
	{
		return ((::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EBKPMHMDPNM_OFFSET))(this, FPBJKINKGDG, JEANMAFKNNM, FNDAHENBAGJ);
	}

	::GLAAJLGNEGP* ONHNMGPLNPK(::System::Int32 EFNNDDBFOMH)
	{
		return ((::GLAAJLGNEGP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_ONHNMGPLNPK_OFFSET))(this, EFNNDDBFOMH);
	}

	::System::Void MDJGHGDABNI(::System::Single EGEGIMGMJHN, ::System::Nullable_1<::UnityEngine::Vector2> CDKOPKNLEEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MDJGHGDABNI_OFFSET))(this, EGEGIMGMJHN, CDKOPKNLEEI);
	}

	::System::Void OHKCAJGOHND(::System::Boolean PAKOBHFGLEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OHKCAJGOHND_OFFSET))(this, PAKOBHFGLEE);
	}

	::System::Void DBOMJJMDCBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DBOMJJMDCBN_OFFSET))(this);
	}

	::System::Void HJJPJIIGKFK(::UnityEngine::Vector2 FMBGGHLKAHI, ::UnityEngine::Vector2 IDFPMOGMIGN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HJJPJIIGKFK_OFFSET))(this, FMBGGHLKAHI, IDFPMOGMIGN);
	}

	static ::System::Void FGFLADDMKCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCBGBDIFDE_FGFLADDMKCD_OFFSET))();
	}

	::UnityEngine::Vector3 EAOHJDBEKDJ(::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_EAOHJDBEKDJ_OFFSET))(this, BAECLPHLLHO);
	}

	::System::Nullable_1<::UnityEngine::Vector3> IMGJKLMFMFH(::MoleMole::MapGroupMemberStateConfig*& FKNKBPGOGLC, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::MapGroupMemberStateConfig*&, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IMGJKLMFMFH_OFFSET))(this, FKNKBPGOGLC, KMOHKCADPNA);
	}

	::System::Boolean HHMIKHDFGDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_HHMIKHDFGDJ_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void GNIOGMLPMNF(::System::Single EGEGIMGMJHN, ::UnityEngine::Vector3 ILOHHLNGEHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GNIOGMLPMNF_OFFSET))(this, EGEGIMGMJHN, ILOHHLNGEHM);
	}

	::System::Boolean OPJDCAKDDJB(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OPJDCAKDDJB_OFFSET))(this, CKPGOKHECCH, EEGBEFGJJBM);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IAHBCEHMAGD(::UnityEngine::Bounds FIPBKPCHPAL, ::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IAHBCEHMAGD_OFFSET))(this, FIPBKPCHPAL, EEGBEFGJJBM);
	}

	::System::Boolean CBFNDBIEKAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CBFNDBIEKAI_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean NIFAOOBCOPJ(::UnityEngine::Vector2 HLFFCMIFFIB, ::System::Boolean JKBELHGKJEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_NIFAOOBCOPJ_OFFSET))(this, HLFFCMIFFIB, JKBELHGKJEH);
	}

	::System::Single KMFCKCEPJMN(::UnityEngine::Vector3 HGKNEPKMMEG, ::System::Boolean CMJDMBDJFEM, ::System::Boolean KAFIFBIGEKH, ::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KMFCKCEPJMN_OFFSET))(this, HGKNEPKMMEG, CMJDMBDJFEM, KAFIFBIGEKH, MBNOFPBEFAO);
	}

	::System::Void DGLHIHMFCAL(::UnityEngine::Vector2 BJLPCKJAGDG, ::UnityEngine::Vector2 AONLKCJMGKB, ::UnityEngine::Vector2 HLPLHKBJMPL, ::UnityEngine::Vector2 AIJBDGACLPO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_DGLHIHMFCAL_OFFSET))(this, BJLPCKJAGDG, AONLKCJMGKB, HLPLHKBJMPL, AIJBDGACLPO);
	}

	::System::Boolean MOEHNAAGDCJ(::System::Int32 ALHGJFMFPJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_MOEHNAAGDCJ_OFFSET))(this, ALHGJFMFPJK);
	}

	::System::Void OACAJPAELGP(::UnityEngine::EventSystems::PointerEventData* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OACAJPAELGP_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean CPLIOBFPJMM(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_CPLIOBFPJMM_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JDFCEKNDKGI(::System::Int32 EEGBEFGJJBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JDFCEKNDKGI_OFFSET))(this, EEGBEFGJJBM);
	}

	::UnityEngine::Vector3 JIIFFOFLOAB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_JIIFFOFLOAB_OFFSET))(this);
	}

	::System::Void GKCJNFDBGNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GKCJNFDBGNL_OFFSET))(this);
	}

	::System::Boolean LBBFAEBPCGH(::GLAAJLGNEGP* HELLOIIPKGF, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLAAJLGNEGP*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_LBBFAEBPCGH_OFFSET))(this, HELLOIIPKGF, HODAIDNDKHD);
	}

	::System::Void GEELILGCMHC(::LBIHDBHFJKE* ANEHBNPMIGI, ::UnityEngine::Vector3 IMOCOJIJOMD, ::MoleMole::SphereCameraConfig* NOAIEEEDCON, ::System::Boolean CCGFFPNHIKE, ::System::Single NLCHAMBPKCF, ::UnityEngine::Vector3 BFBELMDIAHI, ::UnityEngine::Bounds FIPBKPCHPAL, ::System::Single BHPHKIKEJJM, ::System::Single BDEDDEGJFKL, ::UnityEngine::Rect NKCJCNBICEN, ::UnityEngine::Vector2 FJGOKNAJPDA, ::System::Boolean HFLIAJNLHJH)
	{
		return ((::System::Void(*)(::PVOID, ::LBIHDBHFJKE*, ::UnityEngine::Vector3, ::MoleMole::SphereCameraConfig*, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GEELILGCMHC_OFFSET))(this, ANEHBNPMIGI, IMOCOJIJOMD, NOAIEEEDCON, CCGFFPNHIKE, NLCHAMBPKCF, BFBELMDIAHI, FIPBKPCHPAL, BHPHKIKEJJM, BDEDDEGJFKL, NKCJCNBICEN, FJGOKNAJPDA, HFLIAJNLHJH);
	}

	::System::Void BALFCLABIOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_BALFCLABIOP_OFFSET))(this);
	}

	::System::Void OEHLOCHLEMB(::UnityEngine::Vector2 HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OEHLOCHLEMB_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void GAOCICGKDAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GAOCICGKDAG_OFFSET))(this);
	}

	::System::Void BMMLKODFJLI(::System::Int32 OAPBKPMLLLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_BMMLKODFJLI_OFFSET))(this, OAPBKPMLLLJ);
	}
};
