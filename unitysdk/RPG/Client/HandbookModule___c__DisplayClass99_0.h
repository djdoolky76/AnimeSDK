#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS99_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDD346C0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS99_0___TRANSFERWITHCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xDD38F80)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass99_0_TypeDefinitionIndex = 67563;

	class HandbookModule___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::System::Action* transferCallback; // 0x10
		::System::UInt32 mappingInfoID; // 0x18
		::System::UInt32 entranceID; // 0x1C
		::System::UInt32 contentID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS99_0_CTOR_OFFSET))(this);
		}

		::System::Void __TransferWithCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS99_0___TRANSFERWITHCHECK_B__0_OFFSET))(this);
		}

	};
}
