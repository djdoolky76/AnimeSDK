#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS93_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DAA00)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS93_0__GOTOTOGUIDEROGUE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5DF5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass93_0_TypeDefinitionIndex = 67562;

	class HandbookModule___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::System::UInt32 customizedAreaID; // 0x10
		::System::Boolean useCustomizedAreaID; // 0x14
		::System::Boolean autoShow; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS93_0_CTOR_OFFSET))(this);
		}

		::System::Void _GotoToGuideRogue_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS93_0__GOTOTOGUIDEROGUE_B__0_OFFSET))(this);
		}

	};
}
