#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BasePosYType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/PatternShape_BaseRotYType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E8880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShape_TypeDefinitionIndex = 81942;

	class PatternShape : public ::System::Object
	{
	public:
		::System::String* BaseAttachPoint; // 0x10
		::System::String* BaseCenterTargetCustomKey; // 0x18
		::MoleMole::Config::PatternShape_BasePosYType BaseYType; // 0x20
		::System::Single CenterZOffset; // 0x24
		::MoleMole::Config::PatternShape_BaseRotYType BaseYRotType; // 0x28
		::System::Single CenterXOffset; // 0x2C
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x30
		::MoleMole::Config::PatternShape_BasePosXZType BaseXZType; // 0x34
		::System::Single CenterYOffset; // 0x38
		::System::Single AngleYOffset; // 0x3C
		::System::Boolean IsAngleOffsetLocal; // 0x40
		::System::Boolean LockZAxis; // 0x41
		::System::Boolean LockYAxis; // 0x42
		::System::Boolean LockXAxis; // 0x43
		::System::Single AngleZOffset; // 0x44
		::System::Single AngleXOffset; // 0x48
		::MoleMole::Config::PatternShape_BaseRotXZType BaseXZRotType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPE__CTOR_OFFSET))(this);
		}
	};
}
