#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDDILBCEOPA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199BCC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowContext_TypeDefinitionIndex = 49837;

	class UIGeneralOptionListRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x30
		::System::Action_2<::System::Int32, ::System::Int32>* OnDropDownSelect; // 0x38
		::System::String* title; // 0x40
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x48
		::System::Boolean IsDesCenter; // 0x50
		::System::Byte _padding0[0x3];
		::FDDILBCEOPA arrowDirection; // 0x54
		::System::Int32 index; // 0x58
		::UnityEngine::Vector3 positionOffset; // 0x5C
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x68
		::System::Boolean isUp; // 0x69
		::System::Boolean useLocalYHeight; // 0x6A
		::System::Boolean ShowRedPointOnRootButton; // 0x6B
		::System::Int32 curSelectIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
