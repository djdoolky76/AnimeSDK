#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AIKGHHJKNCE;
class EPCOCNOCHEG;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowItemCollectEffectWidgetController; }
namespace MoleMole { class UIHollowItemCollectWidgetController_GridCollectionData; }
namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_1_OFFSET UNITYSDK_OFFSET(0x18F27590)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18F27260)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_DEEMCMPGHHG_OFFSET UNITYSDK_OFFSET(0x18F29AE0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_EMFGMIMHGOD_OFFSET UNITYSDK_OFFSET(0x18F28790)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GCPNBHMNNNJ_OFFSET UNITYSDK_OFFSET(0x18F29550)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GEHMGIGNDEK_OFFSET UNITYSDK_OFFSET(0x18F26630)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_HHLHDIBFENL_OFFSET UNITYSDK_OFFSET(0x18F28940)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_HLHDJMINBMF_OFFSET UNITYSDK_OFFSET(0x18F2A0B0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_INITMOVEFINALPOS_OFFSET UNITYSDK_OFFSET(0x18F26830)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_JHEKNMPGCJG_OFFSET UNITYSDK_OFFSET(0x18F298D0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_KFPPCMNEOFF_OFFSET UNITYSDK_OFFSET(0x18F27380)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_KMCMFLFOAGC_OFFSET UNITYSDK_OFFSET(0x18F29D00)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18F28FC0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_NMJAFOJKLCI_OFFSET UNITYSDK_OFFSET(0x18F297A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F26720)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F267B0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F262E0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F266B0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PLAYGRIDCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x18F27C00)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_TRYTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x18F27990)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F29060)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F29310)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F293A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F29430)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F294C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController_TypeDefinitionIndex = 67241;

	class UIHollowItemCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::EPCOCNOCHEG* _view; // 0x2C8
		::Foundation::ObjectPool_1<::System::Object*>* ICBBEKHIEHA; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Object*>* MLEJDIBNKFJ; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::UnityEngine::Vector3>* GJPAHFBMJNJ; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowItemCollectEffectWidgetController*>* FINDIKAGLCO; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowItemCollectEffectWidgetController*>* KKBFHPLJMCG; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*>* EALKHLKMBBL; // 0x2F8
		::UnityEngine::Vector3 GLBBFGHKAHB; // 0x300
		::UnityEngine::Vector3 DIIADLPDLPN; // 0x30C
		::UnityEngine::Vector3 NCDKGFKFPEM; // 0x318
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* ABJIPNMMBAB; // 0x328
		::UnityEngine::GameObject* DLOBFHCKIBC; // 0x330
		::UnityEngine::GameObject* BJBFNHAJBAB; // 0x338
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* EBEBDLOEBBL; // 0x340
		::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x348
		::MoleMole::UIHollowChessboard3DModelController* PIMHPKKHCPM; // 0x350
		::UnityEngine::RectTransform* JPDJDFBBMKO; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMoveFinalPos(::UnityEngine::Vector3 coinPos, ::UnityEngine::Vector3 dinyPos, ::UnityEngine::Vector3 itemPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_INITMOVEFINALPOS_OFFSET))(this, coinPos, dinyPos, itemPos);
		}

		::System::Void AddItemCollectByIndex(::System::Int32 itemId, ::System::Int32 deltaCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_OFFSET))(this, itemId, deltaCount);
		}

		::System::Void AddItemCollectByIndex_1(::System::Int32 itemId, ::System::Int32 deltaCount, ::System::Int32 showDeltaCount, ::MoleMole::HollowChessboard::HollowCell index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_1_OFFSET))(this, itemId, deltaCount, showDeltaCount, index);
		}

		::System::Void TryTriggerEffect(::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_TRYTRIGGEREFFECT_OFFSET))(this, finishCallback);
		}

		::System::Void PlayGridCollectionData(::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData* data, ::System::Action* finishCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PLAYGRIDCOLLECTIONDATA_OFFSET))(this, data, finishCallBack);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HHLHDIBFENL(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::System::Int32 KCNOHOOPNAH, ::System::Int32 JCNDEMKHCKA, ::System::Int32 PMEBMDJDPAL, ::System::Int32 IKEIILLOIGO, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* AELAJFICJPP, ::System::Int32 LDPMHPBGEDF, ::UnityEngine::Color GFMNEEOKPCG, ::System::Action* CLBAEECMNJL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::UnityEngine::Color, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_HHLHDIBFENL_OFFSET))(this, ABHBKFJKINO, KCNOHOOPNAH, JCNDEMKHCKA, PMEBMDJDPAL, IKEIILLOIGO, AELAJFICJPP, LDPMHPBGEDF, GFMNEEOKPCG, CLBAEECMNJL);
		}

		::MoleMole::UIHollowItemCollectEffectWidgetController* GCPNBHMNNNJ()
		{
			return ((::MoleMole::UIHollowItemCollectEffectWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GCPNBHMNNNJ_OFFSET))(this);
		}

		::System::Void NMJAFOJKLCI(::MoleMole::UIHollowItemCollectEffectWidgetController* JMDHBJMNBCP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowItemCollectEffectWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_NMJAFOJKLCI_OFFSET))(this, JMDHBJMNBCP);
		}

		::MoleMole::UIHollowMainBottomWidgetController* EMFGMIMHGOD()
		{
			return ((::MoleMole::UIHollowMainBottomWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_EMFGMIMHGOD_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* DEEMCMPGHHG(::MoleMole::ItemCollectEffectType BBMDGPCOFOF)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::MoleMole::ItemCollectEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_DEEMCMPGHHG_OFFSET))(this, BBMDGPCOFOF);
		}

		::MoleMole::UIHollowMainPageController* JHEKNMPGCJG()
		{
			return ((::MoleMole::UIHollowMainPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_JHEKNMPGCJG_OFFSET))(this);
		}

		::MoleMole::UIHollowChessboard3DModelController* KFPPCMNEOFF()
		{
			return ((::MoleMole::UIHollowChessboard3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_KFPPCMNEOFF_OFFSET))(this);
		}

		::UnityEngine::Vector3 KMCMFLFOAGC(::AIKGHHJKNCE* CDKCJAKODPN)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_KMCMFLFOAGC_OFFSET))(this, CDKCJAKODPN);
		}

		::System::Collections::IEnumerator* GEHMGIGNDEK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GEHMGIGNDEK_OFFSET))(this);
		}

		::System::Void HLHDJMINBMF(::UnityEngine::ParticleSystem* NJOAJLDJCCJ, ::MoleMole::ItemCollectEffectType BBMDGPCOFOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_HLHDJMINBMF_OFFSET))(this, NJOAJLDJCCJ, BBMDGPCOFOF);
		}
	};
}
