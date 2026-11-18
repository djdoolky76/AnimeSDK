#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LineExtraInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LineInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LinkInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_QuadInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/TextDataNeeds.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ADDLINEEXTRAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F1C1D80)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_APPLYLINEEXTRAHEIGHTSHIFTSFROMLINEEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1F1C2730)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_BUILDLINEEXTRAHEIGHTSHIFTS_OFFSET UNITYSDK_OFFSET(0x1F1C2090)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEARLINEEXTRAHEIGHTINFO_OFFSET UNITYSDK_OFFSET(0x1F1C1F90)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F1C2F40)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_COMPUTELINEEXTRAHEIGHTALIGNOFFSET_OFFSET UNITYSDK_OFFSET(0x1F1C23A0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELINEEXTRAINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1F1C1E30)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELISTS_OFFSET UNITYSDK_OFFSET(0x1F1C2DE0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHTALIGNOFFSET_OFFSET UNITYSDK_OFFSET(0x1F1C25C0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHTTOTAL_OFFSET UNITYSDK_OFFSET(0x1F1C22D0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F1C24D0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINELAYOUTSHIFTY_OFFSET UNITYSDK_OFFSET(0x1F1C2540)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GET_BUILTNEEDS_OFFSET UNITYSDK_OFFSET(0x1F1C2DB0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GET_ISBUILT_OFFSET UNITYSDK_OFFSET(0x1F1C2DD0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_HASLINEEXTRAHEIGHTSHIFTS_OFFSET UNITYSDK_OFFSET(0x1F1C2410)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_MARKBUILT_OFFSET UNITYSDK_OFFSET(0x1F1C3050)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_SET_BUILTNEEDS_OFFSET UNITYSDK_OFFSET(0x1F1C2DC0)
#define UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C30A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_TextInfo_TypeDefinitionIndex = 74259;

	class NAP_TextInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_QuadInfo>* quadInfo; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* characterInfo; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>* linkInfo; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LineInfo>* lineInfo; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LineExtraInfo>* lineExtraInfo; // 0x30
		::UnityEngine::UI::Extension::TextDataNeeds _BuiltNeeds_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Void AddLineExtraHeight(::System::Int32 lineIndex, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ADDLINEEXTRAHEIGHT_OFFSET))(this, lineIndex, height);
		}

		::System::Void ClearLineExtraHeightInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEARLINEEXTRAHEIGHTINFO_OFFSET))(this);
		}

		::System::Boolean BuildLineExtraHeightShifts(::UnityEngine::TextAnchor alignment)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_BUILDLINEEXTRAHEIGHTSHIFTS_OFFSET))(this, alignment);
		}

		::System::Boolean HasLineExtraHeightShifts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_HASLINEEXTRAHEIGHTSHIFTS_OFFSET))(this);
		}

		::System::Single GetLineExtraHeight(::System::Int32 lineIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHT_OFFSET))(this, lineIndex);
		}

		::System::Single GetLineLayoutShiftY(::System::Int32 lineIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINELAYOUTSHIFTY_OFFSET))(this, lineIndex);
		}

		::System::Single GetLineExtraHeightAlignOffset(::UnityEngine::TextAnchor alignment)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHTALIGNOFFSET_OFFSET))(this, alignment);
		}

		::System::Single GetLineExtraHeightTotal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GETLINEEXTRAHEIGHTTOTAL_OFFSET))(this);
		}

		::System::Boolean EnsureLineExtraInfoCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELINEEXTRAINFOCOUNT_OFFSET))(this);
		}

		static ::System::Single ComputeLineExtraHeightAlignOffset(::UnityEngine::TextAnchor alignment, ::System::Single totalExtraHeight)
		{
			return ((::System::Single(*)(::UnityEngine::TextAnchor, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_COMPUTELINEEXTRAHEIGHTALIGNOFFSET_OFFSET))(alignment, totalExtraHeight);
		}

		::System::Void ApplyLineExtraHeightShiftsFromLineExtraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_APPLYLINEEXTRAHEIGHTSHIFTSFROMLINEEXTRAINFO_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::TextDataNeeds get_BuiltNeeds()
		{
			return ((::UnityEngine::UI::Extension::TextDataNeeds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GET_BUILTNEEDS_OFFSET))(this);
		}

		::System::Void set_BuiltNeeds(::UnityEngine::UI::Extension::TextDataNeeds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TextDataNeeds))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_SET_BUILTNEEDS_OFFSET))(this, value);
		}

		::System::Boolean get_IsBuilt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_GET_ISBUILT_OFFSET))(this);
		}

		::System::Void EnsureLists(::UnityEngine::UI::Extension::TextDataNeeds needs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TextDataNeeds))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_ENSURELISTS_OFFSET))(this, needs);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void MarkBuilt(::UnityEngine::UI::Extension::TextDataNeeds needs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TextDataNeeds))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_TEXTINFO_MARKBUILT_OFFSET))(this, needs);
		}
	};
}
