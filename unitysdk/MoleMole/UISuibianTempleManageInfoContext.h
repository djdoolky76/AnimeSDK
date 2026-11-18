#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADLCDHJKFIO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14820430)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoContext_TypeDefinitionIndex = 49380;

	class UISuibianTempleManageInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 InitSelectProductID; // 0x28
		::System::UInt32 CraftBenchID; // 0x2C
		::System::Boolean FromJump; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 GoodShelveID; // 0x34
		::ADLCDHJKFIO OpenType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
