#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LookAtIK; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD07A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1CCCFB80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_MONOBABYHIPPLEN_AGKKJOBCKJO_OMLNNDCCAGG_OFFSET UNITYSDK_OFFSET(0x1CCCFFE0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int MonoBabyHipplen_AGKKJOBCKJO_TypeDefinitionIndex = 77927;

	class MonoBabyHipplen_AGKKJOBCKJO : public ::System::Object
	{
	public:
		::RPG::Client::LookAtIK* LHEEDHAPKOA; // 0x10
		::System::Single LLNIGIGFCEA; // 0x18
		::System::Single OHHLGJCJLPH; // 0x1C
		::System::Single KCLBCNGCLHJ; // 0x20
		::System::Single PKCKMONNBLM; // 0x24
		::System::Single IPMECJCKIGM; // 0x28
		::System::Single LFKMOIDKOEL; // 0x2C
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
