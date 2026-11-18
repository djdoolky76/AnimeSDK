#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDDILBCEOPA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1759FA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxContext_TypeDefinitionIndex = 66846;

	class UIGeneralOptionDropDownBoxContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x28
		::System::Action_1<::System::Int32>* OnDropDownSelect; // 0x30
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x40
		::System::Boolean useLocalYHeight; // 0x48
		::System::Boolean IsDesCenter; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 curSelectIndex; // 0x4C
		::System::Boolean ShowRedPointOnRootButton; // 0x50
		::System::Boolean isUp; // 0x51
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x52
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 positionOffset; // 0x54
		::FDDILBCEOPA arrowDirection; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
