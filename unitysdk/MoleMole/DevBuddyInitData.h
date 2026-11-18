#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMEJFBPNBIB;

#define MOLEMOLE_DEVBUDDYINITDATA_CREATEBUDDYINITDATA_OFFSET UNITYSDK_OFFSET(0x103E47B0)
#define MOLEMOLE_DEVBUDDYINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x103E4860)

namespace MoleMole
{
	inline static constexpr unsigned int DevBuddyInitData_TypeDefinitionIndex = 60717;

	class DevBuddyInitData : public ::System::Object
	{
	public:
		::System::Int32 Level; // 0x10
		::System::Int32 Rank; // 0x14
		::System::Int32 Star; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBUDDYINITDATA__CTOR_OFFSET))(this);
		}

		::KMEJFBPNBIB* CreateBuddyInitData()
		{
			return ((::KMEJFBPNBIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBUDDYINITDATA_CREATEBUDDYINITDATA_OFFSET))(this);
		}
	};
}
