#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }

#define KIDLBJAKOOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB41C510)

	class KIDLBJAKOOP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntityList* GJBOOKGKBIH; // 0x10
		::RPG::GameCore::FixPoint OBIMLGBGCNO; // 0x18
		::System::Boolean BPPMLJPOLAL; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint GBCIHEMICFM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLBJAKOOP_CTOR_OFFSET))(this);
		}

	};
