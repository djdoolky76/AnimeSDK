#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BCJFFCIDJOF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAVATARSTORYSPECAILINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19837B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarStorySpecailInfoContext_TypeDefinitionIndex = 84280;

	class UIAvatarStorySpecailInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::BCJFFCIDJOF*>* right; // 0x28
		::System::Collections::Generic::List_1<::BCJFFCIDJOF*>* left; // 0x30
		::System::Action* OnClickOKBtn; // 0x38
		::System::Int32 questID; // 0x40
		::System::Boolean ClickNextCloseSelf; // 0x44
		::System::Boolean isShowQuestInfoBtn; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSTORYSPECAILINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
