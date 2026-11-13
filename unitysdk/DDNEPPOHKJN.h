#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisibleReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingBlockType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/Client/Stage.h"
#include "unitysdk/RPG/Client/StageResourceUnloadPolicy.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/NNBOAOJBOFC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CELDMKCEPAO;
class COGBNIGPJPO;
class DIFMKJMFKOK;
class HPKACEPPPCA;
class IDCOKMGFCGJ;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class LJLDEDPLHIL;
class NEOBJJIOBFP;
class PKLOMDCOKOC;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class TemporarySubStageConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define DDNEPPOHKJN_ACTIVEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x17748900)
#define DDNEPPOHKJN_ADDENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0x17749A50)
#define DDNEPPOHKJN_ADDMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17749820)
#define DDNEPPOHKJN_ADDSTREAMINGSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1774C520)
#define DDNEPPOHKJN_ADDSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1774C300)
#define DDNEPPOHKJN_AEDOLELMFMF_OFFSET UNITYSDK_OFFSET(0x1774E720)
#define DDNEPPOHKJN_CCLILCKLKDI_OFFSET UNITYSDK_OFFSET(0x1774DB30)
#define DDNEPPOHKJN_CLEARADDITIONCENTERS_OFFSET UNITYSDK_OFFSET(0x1774C840)
#define DDNEPPOHKJN_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x177491D0)
#define DDNEPPOHKJN_CLEARSIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x17747E30)
#define DDNEPPOHKJN_COLLECTBLOCKSBYTAG_1_OFFSET UNITYSDK_OFFSET(0x17747CB0)
#define DDNEPPOHKJN_COLLECTBLOCKSBYTAG_OFFSET UNITYSDK_OFFSET(0x177479E0)
#define DDNEPPOHKJN_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET UNITYSDK_OFFSET(0x17747AB0)
#define DDNEPPOHKJN_CPNLBGAFAJN_OFFSET UNITYSDK_OFFSET(0x1774D680)
#define DDNEPPOHKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1774E730)
#define DDNEPPOHKJN_DCHOBKCEBCF_OFFSET UNITYSDK_OFFSET(0x1774DFD0)
#define DDNEPPOHKJN_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0x17746BB0)
#define DDNEPPOHKJN_DEBUGSETAREADELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x1774BA70)
#define DDNEPPOHKJN_DESTROY_OFFSET UNITYSDK_OFFSET(0x177480C0)
#define DDNEPPOHKJN_DFBKNGDBDFC_OFFSET UNITYSDK_OFFSET(0x1774DF00)
#define DDNEPPOHKJN_DFLALJCEPMH_OFFSET UNITYSDK_OFFSET(0x17747650)
#define DDNEPPOHKJN_DMPCFOMKOEA_OFFSET UNITYSDK_OFFSET(0x1774D250)
#define DDNEPPOHKJN_DOIJFFPLAEP_OFFSET UNITYSDK_OFFSET(0x177482A0)
#define DDNEPPOHKJN_EMMPFHJLDGK_OFFSET UNITYSDK_OFFSET(0x1774AB70)
#define DDNEPPOHKJN_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET UNITYSDK_OFFSET(0x1774B040)
#define DDNEPPOHKJN_ENABLESTREAMINGDEBUGSCRIPT_OFFSET UNITYSDK_OFFSET(0x1774AB30)
#define DDNEPPOHKJN_ENDOFTICK_OFFSET UNITYSDK_OFFSET(0x177467E0)
#define DDNEPPOHKJN_FNEMOIMAHGC_OFFSET UNITYSDK_OFFSET(0x1774D200)
#define DDNEPPOHKJN_FORCEACTIVEBLOCKSENTITY_OFFSET UNITYSDK_OFFSET(0x17746FA0)
#define DDNEPPOHKJN_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET UNITYSDK_OFFSET(0x17749990)
#define DDNEPPOHKJN_FOREACHSTREAMINGBLOCKS_OFFSET UNITYSDK_OFFSET(0x17747BD0)
#define DDNEPPOHKJN_GETALIASINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0x17748B00)
#define DDNEPPOHKJN_GETALIASITEMDATA_OFFSET UNITYSDK_OFFSET(0x17748EF0)
#define DDNEPPOHKJN_GETALIASITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x177493B0)
#define DDNEPPOHKJN_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET UNITYSDK_OFFSET(0x17748D20)
#define DDNEPPOHKJN_GETPERSISTENTINSTOBJ_OFFSET UNITYSDK_OFFSET(0x177492C0)
#define DDNEPPOHKJN_GETPERSISTENTTAGROOT_OFFSET UNITYSDK_OFFSET(0x177478F0)
#define DDNEPPOHKJN_GETRANGEENTITY_OFFSET UNITYSDK_OFFSET(0x1774BBB0)
#define DDNEPPOHKJN_GETSHAREDALIASITEMDATALIST_OFFSET UNITYSDK_OFFSET(0x17748FC0)
#define DDNEPPOHKJN_GETTRANSFORMTOOL_OFFSET UNITYSDK_OFFSET(0x1774A690)
#define DDNEPPOHKJN_GET_OPENWORLD_OFFSET UNITYSDK_OFFSET(0x1774AFC0)
#define DDNEPPOHKJN_HGCNKNJDIFK_OFFSET UNITYSDK_OFFSET(0x177487E0)
#define DDNEPPOHKJN_HHKIMALLFKG_OFFSET UNITYSDK_OFFSET(0x17749630)
#define DDNEPPOHKJN_HPMMENFFBJG_OFFSET UNITYSDK_OFFSET(0x17747120)
#define DDNEPPOHKJN_IHJOKIBBBNP_OFFSET UNITYSDK_OFFSET(0x1774E3D0)
#define DDNEPPOHKJN_IKOFJBHGDKJ_OFFSET UNITYSDK_OFFSET(0x17745990)
#define DDNEPPOHKJN_INACTIVEENVIROMENT_OFFSET UNITYSDK_OFFSET(0x177489F0)
#define DDNEPPOHKJN_INITBATTLEAREA_OFFSET UNITYSDK_OFFSET(0x17746140)
#define DDNEPPOHKJN_INITOPENWORLD_OFFSET UNITYSDK_OFFSET(0x17745BC0)
#define DDNEPPOHKJN_INITREGIONMANAGER_OFFSET UNITYSDK_OFFSET(0x17745F60)
#define DDNEPPOHKJN_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET UNITYSDK_OFFSET(0x17747EC0)
#define DDNEPPOHKJN_IPIFOGBNLFM_OFFSET UNITYSDK_OFFSET(0x1774CEB0)
#define DDNEPPOHKJN_ISBATTLEAREALOADFINISH_OFFSET UNITYSDK_OFFSET(0x17746B00)
#define DDNEPPOHKJN_ISSTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0x17746A10)
#define DDNEPPOHKJN_JDOEJFOIEEO_OFFSET UNITYSDK_OFFSET(0x177473C0)
#define DDNEPPOHKJN_JOMIEIJOKMD_OFFSET UNITYSDK_OFFSET(0x1774CAD0)
#define DDNEPPOHKJN_KCAHOLBBODH_OFFSET UNITYSDK_OFFSET(0x1774D570)
#define DDNEPPOHKJN_KHDIFBJMDHH_OFFSET UNITYSDK_OFFSET(0x1774DC00)
#define DDNEPPOHKJN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17746740)
#define DDNEPPOHKJN_LILLCHPEHAB_OFFSET UNITYSDK_OFFSET(0x1774A850)
#define DDNEPPOHKJN_LKAJOFNECJI_OFFSET UNITYSDK_OFFSET(0x1774E600)
#define DDNEPPOHKJN_LOADAREA_OFFSET UNITYSDK_OFFSET(0x1774B970)
#define DDNEPPOHKJN_LOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x17747D80)
#define DDNEPPOHKJN_LOAD_OFFSET UNITYSDK_OFFSET(0x177453E0)
#define DDNEPPOHKJN_LOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1774C900)
#define DDNEPPOHKJN_MPIEMLMFNAP_OFFSET UNITYSDK_OFFSET(0x1774CEC0)
#define DDNEPPOHKJN_NJAOEMKNGGG_OFFSET UNITYSDK_OFFSET(0x1774E500)
#define DDNEPPOHKJN_OMLJAOHHOBG_OFFSET UNITYSDK_OFFSET(0x1774E110)
#define DDNEPPOHKJN_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x177461D0)
#define DDNEPPOHKJN_ONMONOEFFECTPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1774A3D0)
#define DDNEPPOHKJN_PIMJGMEBAIB_OFFSET UNITYSDK_OFFSET(0x1774AD80)
#define DDNEPPOHKJN_PREINITOPENWORLD_OFFSET UNITYSDK_OFFSET(0x177459E0)
#define DDNEPPOHKJN_REMOVEADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0x1774C770)
#define DDNEPPOHKJN_REMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0x1774CA40)
#define DDNEPPOHKJN_REMOVEENTITYSTREAMING_OFFSET UNITYSDK_OFFSET(0x17749B40)
#define DDNEPPOHKJN_REMOVEMONOEFFECTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17749900)
#define DDNEPPOHKJN_RUNTIMEADDRENDERSTUB_1_OFFSET UNITYSDK_OFFSET(0x1774C030)
#define DDNEPPOHKJN_RUNTIMEADDRENDERSTUB_OFFSET UNITYSDK_OFFSET(0x1774BDB0)
#define DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_1_OFFSET UNITYSDK_OFFSET(0x17749DE0)
#define DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_2_OFFSET UNITYSDK_OFFSET(0x17749F90)
#define DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x17749C20)
#define DDNEPPOHKJN_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET UNITYSDK_OFFSET(0x1774ABB0)
#define DDNEPPOHKJN_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET UNITYSDK_OFFSET(0x1774ACA0)
#define DDNEPPOHKJN_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0x1774B7D0)
#define DDNEPPOHKJN_RUNTIMEREMOVERENDERSTUB_OFFSET UNITYSDK_OFFSET(0x1774BF40)
#define DDNEPPOHKJN_RUNTIMEREMOVESTREAMINGITEM_OFFSET UNITYSDK_OFFSET(0x1774A160)
#define DDNEPPOHKJN_RUNTIMESETSTREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x1774AA40)
#define DDNEPPOHKJN_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x1774A1F0)
#define DDNEPPOHKJN_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1774B2C0)
#define DDNEPPOHKJN_SETADDITIONCENTER_OFFSET UNITYSDK_OFFSET(0x1774C210)
#define DDNEPPOHKJN_SETALLBLOCKVISIBILITYREASONACTIVE_OFFSET UNITYSDK_OFFSET(0x1774B700)
#define DDNEPPOHKJN_SETBLOCKFOCUSWITHNAMES_OFFSET UNITYSDK_OFFSET(0x1774BCE0)
#define DDNEPPOHKJN_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET UNITYSDK_OFFSET(0x17746ED0)
#define DDNEPPOHKJN_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET UNITYSDK_OFFSET(0x17746E00)
#define DDNEPPOHKJN_SETBLOCKFORCEHLODWITHTAGS_OFFSET UNITYSDK_OFFSET(0x17746D30)
#define DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYALIAS_OFFSET UNITYSDK_OFFSET(0x1774B620)
#define DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYALLHOYOTAGS_OFFSET UNITYSDK_OFFSET(0x1774B540)
#define DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYHOYOTAG_OFFSET UNITYSDK_OFFSET(0x1774B460)
#define DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYTAG_OFFSET UNITYSDK_OFFSET(0x1774B380)
#define DDNEPPOHKJN_SETFORCESTREAMING_OFFSET UNITYSDK_OFFSET(0x1774A490)
#define DDNEPPOHKJN_SETMAPDEF_OFFSET UNITYSDK_OFFSET(0x17745790)
#define DDNEPPOHKJN_SETSHAREDALIASTASKVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x177490D0)
#define DDNEPPOHKJN_SETUNLOADENABLE_OFFSET UNITYSDK_OFFSET(0x17749580)
#define DDNEPPOHKJN_SHOWALLBLOCKS_OFFSET UNITYSDK_OFFSET(0x17747810)
#define DDNEPPOHKJN_SHOWAREAONLY_OFFSET UNITYSDK_OFFSET(0x1774B8B0)
#define DDNEPPOHKJN_SYNCPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x1774B100)
#define DDNEPPOHKJN_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17749480)
#define DDNEPPOHKJN_UNLOADALLRESOURCE_OFFSET UNITYSDK_OFFSET(0x177472E0)
#define DDNEPPOHKJN_UNLOADBATTLEAREABLOCK_OFFSET UNITYSDK_OFFSET(0x17746C80)
#define DDNEPPOHKJN_UNLOADPERSISTENTRESOURCE_OFFSET UNITYSDK_OFFSET(0x17747580)
#define DDNEPPOHKJN_UNLOADSTREAMINGRESOURCE_OFFSET UNITYSDK_OFFSET(0x17747070)
#define DDNEPPOHKJN_UNLOCKMAINSTREAMINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1774C9B0)
#define DDNEPPOHKJN_UNMARKALIASINSTANCE_OFFSET UNITYSDK_OFFSET(0x17748C20)
#define DDNEPPOHKJN_UNMARKALIASSTREAMINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x17748E20)
#define DDNEPPOHKJN_UPDATEITEMLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1774A300)
#define DDNEPPOHKJN_UPDATESTREAMINGLOADFINISH_OFFSET UNITYSDK_OFFSET(0x177465B0)
#define DDNEPPOHKJN_UPDATE_OFFSET UNITYSDK_OFFSET(0x177463D0)
#define DDNEPPOHKJN_VISIBLEPCONLYBLOCK_OFFSET UNITYSDK_OFFSET(0x1774A770)
#define DDNEPPOHKJN__UPDATEAFTEROPENWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x17745F00)

inline static constexpr unsigned int DDNEPPOHKJN_TypeDefinitionIndex = 71452;

	class DDNEPPOHKJN : public ::RPG::Client::Stage
	{
	public:
		::RPG::Client::Stage* EKDBGAEGDDK; // 0xC0
		::RPG::GameCore::StageConfig* PPAODDKLMMC; // 0xC8
		::COGBNIGPJPO* AHKGOLBMKIF; // 0xD0
		::RPG::Client::Stage* HPODNCAICPG; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Stage*>* CFOLJKEEKGL; // 0xE0
		::RPG::Client::Stage* MFGDACNLBMA; // 0xE8
		::RPG::Client::StageResourceUnloadPolicy DCLODBIJAJE; // 0xF0
		::System::Boolean GODFBKFLELA; // 0xF4
		::System::Boolean ABEFLHEBPFE; // 0xF5
		::System::Boolean HALMKMOBELL; // 0xF6
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LOAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetMapDef(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETMAPDEF_OFFSET))(this, a1);
		}

		::System::Boolean IKOFJBHGDKJ(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_IKOFJBHGDKJ_OFFSET))(this, a1);
		}

		::System::Void PreInitOpenWorld(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_PREINITOPENWORLD_OFFSET))(this, a1);
		}

		::System::Void InitOpenWorld(::NNBOAOJBOFC a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NNBOAOJBOFC, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_INITOPENWORLD_OFFSET))(this, a1, a2);
		}

		::System::Void InitRegionManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_INITREGIONMANAGER_OFFSET))(this);
		}

		::System::Void InitBattleArea(::PKLOMDCOKOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKLOMDCOKOC*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_INITBATTLEAREA_OFFSET))(this, a1);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ONENTERMAP_OFFSET))(this);
		}

		::System::Void Update(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UPDATE_OFFSET))(this, a1);
		}

		::System::Void UpdateStreamingLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UPDATESTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ENDOFTICK_OFFSET))(this, a1);
		}

		::System::Boolean IsStreamingLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ISSTREAMINGLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsBattleAreaLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ISBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Void DebugReportWhyNotBattleAreaLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DEBUGREPORTWHYNOTBATTLEAREALOADFINISH_OFFSET))(this);
		}

		::System::Void UnloadBattleAreaBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNLOADBATTLEAREABLOCK_OFFSET))(this);
		}

		::System::Void SetBlockForceHLODWithTags(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKFORCEHLODWITHTAGS_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHideExceptTagName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKFORCEHIDEEXCEPTTAGNAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetBlockForceHideExceptNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKFORCEHIDEEXCEPTNAMES_OFFSET))(this, a1, a2);
		}

		::System::Void ForceActiveBlocksEntity(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_FORCEACTIVEBLOCKSENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void UnloadStreamingResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNLOADSTREAMINGRESOURCE_OFFSET))(this);
		}

		::System::Void HPMMENFFBJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_HPMMENFFBJG_OFFSET))(this);
		}

		::System::Void UnloadAllResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNLOADALLRESOURCE_OFFSET))(this);
		}

		::System::Void JDOEJFOIEEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_JDOEJFOIEEO_OFFSET))(this);
		}

		::System::Void UnloadPersistentResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNLOADPERSISTENTRESOURCE_OFFSET))(this);
		}

		::System::Void DFLALJCEPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DFLALJCEPMH_OFFSET))(this);
		}

		::System::Void ShowAllBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SHOWALLBLOCKS_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetPersistentTagRoot(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETPERSISTENTTAGROOT_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_COLLECTBLOCKSBYTAG_OFFSET))(this, a1, a2);
		}

		::System::Void CollectStreamingBlockByNameSet(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1, ::System::Collections::Generic::ISet_1<::System::String*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_COLLECTSTREAMINGBLOCKBYNAMESET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ForeachStreamingBlocks(::System::Action_1<::KLEFGGIHGMI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KLEFGGIHGMI*>*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_FOREACHSTREAMINGBLOCKS_OFFSET))(this, a1);
		}

		::System::Void CollectBlocksByTag_1(::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_COLLECTBLOCKSBYTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void LoadBattleAreaBlock(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LOADBATTLEAREABLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void ClearSideEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CLEARSIDEEFFECT_OFFSET))(this);
		}

		::System::Void InvokeUnityGoLogicResetWithTAMono()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_INVOKEUNITYGOLOGICRESETWITHTAMONO_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DESTROY_OFFSET))(this);
		}

		::System::Void ActiveEnvironment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ACTIVEENVIRONMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InActiveEnviroment(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::OpenWorld::StreamingBlockType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::RPG::Client::OpenWorld::StreamingBlockType))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_INACTIVEENVIROMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* GetAliasInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETALIASINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnMarkAliasInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNMARKALIASINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::HPKACEPPPCA* GetAliasStreamingInstanceAndMark(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Boolean a5)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETALIASSTREAMINGINSTANCEANDMARK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void UnMarkAliasStreamingInstance(::System::String* a1, ::System::String* a2, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_2<::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNMARKALIASSTREAMINGINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::OpenWorld::StreamingItemData* GetAliasItemData(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETALIASITEMDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* GetSharedAliasItemDataList(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETSHAREDALIASITEMDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Void SetSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearSharedAliasTaskVisibleState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CLEARSHAREDALIASTASKVISIBLESTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetPersistentInstObj(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETPERSISTENTINSTOBJ_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetAliasItemGameObject(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETALIASITEMGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryRegisterRenderStubRebuildCallback(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Action_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_TRYREGISTERRENDERSTUBREBUILDCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetUnloadEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETUNLOADENABLE_OFFSET))(this, a1);
		}

		::System::Void HHKIMALLFKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_HHKIMALLFKG_OFFSET))(this, a1);
		}

		::System::Boolean AddMonoEffectStreaming(::CELDMKCEPAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CELDMKCEPAO*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ADDMONOEFFECTSTREAMING_OFFSET))(this, a1);
		}

		::System::Void RemoveMonoEffectStreaming(::CELDMKCEPAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELDMKCEPAO*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_REMOVEMONOEFFECTSTREAMING_OFFSET))(this, a1);
		}

		::System::Void ForceMonoEffectStreamingUpdate(::CELDMKCEPAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELDMKCEPAO*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_FORCEMONOEFFECTSTREAMINGUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean AddEntityStreaming(::IDCOKMGFCGJ* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDCOKMGFCGJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ADDENTITYSTREAMING_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveEntityStreaming(::IDCOKMGFCGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCOKMGFCGJ*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_REMOVEENTITYSTREAMING_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::GameObject* a5)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_1(::GEEOPFIMJEM a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::GameObject* a3, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a4, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::String* a7, ::System::Boolean a8, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a9, ::System::Boolean a10)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::GEEOPFIMJEM, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddStreamingItem_2(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::GameObject* a5, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a6, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a7, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* a8, ::System::String* a9, ::System::Boolean a10)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_3<::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEADDSTREAMINGITEM_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void RuntimeRemoveStreamingItem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEREMOVESTREAMINGITEM_OFFSET))(this, a1);
		}

		::System::Void RuntimeSetStreamingItemVisible(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMESETSTREAMINGITEMVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateItemLodTemplate(::DIFMKJMFKOK* a1, ::RPG::GameCore::EntityLodTemplateName a2)
		{
			return ((::System::Void(*)(::PVOID, ::DIFMKJMFKOK*, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UPDATEITEMLODTEMPLATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnMonoEffectPositionChanged(::CELDMKCEPAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELDMKCEPAO*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ONMONOEFFECTPOSITIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void SetForceStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETFORCESTREAMING_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTransformTool()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETTRANSFORMTOOL_OFFSET))(this);
		}

		::System::Void VisiblePcOnlyBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_VISIBLEPCONLYBLOCK_OFFSET))(this, a1);
		}

		::System::Void LILLCHPEHAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LILLCHPEHAB_OFFSET))(this, a1);
		}

		::System::Void RuntimeSetStreamingEnable(::System::Boolean a1, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMESETSTREAMINGENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void EnableStreamingDebugScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ENABLESTREAMINGDEBUGSCRIPT_OFFSET))(this);
		}

		::System::Void EMMPFHJLDGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_EMMPFHJLDGK_OFFSET))(this);
		}

		::System::Void RuntimeDynamicLoadOptionalBlock(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEDYNAMICLOADOPTIONALBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeDynamicRemoveBlock(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEDYNAMICREMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::Void PIMJGMEBAIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_PIMJGMEBAIB_OFFSET))(this);
		}

		::System::Void EnableDynamicBlockEnvProfileData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ENABLEDYNAMICBLOCKENVPROFILEDATA_OFFSET))(this, a1);
		}

		::LJFHKAJPFNE* get_OpenWorld()
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GET_OPENWORLD_OFFSET))(this);
		}

		::System::Void SyncPlayerPosition(::NNBOAOJBOFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNBOAOJBOFC))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SYNCPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetBlockVisibilityReasonActiveByTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibilityReasonActiveByHoyoTag(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYHOYOTAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibilityReasonActiveByAllHoyoTags(::RPG::GameCore::HoyoTagContainer* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYALLHOYOTAGS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockVisibilityReasonActiveByAlias(::System::String* a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::BlockVisibleReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKVISIBILITYREASONACTIVEBYALIAS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAllBlockVisibilityReasonActive(::System::Boolean a1, ::RPG::Client::OpenWorld::BlockVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::BlockVisibleReason))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETALLBLOCKVISIBILITYREASONACTIVE_OFFSET))(this, a1, a2);
		}

		::System::Void RuntimeLoadOptionalBlocksConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMELOADOPTIONALBLOCKSCONFIG_OFFSET))(this, a1);
		}

		::System::Void ShowAreaOnly(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SHOWAREAONLY_OFFSET))(this, a1);
		}

		::System::Void LoadArea(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LOADAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DebugSetAreaDeltaPosition(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DEBUGSETAREADELTAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void GetRangeEntity(::UnityEngine::Rect a1, ::RPG::GameCore::EntityType a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::EntityType, ::System::Object*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_GETRANGEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlockFocusWithNames(::System::Collections::Generic::ISet_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ISet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETBLOCKFOCUSWITHNAMES_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub(::System::String* a1, ::GEEOPFIMJEM a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::GEEOPFIMJEM, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEADDRENDERSTUB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RuntimeRemoveRenderStub(::System::String* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEREMOVERENDERSTUB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::StreamingItemData* RuntimeAddRenderStub_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7)
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_RUNTIMEADDRENDERSTUB_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetAdditionCenter(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_SETADDITIONCENTER_OFFSET))(this, a1, a2);
		}

		::System::Void AddStreamingSource(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::NEOBJJIOBFP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ADDSTREAMINGSOURCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddStreamingSource_1(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::NEOBJJIOBFP* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::NEOBJJIOBFP*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_ADDSTREAMINGSOURCE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveAdditionCenter(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_REMOVEADDITIONCENTER_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAdditionCenters(::NEOBJJIOBFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEOBJJIOBFP*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CLEARADDITIONCENTERS_OFFSET))(this, a1);
		}

		::System::Void LockMainStreamingSource(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LOCKMAINSTREAMINGSOURCE_OFFSET))(this, a1);
		}

		::System::Void UnlockMainStreamingSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_UNLOCKMAINSTREAMINGSOURCE_OFFSET))(this);
		}

		::System::Void RemoveBlock(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_REMOVEBLOCK_OFFSET))(this, a1);
		}

		::System::Void JOMIEIJOKMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_JOMIEIJOKMD_OFFSET))(this, a1);
		}

		::System::Boolean IPIFOGBNLFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_IPIFOGBNLFM_OFFSET))(this);
		}

		::LJLDEDPLHIL* MPIEMLMFNAP(::RPG::Client::MapDef* a1)
		{
			return ((::LJLDEDPLHIL*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_MPIEMLMFNAP_OFFSET))(this, a1);
		}

		::System::Boolean DMPCFOMKOEA(::RPG::GameCore::TemporarySubStageConfig* a1, ::RPG::Client::StageResourceUnloadPolicy a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TemporarySubStageConfig*, ::RPG::Client::StageResourceUnloadPolicy))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DMPCFOMKOEA_OFFSET))(this, a1, a2);
		}

		::System::Void DCHOBKCEBCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DCHOBKCEBCF_OFFSET))(this);
		}

		::RPG::Client::Stage* CPNLBGAFAJN(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::RPG::Client::Stage*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CPNLBGAFAJN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OMLJAOHHOBG(::RPG::Client::Stage* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Stage*, ::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_OMLJAOHHOBG_OFFSET))(this, a1, a2);
		}

		::System::Void DOIJFFPLAEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DOIJFFPLAEP_OFFSET))(this);
		}

		::System::Void NJAOEMKNGGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_NJAOEMKNGGG_OFFSET))(this);
		}

		static ::System::String* KCAHOLBBODH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_KCAHOLBBODH_OFFSET))(a1);
		}

		::NNBOAOJBOFC IHJOKIBBBNP()
		{
			return ((::NNBOAOJBOFC(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_IHJOKIBBBNP_OFFSET))(this);
		}

		::System::Void KHDIFBJMDHH(::RPG::Client::Stage* a1, ::RPG::Client::StageResourceUnloadPolicy a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::RPG::Client::StageResourceUnloadPolicy))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_KHDIFBJMDHH_OFFSET))(this, a1, a2);
		}

		::System::Void DFBKNGDBDFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_DFBKNGDBDFC_OFFSET))(this);
		}

		::System::Void HGCNKNJDIFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_HGCNKNJDIFK_OFFSET))(this);
		}

		::System::Void CCLILCKLKDI(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_CCLILCKLKDI_OFFSET))(this, a1);
		}

		::System::Void LKAJOFNECJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_LKAJOFNECJI_OFFSET))(this);
		}

		::RPG::Client::Stage* FNEMOIMAHGC()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_FNEMOIMAHGC_OFFSET))(this);
		}

		::System::Boolean AEDOLELMFMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNEPPOHKJN_AEDOLELMFMF_OFFSET))(this);
		}

		::System::Void _UpdateAfterOpenWorldUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDNEPPOHKJN__UPDATEAFTEROPENWORLDUPDATE_OFFSET))(this, a1);
		}

	};
