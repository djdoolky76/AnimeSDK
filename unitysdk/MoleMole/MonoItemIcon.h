#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoItemIcon_NFJOPAIOEIA; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOITEMICON_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10D40920)
#define MOLEMOLE_MONOITEMICON_DECMEIJMNJD_OFFSET UNITYSDK_OFFSET(0x10D40F20)
#define MOLEMOLE_MONOITEMICON_INFLFJFIHGD_OFFSET UNITYSDK_OFFSET(0x10D40E90)
#define MOLEMOLE_MONOITEMICON_LOJNPOGBOIM_OFFSET UNITYSDK_OFFSET(0x10D40C80)
#define MOLEMOLE_MONOITEMICON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x10D40DD0)
#define MOLEMOLE_MONOITEMICON_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x10D40BB0)
#define MOLEMOLE_MONOITEMICON_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x10D40D30)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_1_OFFSET UNITYSDK_OFFSET(0x10D40A70)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_2_OFFSET UNITYSDK_OFFSET(0x10D40B00)
#define MOLEMOLE_MONOITEMICON_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x10D408A0)
#define MOLEMOLE_MONOITEMICON_UNSELECTITEM_OFFSET UNITYSDK_OFFSET(0x10D40BF0)
#define MOLEMOLE_MONOITEMICON__CTOR_OFFSET UNITYSDK_OFFSET(0x10D40E40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemIcon_TypeDefinitionIndex = 92028;

	class MonoItemIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoItemIcon_NFJOPAIOEIA* OnSelectItem; // 0x18
		::UnityEngine::UI::Image* _Icon; // 0x20
		::UnityEngine::UI::Image* _Select; // 0x28
		::UnityEngine::UI::Text* _TextName; // 0x30
		::UnityEngine::UI::Text* _TextCount; // 0x38
		::System::UInt64 _GoodRuntimeID; // 0x40
		::System::Int32 _GoodTemplateID; // 0x48
		::System::Int32 _GoodItemCount; // 0x4C
		::System::Int32 _ItemIndex; // 0x50
		::System::Boolean _IsItemSelected; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON__CTOR_OFFSET))(this);
		}

		::System::Void SetupView(::System::Int32 ABHBKFJKINO, ::System::Int32 EHHDHIPOHMK, ::System::Int32 HABOEFONCNL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_OFFSET))(this, ABHBKFJKINO, EHHDHIPOHMK, HABOEFONCNL);
		}

		::System::Void SetupView_1(::System::Int32 ABHBKFJKINO, ::System::UInt64 MBCHJLKKNEP, ::System::Int32 EHHDHIPOHMK, ::System::Int32 HABOEFONCNL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_1_OFFSET))(this, ABHBKFJKINO, MBCHJLKKNEP, EHHDHIPOHMK, HABOEFONCNL);
		}

		::System::Void SetupView_2(::System::Int32 ABHBKFJKINO, ::System::Int32 FOLCMMMPIHF, ::System::UInt64 MBCHJLKKNEP, ::System::Int32 EHHDHIPOHMK, ::System::Int32 HABOEFONCNL, ::MoleMole::MonoItemIcon_NFJOPAIOEIA* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::MoleMole::MonoItemIcon_NFJOPAIOEIA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SETUPVIEW_2_OFFSET))(this, ABHBKFJKINO, FOLCMMMPIHF, MBCHJLKKNEP, EHHDHIPOHMK, HABOEFONCNL, EJGDHCIBCJH);
		}

		::System::Void RegisterCallBacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_REGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void UnSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_UNSELECTITEM_OFFSET))(this);
		}

		::System::Void SelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_SELECTITEM_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_ONPOINTERCLICK_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void INFLFJFIHGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_INFLFJFIHGD_OFFSET))(this);
		}

		::System::Void LOJNPOGBOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_LOJNPOGBOIM_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_BBOMJDBNHIC_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void DECMEIJMNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_DECMEIJMNJD_OFFSET))(this);
		}
	};
}
