#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8CD00)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRoleContext_TypeDefinitionIndex = 75070;

	class UILineupSelectTestRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isIndex; // 0x28
		::System::Boolean random; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 avatarCount; // 0x2C
		::System::Int32 avatarIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
