#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1804C5F0)
#define MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1804C580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopShowObj_TypeDefinitionIndex = 69791;

	class UIGeneralTipsPopShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* title; // 0x28
		::System::String* SourceTag; // 0x30
		::System::Action* okClick; // 0x38
		::System::String* msg; // 0x40
		::System::Action* cancelClick; // 0x48

		::System::Void _ctor(::System::String* title, ::System::Action* okClick, ::FAKODLEPJOA showPage, ::System::String* msg, ::System::String* sourceTag, ::System::Action* cancelClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::FAKODLEPJOA, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ__CTOR_OFFSET))(this, title, okClick, showPage, msg, sourceTag, cancelClick);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
