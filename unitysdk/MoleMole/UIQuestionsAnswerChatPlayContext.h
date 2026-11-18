#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AJMJMMEAIDI;
class EHBMDMONNBB;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT_VALID_OFFSET UNITYSDK_OFFSET(0x186EEC20)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186EEC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerChatPlayContext_TypeDefinitionIndex = 60787;

	class UIQuestionsAnswerChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::EHBMDMONNBB*>* OptionList; // 0x28
		::System::Action_1<::MoleMole::UIQuestionsAnswerChatPlayContext*>* OnFinish; // 0x30
		::System::Collections::Generic::List_1<::AJMJMMEAIDI*>* DisplayTextList; // 0x38
		::System::Int32 SelectOptionIndex; // 0x40
		::System::Boolean DetailUIMode; // 0x44
		::System::Byte _padding0[0x3];
		::System::Int32 EventId; // 0x48
		::System::Int32 CurrentDisplayIndex; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYCONTEXT_VALID_OFFSET))(this);
		}
	};
}
