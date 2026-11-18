#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NHJBOMLNMIH;

#define MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19216F80)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityOVABattleSpecialContext_TypeDefinitionIndex = 87000;

	class ActivityOVABattleSpecialContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath BackGroundPic; // 0x28
		::NHJBOMLNMIH* entryData; // 0x38
		::System::Boolean selectHard; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 selectLevel; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYOVABATTLESPECIALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
