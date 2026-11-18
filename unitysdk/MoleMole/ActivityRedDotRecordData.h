#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_ACTIVITYREDDOTRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19216FD0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRedDotRecordData_TypeDefinitionIndex = 54631;

	class ActivityRedDotRecordData : public ::System::Object
	{
	public:
		::System::UInt16 type; // 0x10
		::System::UInt16 version; // 0x12
		::System::Byte _padding0[0x4];
		::System::String* content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTRECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
