#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C6820)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureSkillMPRefreshParam_TypeDefinitionIndex = 70072;

	class AdventureSkillMPRefreshParam : public ::System::Object
	{
	public:
		::System::Boolean DisplayEffect; // 0x10
		::System::Boolean Overflow; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 ChangeCount; // 0x14
		::OAJOCEIKAGK Reason; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM_CTOR_OFFSET))(this);
		}

	};
}
