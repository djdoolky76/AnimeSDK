#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace UnityEngine { class Transform; }

#define CBHJIDPHFNF_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE0C190)
#define CBHJIDPHFNF_CTOR_OFFSET UNITYSDK_OFFSET(0xCE0C220)

inline static constexpr unsigned int CBHJIDPHFNF_TypeDefinitionIndex = 80532;

	class CBHJIDPHFNF : public ::IAJLHKIHBFB
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* PHHMFBDDAHK; // 0x28
		::UnityEngine::Transform* HADMOPFHPPF; // 0x30
		::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* KFNEAFKEFJC; // 0x38
		::System::Int32 PMIPHKEANNP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHJIDPHFNF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHJIDPHFNF_CLEAR_OFFSET))(this);
		}

	};
