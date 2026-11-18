#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSLINEUPPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163D5010)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssLineupPopContext_TypeDefinitionIndex = 76858;

	class AbyssLineupPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AvatarList; // 0x28
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* AvatarItemList; // 0x30
		::System::Collections::Generic::List_1<::FIDJKBDDBDD>* BuildTypeList; // 0x38
		::System::Boolean ShowReward; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 FocusedAvatar; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSLINEUPPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
