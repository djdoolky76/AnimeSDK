#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/System/Object.h"

#define FANKKLAJAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA63290)

	class FANKKLAJAFJ : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleItemType LINLNNHIBAK; // 0x10
		::System::Single IDKONBFPBLH; // 0x14
		::RPG::GameCore::MarbleShapeType EDONJJDPDCD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANKKLAJAFJ_CTOR_OFFSET))(this);
		}

	};
