#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCONENNDJNF.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_CALCUPOS_OFFSET UNITYSDK_OFFSET(0x18C80D10)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x18C80920)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETFINALDISPLAYPOS_OFFSET UNITYSDK_OFFSET(0x18C80AE0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_ISTEXTHIDDEN_OFFSET UNITYSDK_OFFSET(0x18C80750)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18C80740)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_HIDETEXT_OFFSET UNITYSDK_OFFSET(0x18C80E80)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x18C81150)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x18C81840)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C80760)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET UNITYSDK_OFFSET(0x18C80970)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18C813F0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SETPARENTCONTAINER_OFFSET UNITYSDK_OFFSET(0x18C809D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0x18C80A20)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C818D0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C81890)
#define MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C818F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextBaseController_TypeDefinitionIndex = 54876;

	class UIInLevelDamageTextBaseController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_LELNMLOPHKL()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextBaseController_TypeDefinitionIndex)->GetStaticField(0xB2F0);
		}
		::System::Boolean _isTextHidden; // 0x320
		::System::Byte _padding0[0x7];
		::MoleMole::Battle::Entity* BOKHFBCJJCH; // 0x328
		::GEIHCPAOKKK* NIGKCHKGKLL; // 0x330
		::UnityEngine::Vector3 AGDNAOABNHH; // 0x338
		::UnityEngine::Vector3 _lastModelPosition; // 0x344
		::UnityEngine::RectTransform* OOGENNMFGEP; // 0x350
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* EIBIGHJCJOO; // 0x358
		::UnityEngine::Vector2 PEKFLPMEOKC; // 0x360
		::UnityEngine::Vector2 EMEBBOHEGLA; // 0x368
		::UnityEngine::Vector3 EGIFNGNJFNI; // 0x370
		::UnityEngine::Vector2 GEINPBLIOAH; // 0x37C
		::CCONENNDJNF _targetFollowType; // 0x384
		::UnityEngine::Vector3 _initModelPosition; // 0x388
		::System::Boolean _isPause; // 0x394

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTextHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GET_ISTEXTHIDDEN_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Single GetDamageTextLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETDAMAGETEXTLENGTH_OFFSET))(this);
		}

		::System::Void OnUpdateText(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONUPDATETEXT_OFFSET))(this, deltaTime);
		}

		::System::Void SetParentContainer(::MoleMole::UIInLevelDamageTextContainerChildWindowController* parentContainer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SETPARENTCONTAINER_OFFSET))(this, parentContainer);
		}

		::System::Void ShowText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_SHOWTEXT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetFinalDisplayPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_GETFINALDISPLAYPOS_OFFSET))(this);
		}

		::System::Void CalcuPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_CALCUPOS_OFFSET))(this);
		}

		::System::Void HideText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_HIDETEXT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void RefreshView(::UnityEngine::Vector3 worldPos, ::MoleMole::Battle::Entity* attackee, ::UnityEngine::Vector2 screenSpacePosOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_REFRESHVIEW_OFFSET))(this, worldPos, attackee, screenSpacePosOffset);
		}

		::System::Void OnPauseGameStateChanged(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER_ONPAUSEGAMESTATECHANGED_OFFSET))(this, isPause);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
