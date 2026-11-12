#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7C1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureSkillMPRefreshParam_TypeDefinitionIndex = 70072;

	class AdventureSkillMPRefreshParam : public ::System::Object
	{
	public:
		::OAJOCEIKAGK Reason; // 0x10
		::System::Int32 ChangeCount; // 0x14
		::System::Boolean DisplayEffect; // 0x18
		::System::Boolean Overflow; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURESKILLMPREFRESHPARAM_CTOR_OFFSET))(this);
		}

	};
}
