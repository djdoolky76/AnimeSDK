#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AIKGHHJKNCE;
class BABAPAHEMHK;
class BCMOBJBBANP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectEffectConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_AHPLCAFFCOO_OFFSET UNITYSDK_OFFSET(0x17864450)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x17862BA0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17862B10)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17863BC0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17863C30)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17862480)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17862AA0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET UNITYSDK_OFFSET(0x17863610)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET UNITYSDK_OFFSET(0x17862C40)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17864200)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17864180)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17864210)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178642A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17864330)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178643C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex = 62773;

	class UIHollowItemCollectEffectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_FEODNAGOFEH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIHollowItemCollectEffectWidgetController_TypeDefinitionIndex)->GetStaticField(0x13560);
		}
		::BABAPAHEMHK* _view; // 0x2C8
		::System::Int32 IIILFJJGDOO; // 0x2D0
		::System::Int32 BFDKDPFAJGN; // 0x2D4
		::UnityEngine::Vector2 NHJCBPCHBLF; // 0x2D8
		::UnityEngine::Material* GLHLALEJPFE; // 0x2E0
		::System::Int32 MBKPLOKINEA; // 0x2E8
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* PDCOIFKJICE; // 0x2F0
		::BCMOBJBBANP* PABILBPODIP; // 0x2F8
		::UnityEngine::Material* KMCBJNLJABA; // 0x300
		::BCMOBJBBANP* JCOOOFILOLA; // 0x308
		::UnityEngine::Material* IMCLKFPDJFB; // 0x310
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* EBEBDLOEBBL; // 0x318
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectEffectConfig* FPAPIJALPAK; // 0x320
		::System::Single JDDNKJKFNLL; // 0x328
		::System::Single LCHAGKKPOBO; // 0x32C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitConfig(::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_INITCONFIG_OFFSET))(this, config);
		}

		::System::Boolean SetType(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETTYPE_OFFSET))(this, itemId);
		}

		::System::Void SetPath(::AIKGHHJKNCE* piece, ::UnityEngine::Vector3 offset, ::UnityEngine::Vector3 finalPos, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* layerConfig, ::System::Func_2<::AIKGHHJKNCE*, ::UnityEngine::Vector3>* GetPieceIndexUIPos, ::UnityEngine::Color overrideFadeInColor, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>* getFadeOutEffectParticle, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>* recycleFadeOutEffectParticle, ::System::Action* finishCallback, ::System::Action* recycleCallback)
		{
			return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig*, ::System::Func_2<::AIKGHHJKNCE*, ::UnityEngine::Vector3>*, ::UnityEngine::Color, ::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>*, ::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_SETPATH_OFFSET))(this, piece, offset, finalPos, layerConfig, GetPieceIndexUIPos, overrideFadeInColor, getFadeOutEffectParticle, recycleFadeOutEffectParticle, finishCallback, recycleCallback);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void AHPLCAFFCOO(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER_AHPLCAFFCOO_OFFSET))(this, FNIOPKPHDEH);
		}
	};
}
