#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFHDICJPGLD_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xFD00)

inline static constexpr unsigned int BFHDICJPGLD_TypeDefinitionIndex = 56894;

	struct alignas(8) BFHDICJPGLD
	{
		::RPG::GameCore::TurnBasedModifierInstance* EKIFBHJOKFH; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* LHGDMMAFGNO; // 0x20
		::System::Int32 BJOBFAIMJAE; // 0x28
		::RPG::GameCore::BPDecorateType GMPGDEINODK; // 0x2C
		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHDICJPGLD_ABKBOGIGAEH_OFFSET))(this);
		}

	};
