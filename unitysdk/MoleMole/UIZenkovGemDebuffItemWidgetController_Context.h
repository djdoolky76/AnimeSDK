#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CHALNAEKBPO;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1671A370)
#define MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1671A380)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffItemWidgetController_Context_TypeDefinitionIndex = 65408;

	class UIZenkovGemDebuffItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* IconPath; // 0x28
		::CHALNAEKBPO* Config; // 0x30
		::System::Func_3<::System::UInt32, ::System::Single, ::System::Single>* GetAppearAnimationNormalizedTime; // 0x38
		::System::Action_3<::System::UInt32, ::System::Int32, ::CHALNAEKBPO*>* OnItemClick; // 0x40
		::System::UInt32 ItemID; // 0x48
		::System::UInt32 Stack; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFITEMWIDGETCONTROLLER_CONTEXT_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
