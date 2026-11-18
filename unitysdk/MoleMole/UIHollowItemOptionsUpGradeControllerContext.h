#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OLHCEJBBEJF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWITEMOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x187CAE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemOptionsUpGradeControllerContext_TypeDefinitionIndex = 39073;

	class UIHollowItemOptionsUpGradeControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCancel; // 0x28
		::System::Action* OnConfirm; // 0x30
		::System::Collections::Generic::List_1<::OLHCEJBBEJF*>* ItemDatas; // 0x38
		::System::Boolean forbidConfirm; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 toUpdateIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMOPTIONSUPGRADECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
