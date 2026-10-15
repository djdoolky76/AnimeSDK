#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdventureDyingParam; }

#define ILKJANNKCJO_CLEAR_OFFSET UNITYSDK_OFFSET(0x164C4030)
#define ILKJANNKCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x164C4080)

inline static constexpr unsigned int ILKJANNKCJO_TypeDefinitionIndex = 57920;

	class ILKJANNKCJO : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureDyingParam* BBPLELHMGCM; // 0x10
		::RPG::GameCore::AdventureAttackResult CIFLEKJAMHK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKJANNKCJO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKJANNKCJO_CLEAR_OFFSET))(this);
		}

	};
