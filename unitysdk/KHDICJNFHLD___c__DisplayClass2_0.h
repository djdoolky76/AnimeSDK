#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AddMenuItem; }

#define KHDICJNFHLD___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FFFE0)
#define KHDICJNFHLD___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB4000A0)

	class KHDICJNFHLD___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AddMenuItem* menuItem; // 0x10
		::System::UInt32 instanceID; // 0x18
		::System::UInt32 groupID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDICJNFHLD___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDICJNFHLD___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
