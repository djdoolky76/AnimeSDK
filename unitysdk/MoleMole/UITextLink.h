#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/UIText.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITextLink_HrefClickEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_UITEXTLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0x1718D030)
#define MOLEMOLE_UITEXTLINK_BBLHCDDOKHF_OFFSET UNITYSDK_OFFSET(0x1718F960)
#define MOLEMOLE_UITEXTLINK_CFGIPMCNBAL_OFFSET UNITYSDK_OFFSET(0x1718F940)
#define MOLEMOLE_UITEXTLINK_GET_GETHYPERLINKINFO_OFFSET UNITYSDK_OFFSET(0x1718D020)
#define MOLEMOLE_UITEXTLINK_GET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x1718D000)
#define MOLEMOLE_UITEXTLINK_GOKBADGGEMB_OFFSET UNITYSDK_OFFSET(0x1718FAF0)
#define MOLEMOLE_UITEXTLINK_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1718F950)
#define MOLEMOLE_UITEXTLINK_ICCPMCDGBDH_OFFSET UNITYSDK_OFFSET(0x1718E040)
#define MOLEMOLE_UITEXTLINK_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1718F930)
#define MOLEMOLE_UITEXTLINK_KBOIHOEPHCI_OFFSET UNITYSDK_OFFSET(0x1718F920)
#define MOLEMOLE_UITEXTLINK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1718FAE0)
#define MOLEMOLE_UITEXTLINK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1718D170)
#define MOLEMOLE_UITEXTLINK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1718D080)
#define MOLEMOLE_UITEXTLINK_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1718F2C0)
#define MOLEMOLE_UITEXTLINK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1718D310)
#define MOLEMOLE_UITEXTLINK_PHHMMHHLHBE_OFFSET UNITYSDK_OFFSET(0x1718DAD0)
#define MOLEMOLE_UITEXTLINK_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1718D240)
#define MOLEMOLE_UITEXTLINK_SET_ONHREFCLICK_OFFSET UNITYSDK_OFFSET(0x1718D010)
#define MOLEMOLE_UITEXTLINK_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1718F600)
#define MOLEMOLE_UITEXTLINK_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1718D2B0)
#define MOLEMOLE_UITEXTLINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1718F7E0)
#define MOLEMOLE_UITEXTLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1718F650)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_TypeDefinitionIndex = 74691;

	class UITextLink : public ::UnityEngine::UI::UIText
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_HrefRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x52230);
		}
		static ::System::String** StaticGet_temp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x52238);
		}
		static ::System::Text::StringBuilder** StaticGet_s_TextBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(UITextLink_TypeDefinitionIndex)->GetStaticField(0x52240);
		}
		::System::String* m_OutputText; // 0x3C8
		::System::Collections::Generic::List_1<::System::Object*>* m_HrefInfos; // 0x3D0
		::MoleMole::UITextLink_HrefClickEvent* m_OnHrefClick; // 0x3D8
		::System::Boolean UseTextLinkPopTip; // 0x3E0
		::System::Boolean ChangeHrefColor; // 0x3E1
		::System::Byte _padding0[0x2];
		::UnityEngine::Color HrefColor; // 0x3E4
		::System::Boolean UseUnderLine; // 0x3F4
		::System::Byte _padding1[0x3];
		::UnityEngine::Color underLineColor; // 0x3F8
		::System::Single _lineHeight; // 0x408
		::System::Single _lineOffset; // 0x40C
		::Il2CppArray<::UnityEngine::UICharInfo>* characters; // 0x410
		::Il2CppArray<::UnityEngine::UILineInfo>* lines; // 0x418
		::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* _TUT; // 0x420
		::Il2CppArray<::UnityEngine::UIVertex>* m_TempVerts; // 0x428

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK__CCTOR_OFFSET))();
		}

		::MoleMole::UITextLink_HrefClickEvent* get_onHrefClick()
		{
			return ((::MoleMole::UITextLink_HrefClickEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GET_ONHREFCLICK_OFFSET))(this);
		}

		::System::Void set_onHrefClick(::MoleMole::UITextLink_HrefClickEvent* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITextLink_HrefClickEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_SET_ONHREFCLICK_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* get_GetHyperlinkInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GET_GETHYPERLINKINFO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* CDAHODBFMLM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONPOPULATEMESH_OFFSET))(this, CDAHODBFMLM);
		}

		::System::String* ICCPMCDGBDH(::System::String* KDLLCKNMNEI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ICCPMCDGBDH_OFFSET))(this, KDLLCKNMNEI);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_UNITYENGINE_EVENTSYSTEMS_IPOINTERDOWNHANDLER_ONPOINTERDOWN_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void PHHMMHHLHBE(::UnityEngine::UI::VertexHelper* LMDJKLKHMNA, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* FPOHOIOEKFG, ::UnityEngine::Vector3 DEMOHAIKEBC, ::UnityEngine::Vector3 KGMIOMAGGGB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_PHHMMHHLHBE_OFFSET))(this, LMDJKLKHMNA, FPOHOIOEKFG, DEMOHAIKEBC, KGMIOMAGGGB);
		}

		::System::Void KBOIHOEPHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_KBOIHOEPHCI_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Void CFGIPMCNBAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_CFGIPMCNBAL_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void BBLHCDDOKHF(::System::String* HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_BBLHCDDOKHF_OFFSET))(this, HMMMOCJAEOA);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void GOKBADGGEMB(::UnityEngine::UI::VertexHelper* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_GOKBADGGEMB_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
