#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JGBMOOJHMBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D4F820)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseContext_TypeDefinitionIndex = 84390;

	class UIDisplayCaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FriendIds; // 0x28
		::JGBMOOJHMBF* FriendInfo; // 0x30
		::System::Int32 CurFriendIdx; // 0x38
		::System::Int32 TargetSection; // 0x3C
		::System::Boolean IsFriend; // 0x40
		::System::Boolean IsFemale; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
