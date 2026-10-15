#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class RubikCubePuzzleBrick; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDDA05F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICKDATA_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xDDA0580)

namespace RPG::Client::Prop
{
	class RubikCubePuzzleBrickData : public ::System::Object
	{
	public:
		::System::Boolean up; // 0x10
		::System::Boolean down; // 0x11
		::System::Boolean front; // 0x12
		::System::Boolean back; // 0x13
		::System::Boolean left; // 0x14
		::System::Boolean right; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICKDATA_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::RPG::Client::Prop::RubikCubePuzzleBrick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleBrick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBRICKDATA_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
}
