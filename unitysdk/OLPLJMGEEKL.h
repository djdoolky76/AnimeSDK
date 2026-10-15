#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleLineupData; }

#define OLPLJMGEEKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0FF80)

inline static constexpr unsigned int OLPLJMGEEKL_TypeDefinitionIndex = 60984;

	class OLPLJMGEEKL : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleLineupData* LLJMONPONCI; // 0x10
		::System::UInt32 FIMNPJLNLEE; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::System::UInt32 FGCOBKOEACE; // 0x20
		::System::UInt32 HNEIIAGADGO; // 0x24
		::System::UInt32 NJIOMOHBILM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPLJMGEEKL_CTOR_OFFSET))(this);
		}

	};
