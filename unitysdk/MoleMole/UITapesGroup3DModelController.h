#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BPMMLJFAECD;
class DNGEKLMPBAC;
class EFLEGHEHLHB;
class EHDGBEIJAAE;
class IJPHAMDDIAO;
namespace MoleMole { class TapesBackgroundDrag; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController_ArchiveTapes; }
namespace MoleMole { class UITapesGroup3DModelController_Context; }
namespace MoleMole::Config { class MainStoryConfigPageCamera; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AFLOMPLCDCJ_OFFSET UNITYSDK_OFFSET(0x14E15270)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AGIFBCGHLMK_OFFSET UNITYSDK_OFFSET(0x14E10CB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AINFMGEFFEO_OFFSET UNITYSDK_OFFSET(0x14E137E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BFLEOKBFOBP_OFFSET UNITYSDK_OFFSET(0x14E14970)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BHKJJHCDMKB_OFFSET UNITYSDK_OFFSET(0x14E12710)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BHPFGBPPNJO_OFFSET UNITYSDK_OFFSET(0x14E0C0D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CANCELSHOWCURTAPE_OFFSET UNITYSDK_OFFSET(0x14E105B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CICOJIANGDH_OFFSET UNITYSDK_OFFSET(0x14E15010)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CKIIKPBGDNO_OFFSET UNITYSDK_OFFSET(0x14E14210)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CPNNLDBOGFG_OFFSET UNITYSDK_OFFSET(0x14E15280)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESNOPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x14E0D2A0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESWITHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x14E0B640)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DFMLMPJBDIF_OFFSET UNITYSDK_OFFSET(0x14E15320)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DGGGLLFLPIG_OFFSET UNITYSDK_OFFSET(0x14E0F890)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DPODFGOPPPD_OFFSET UNITYSDK_OFFSET(0x14E09BD0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ELLOKBMDLCD_OFFSET UNITYSDK_OFFSET(0x14E10150)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FEJDGJHHNBJ_OFFSET UNITYSDK_OFFSET(0x14E151F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FKFHLIICPJC_OFFSET UNITYSDK_OFFSET(0x14E0CFE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETALLTAPES_OFFSET UNITYSDK_OFFSET(0x14E10990)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSHOWINGVHSTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x14E11030)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETTAPEBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x14E107F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_GETCURSHOWINGTAPEINDEX_OFFSET UNITYSDK_OFFSET(0x14E08D40)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_TAPESCOUNT_OFFSET UNITYSDK_OFFSET(0x14E08CE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GFCIFBOLPHE_OFFSET UNITYSDK_OFFSET(0x14E13070)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GLJNBCHLMKK_OFFSET UNITYSDK_OFFSET(0x14E15560)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_HGHHPCNEILI_OFFSET UNITYSDK_OFFSET(0x14E14D90)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IDPDCNLFONM_OFFSET UNITYSDK_OFFSET(0x14E0A290)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IEAJJLLOKIO_OFFSET UNITYSDK_OFFSET(0x14E14E80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IGINHNDKMKB_OFFSET UNITYSDK_OFFSET(0x14E14E00)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ISSHOWINGONETAPE_OFFSET UNITYSDK_OFFSET(0x14E0E970)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_JBAOOFELPEP_OFFSET UNITYSDK_OFFSET(0x14E0E9C0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_JNHEAHMBDIK_OFFSET UNITYSDK_OFFSET(0x14E0DE50)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KFGHLPANKNE_OFFSET UNITYSDK_OFFSET(0x14E0A790)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KGFDLPJMKNO_OFFSET UNITYSDK_OFFSET(0x14E15330)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KGOBKHAGLGA_OFFSET UNITYSDK_OFFSET(0x14E12BF0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14E0A610)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LJEADKIGEIN_OFFSET UNITYSDK_OFFSET(0x14E14040)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_MBIBPMBEFPH_OFFSET UNITYSDK_OFFSET(0x14E12B60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x14E0ED60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x14E0ECB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCLICKTAPE_OFFSET UNITYSDK_OFFSET(0x14E0FC60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E08EB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14E0E8B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x14E0EDB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONGAMEPADMOVE_OFFSET UNITYSDK_OFFSET(0x14E11EE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14E11FC0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPOINTUP_OFFSET UNITYSDK_OFFSET(0x14E0FAE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E092A0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E09330)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E08F40)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E091E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PBHAPNKEPPM_OFFSET UNITYSDK_OFFSET(0x14E0F580)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCEEXPAND_OFFSET UNITYSDK_OFFSET(0x14E11230)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCESHRINK_OFFSET UNITYSDK_OFFSET(0x14E118F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PMKOJAOBNDP_OFFSET UNITYSDK_OFFSET(0x14E14FB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PPHIIPDOFEE_OFFSET UNITYSDK_OFFSET(0x14E156F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYINDEX_OFFSET UNITYSDK_OFFSET(0x14E10E60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x14E109F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHARCHIVETYPE_OFFSET UNITYSDK_OFFSET(0x14E0A670)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14E09440)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E129D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E127B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E129E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14E12A70)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E12B30)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E12B40)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E12B50)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_TypeDefinitionIndex = 84906;

	class UITapesGroup3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet__lockid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITapesGroup3DModelController_TypeDefinitionIndex)->GetStaticField(0xDDA0);
		}
		// static const ::System::String* MOAINOGCMDH; // 0x0
		::System::Single TestNormalizedTime; // 0x368
		::System::Byte _padding0[0x4];
		::MoleMole::UITapesGroup3DModelController_Context* DAAAEJDBNFI; // 0x370
		::EHDGBEIJAAE* CFHOFEKBGLO; // 0x378
		::BPMMLJFAECD* _view; // 0x380
		::IJPHAMDDIAO* FNOLFEBMFJN; // 0x388
		::MoleMole::Config::MainStoryConfigPageCamera* LBPDEJDDJPE; // 0x390
		::System::Int32 GNJGPFBPJNA; // 0x398
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* BJJPDAHLMCC; // 0x3A0
		::System::Int32 BBDOCFBPGAO; // 0x3A8
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* JPJGCJHPKOF; // 0x3B0
		::MoleMole::UITapesGroup3DModelController_ArchiveTapes* CNNIBOIAFAN; // 0x3B8
		::System::Boolean OHFDFNHIBOA; // 0x3C0
		::System::Boolean ODIHFMMNDPM; // 0x3C1
		::System::Byte _padding3[0x6];
		::MoleMole::TapesBackgroundDrag* GFIBOFBDDHK; // 0x3C8
		::UnityEngine::Vector3 MJMKNGDDHOL; // 0x3D0
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UITape3DModelController*>* IMEKMNDIKPA; // 0x3E0
		::System::Single soundPlayDisInteval; // 0x3E8
		::System::Single currentDragDistance; // 0x3EC
		::System::Boolean BECGJLOHKLB; // 0x3F0
		::System::Byte _padding5[0x3];
		::Foundation::Coroutine::CoroutineHandle PPBHNPEHPPL; // 0x3F4
		::System::Single intevalTime; // 0x3F8
		::System::Boolean NGHMCJILODM; // 0x3FC
		::System::Byte _padding6[0x3];
		::DNGEKLMPBAC* JMAABKDNFKN; // 0x400
		::System::Single MNFFHONDKEK; // 0x408
		::UnityEngine::Vector3 GHGEODHNMJA; // 0x40C
		::System::Single DCMHMAKMLLE; // 0x418
		::System::Single DEKMOBOEPCE; // 0x41C
		::System::Single EFMGAAELAEH; // 0x420
		::System::Boolean KNKPPAHOJEM; // 0x424
		::System::Byte _padding7[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* IBJGCKEJJDE; // 0x428

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_TapesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_TAPESCOUNT_OFFSET))(this);
		}

		::System::Int32 get_GetCurShowingTapeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_GETCURSHOWINGTAPEINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SwitchArchiveType(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHARCHIVETYPE_OFFSET))(this, idx);
		}

		::System::Boolean CreateTapesWithPerformance(::System::Int32 archiveID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESWITHPERFORMANCE_OFFSET))(this, archiveID);
		}

		::System::Boolean CreateTapesNoPerformance(::System::Int32 archiveID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESNOPERFORMANCE_OFFSET))(this, archiveID);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData, wordlPoint);
		}

		::System::Void OnApplicationFocus(::System::Boolean CGPBOKCEGAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, CGPBOKCEGAO);
		}

		::System::Void OnEndDrag(::System::Single length, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONENDDRAG_OFFSET))(this, length, speed);
		}

		::System::Void OnPointUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPOINTUP_OFFSET))(this, eventData);
		}

		::System::Void OnClickTape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCLICKTAPE_OFFSET))(this);
		}

		::System::Void CancelShowCurTape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CANCELSHOWCURTAPE_OFFSET))(this);
		}

		::System::Boolean IsShowingOneTape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ISSHOWINGONETAPE_OFFSET))(this);
		}

		::MoleMole::UITape3DModelController* GetTapeByTemplate(::System::Int32 templateID)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETTAPEBYTEMPLATE_OFFSET))(this, templateID);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* GetAllTapes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETALLTAPES_OFFSET))(this);
		}

		::System::Void ShowTapeByTemplateID(::System::Int32 templateID, ::System::Boolean playAnim, ::System::Action* callback, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYTEMPLATEID_OFFSET))(this, templateID, playAnim, callback, playSound);
		}

		::System::Void ShowTapeByIndex(::System::Int32 tapeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYINDEX_OFFSET))(this, tapeIndex);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetShowingVhsTemplateIDs(::System::Int32 archiveType)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSHOWINGVHSTEMPLATEIDS_OFFSET))(this, archiveType);
		}

		::System::Void PerformanceExpand(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes, ::MoleMole::UITape3DModelController* centerTape, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::MoleMole::UITape3DModelController*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCEEXPAND_OFFSET))(this, tapes, centerTape, speed);
		}

		::System::Void PerformanceShrink(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes, ::MoleMole::UITape3DModelController* centerTape, ::System::Single duration, ::System::Single durationOffset, ::UnityEngine::AnimationCurve* curve, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::MoleMole::UITape3DModelController*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCESHRINK_OFFSET))(this, tapes, centerTape, duration, durationOffset, curve, onDone);
		}

		::System::Void OnGamePadMove(::System::Single range, ::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONGAMEPADMOVE_OFFSET))(this, range, delta);
		}

		::System::Void OnInputAction(::System::Boolean isRight, ::UnityEngine::Vector2 inputAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONINPUTACTION_OFFSET))(this, isRight, inputAxis);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::UITape3DModelController* PBHAPNKEPPM(::System::Boolean ANLBFCJFBLP, ::System::Single IAKPGBCAAKM)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PBHAPNKEPPM_OFFSET))(this, ANLBFCJFBLP, IAKPGBCAAKM);
		}

		::System::Void AGIFBCGHLMK(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::UnityEngine::Vector2 HBEKKMCBGBK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AGIFBCGHLMK_OFFSET))(this, IKFLJHGNCOE, HBEKKMCBGBK);
		}

		::System::Void GFCIFBOLPHE(::MoleMole::UITape3DModelController* FMFLNDLMIFM, ::UnityEngine::Vector3 FCNPOKNKMOD, ::System::Single BBBJOMCFPBN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GFCIFBOLPHE_OFFSET))(this, FMFLNDLMIFM, FCNPOKNKMOD, BBBJOMCFPBN);
		}

		::System::Void AINFMGEFFEO(::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* IPGBKILMJPJ, ::System::Single GNNAFELPHJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AINFMGEFFEO_OFFSET))(this, IPGBKILMJPJ, GNNAFELPHJN);
		}

		::System::Void LJEADKIGEIN(::System::Single HBEKKMCBGBK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LJEADKIGEIN_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Void KGOBKHAGLGA(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::MoleMole::UITape3DModelController* FMFLNDLMIFM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::MoleMole::UITape3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KGOBKHAGLGA_OFFSET))(this, IKFLJHGNCOE, FMFLNDLMIFM);
		}

		::System::Void JNHEAHMBDIK(::System::Int32 JLJCIKOHHBJ, ::System::Int32 AIOCAMMHCCN, ::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 KILPCOMOCMD, ::UnityEngine::Vector3 BBCODANAFGI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_JNHEAHMBDIK_OFFSET))(this, JLJCIKOHHBJ, AIOCAMMHCCN, MPLDDNMCECG, KILPCOMOCMD, BBCODANAFGI);
		}

		::System::Void HGHHPCNEILI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_HGHHPCNEILI_OFFSET))(this);
		}

		::System::Single BHKJJHCDMKB(::UnityEngine::Vector2 NAEIGGOBNCG)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BHKJJHCDMKB_OFFSET))(this, NAEIGGOBNCG);
		}

		::System::Void IGINHNDKMKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IGINHNDKMKB_OFFSET))(this);
		}

		::System::Void KFGHLPANKNE(::System::Int32 HLIGKBPIGEN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KFGHLPANKNE_OFFSET))(this, HLIGKBPIGEN);
		}

		::System::Void BFLEOKBFOBP(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::MoleMole::UITape3DModelController* MLLAGJJAICJ, ::MoleMole::UITape3DModelController* JHFKHPLCCDE, ::System::Single HGOHCNBBDHC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::MoleMole::UITape3DModelController*, ::MoleMole::UITape3DModelController*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BFLEOKBFOBP_OFFSET))(this, IKFLJHGNCOE, MLLAGJJAICJ, JHFKHPLCCDE, HGOHCNBBDHC);
		}

		::System::Void DGGGLLFLPIG(::MoleMole::UITape3DModelController* FMFLNDLMIFM, ::UnityEngine::Vector2 HBEKKMCBGBK, ::System::Boolean JOPNAFPGFFG, ::System::Single GHOFEKAFKMP, ::UnityEngine::AnimationCurve* HJHABADMBNH, ::System::Action* EHDKFDJBMNA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DGGGLLFLPIG_OFFSET))(this, FMFLNDLMIFM, HBEKKMCBGBK, JOPNAFPGFFG, GHOFEKAFKMP, HJHABADMBNH, EHDKFDJBMNA);
		}

		::System::Void CICOJIANGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CICOJIANGDH_OFFSET))(this);
		}

		::System::Void FEJDGJHHNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FEJDGJHHNBJ_OFFSET))(this);
		}

		::System::Void FKFHLIICPJC(::System::Boolean AGNCEECDBBC, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::System::Single IAKPGBCAAKM, ::System::Boolean FEAJJGJDLIN, ::System::Int32 OJJONJKIJFB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FKFHLIICPJC_OFFSET))(this, AGNCEECDBBC, IKFLJHGNCOE, IAKPGBCAAKM, FEAJJGJDLIN, OJJONJKIJFB);
		}

		::System::Void AFLOMPLCDCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_AFLOMPLCDCJ_OFFSET))(this);
		}

		::System::Boolean CPNNLDBOGFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CPNNLDBOGFG_OFFSET))(this);
		}

		::System::Void DFMLMPJBDIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DFMLMPJBDIF_OFFSET))(this);
		}

		::System::Int32 MBIBPMBEFPH(::System::Int32 ABHBKFJKINO, ::System::Int32 CDEBGMNCDMD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_MBIBPMBEFPH_OFFSET))(this, ABHBKFJKINO, CDEBGMNCDMD);
		}

		::UnityEngine::Vector2 IEAJJLLOKIO(::UnityEngine::Vector2 HBEKKMCBGBK)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IEAJJLLOKIO_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Void KGFDLPJMKNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_KGFDLPJMKNO_OFFSET))(this);
		}

		::System::Void DPODFGOPPPD(::MoleMole::UITape3DModelController* FMFLNDLMIFM, ::UnityEngine::AnimationCurve* HIBJIBAHEND)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DPODFGOPPPD_OFFSET))(this, FMFLNDLMIFM, HIBJIBAHEND);
		}

		::System::Void CKIIKPBGDNO(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::System::Collections::Generic::List_1<::EFLEGHEHLHB*>* DOLGOLPGLPH, ::System::Int32 CGDPCDEBLDN, ::UnityEngine::Transform* JNLBPMKIFNK, ::UnityEngine::Vector3 CADHBKFCDDG, ::System::Single ILJAMEHHGCE, ::System::Int32 FJFONPBJOKM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Collections::Generic::List_1<::EFLEGHEHLHB*>*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CKIIKPBGDNO_OFFSET))(this, IKFLJHGNCOE, DOLGOLPGLPH, CGDPCDEBLDN, JNLBPMKIFNK, CADHBKFCDDG, ILJAMEHHGCE, FJFONPBJOKM);
		}

		::System::Void JBAOOFELPEP(::UnityEngine::Vector2 HBEKKMCBGBK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_JBAOOFELPEP_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Void PPHIIPDOFEE(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* IKFLJHGNCOE, ::System::Int32 FJFONPBJOKM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PPHIIPDOFEE_OFFSET))(this, IKFLJHGNCOE, FJFONPBJOKM);
		}

		::System::Void ELLOKBMDLCD(::MoleMole::UITape3DModelController* FMFLNDLMIFM, ::System::Boolean JOBHFEMGBDG, ::System::Action* EJGDHCIBCJH, ::System::Boolean OFHFHAIPDJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ELLOKBMDLCD_OFFSET))(this, FMFLNDLMIFM, JOBHFEMGBDG, EJGDHCIBCJH, OFHFHAIPDJM);
		}

		::MoleMole::UITape3DModelController* IDPDCNLFONM(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* IPGBKILMJPJ)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_IDPDCNLFONM_OFFSET))(this, IPGBKILMJPJ);
		}

		::MoleMole::UITapesGroup3DModelController_ArchiveTapes* BHPFGBPPNJO(::System::Int32 JLJCIKOHHBJ, ::System::Int32 AIOCAMMHCCN, ::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 KILPCOMOCMD, ::UnityEngine::Vector3 BBCODANAFGI)
		{
			return ((::MoleMole::UITapesGroup3DModelController_ArchiveTapes*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_BHPFGBPPNJO_OFFSET))(this, JLJCIKOHHBJ, AIOCAMMHCCN, MPLDDNMCECG, KILPCOMOCMD, BBCODANAFGI);
		}

		::System::Void PMKOJAOBNDP(::MoleMole::UITape3DModelController* FMFLNDLMIFM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PMKOJAOBNDP_OFFSET))(this, FMFLNDLMIFM);
		}

		::System::Void GLJNBCHLMKK(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* IPGBKILMJPJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GLJNBCHLMKK_OFFSET))(this, IPGBKILMJPJ);
		}
	};
}
