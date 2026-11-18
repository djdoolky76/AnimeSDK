#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMODLDMFAKN.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SMapGroupMemberStateExConfig_TypeDefinitionIndex = 91891;

	struct alignas(8) SMapGroupMemberStateExConfig
	{
		::System::Int32 GroupId; // 0x10
		::System::Int32 MemberId; // 0x14
		::System::String* StateName; // 0x18
		::System::Int32 StateValue; // 0x20
		::NMODLDMFAKN Operator; // 0x24
	};
}
