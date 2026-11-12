#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadBattleEventByID; }
namespace RPG::GameCore { class TaskContext; }

#define ABBLMKEOIGN_CTOR_OFFSET UNITYSDK_OFFSET(0xB74E2C0)
#define ABBLMKEOIGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB74E2F0)

inline static constexpr unsigned int ABBLMKEOIGN_TypeDefinitionIndex = 59552;

	class ABBLMKEOIGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattleEventByID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattleEventByID*))((::PBYTE)hIl2Cpp + ABBLMKEOIGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLMKEOIGN_ONTASKBEGIN_OFFSET))(this);
		}

	};
