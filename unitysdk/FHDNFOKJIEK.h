#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define FHDNFOKJIEK_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14296410)
#define FHDNFOKJIEK_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x142964A0)
#define FHDNFOKJIEK__CTOR_OFFSET UNITYSDK_OFFSET(0x14296510)

inline static constexpr unsigned int FHDNFOKJIEK_TypeDefinitionIndex = 58369;

class FHDNFOKJIEK : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDNFOKJIEK__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDNFOKJIEK_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDNFOKJIEK_ILEEFLAOOOM_OFFSET))(this);
	}
};
