#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBFAEBLCJMD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define MOLEMOLE_UICONTROLITEM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19851740)
#define MOLEMOLE_UICONTROLITEM_DLBFECLPPMN_OFFSET UNITYSDK_OFFSET(0x19851170)
#define MOLEMOLE_UICONTROLITEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x19850E00)
#define MOLEMOLE_UICONTROLITEM_FMGMOOODOEF_OFFSET UNITYSDK_OFFSET(0x19851560)
#define MOLEMOLE_UICONTROLITEM_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x19851100)
#define MOLEMOLE_UICONTROLITEM_ISMATCH_OFFSET UNITYSDK_OFFSET(0x19850AD0)
#define MOLEMOLE_UICONTROLITEM_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x19851870)
#define MOLEMOLE_UICONTROLITEM_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x19851070)
#define MOLEMOLE_UICONTROLITEM_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x19850EA0)
#define MOLEMOLE_UICONTROLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19851060)

namespace MoleMole
{
	inline static constexpr unsigned int UIControlItem_TypeDefinitionIndex = 58522;

	class UIControlItem : public ::System::Object
	{
	public:
		::System::String* ExportName; // 0x10
		::FBFAEBLCJMD ExportType; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Object* ExportObject; // 0x20
		::System::String* CustomExportTypeName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* LFPLEJICDJL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_ISMATCH_OFFSET))(this, LFPLEJICDJL);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean PADHEHLKBDO(::MoleMole::UIControlItem* LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
		}

		static ::System::Boolean NOGJIJMACNO(::MoleMole::UIControlItem* FFKBEGIHIGG, ::MoleMole::UIControlItem* CKADGLGJJAB)
		{
			return ((::System::Boolean(*)(::MoleMole::UIControlItem*, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}

		static ::System::Boolean INCFIJKMIGG(::MoleMole::UIControlItem* FFKBEGIHIGG, ::MoleMole::UIControlItem* CKADGLGJJAB)
		{
			return ((::System::Boolean(*)(::MoleMole::UIControlItem*, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
		}

		::System::Void DLBFECLPPMN(::System::Boolean DMPCHKMCDLL, ::UnityEngine::GameObject* JEIDPPCEHLD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_DLBFECLPPMN_OFFSET))(this, DMPCHKMCDLL, JEIDPPCEHLD);
		}

		::UnityEngine::GameObject* FMGMOOODOEF()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_FMGMOOODOEF_OFFSET))(this);
		}

		::MoleMole::UIControlItem* DGNAAPGKIPL()
		{
			return ((::MoleMole::UIControlItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLITEM_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
