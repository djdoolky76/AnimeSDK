#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LookAtIK; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC43CF90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC43C120)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_OMLNNDCCAGG_OFFSET UNITYSDK_OFFSET(0xC43C6B0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoBabyHipplen_AGKKJOBCKJO_TypeDefinitionIndex = 75601;

	class MonoBabyHipplen_AGKKJOBCKJO : public ::System::Object
	{
	public:
		::RPG::Client::LookAtIK* LHEEDHAPKOA; // 0x10
		::System::Single PKCKMONNBLM; // 0x18
		::System::Single IPMECJCKIGM; // 0x1C
		::System::Single LFKMOIDKOEL; // 0x20
		::System::Single LLNIGIGFCEA; // 0x24
		::System::Single KCLBCNGCLHJ; // 0x28
		::System::Single OHHLGJCJLPH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OMLNNDCCAGG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_OMLNNDCCAGG_OFFSET))(this, a1, a2, a3);
		}

	};
}
