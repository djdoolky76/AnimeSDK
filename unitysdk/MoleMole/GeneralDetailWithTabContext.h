#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOOCBFJOOH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GENERALDETAILWITHTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE5600)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralDetailWithTabContext_TypeDefinitionIndex = 48415;

	class GeneralDetailWithTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CancelBtnCb; // 0x28
		::System::Action* CloseCb; // 0x30
		::System::Action* OkBtnCb; // 0x38
		::System::String* CancelBtnText; // 0x40
		::System::String* OkBtnText; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* Tabs; // 0x50
		::CEOOCBFJOOH OkBtnState; // 0x58
		::CEOOCBFJOOH CancelBtnState; // 0x5C
		::System::Int32 InitialTabIndex; // 0x60
		::System::Boolean ShowOkBtn; // 0x64
		::System::Boolean ShowClose; // 0x65
		::System::Boolean ShowCancelBtn; // 0x66

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILWITHTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
