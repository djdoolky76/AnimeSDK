#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemType.h"
#include "unitysdk/RPG/GameCore/MarbleShapeType.h"
#include "unitysdk/System/Object.h"

#define FANKKLAJAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC26B40)

inline static constexpr unsigned int FANKKLAJAFJ_TypeDefinitionIndex = 43160;

	class FANKKLAJAFJ : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleShapeType EDONJJDPDCD; // 0x10
		::RPG::GameCore::MarbleItemType LINLNNHIBAK; // 0x14
		::System::Single IDKONBFPBLH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANKKLAJAFJ_CTOR_OFFSET))(this);
		}

	};
