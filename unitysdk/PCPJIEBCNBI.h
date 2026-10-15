#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAFGAIKHMMG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BJCNEJFNIID;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define PCPJIEBCNBI_CLEAR_OFFSET UNITYSDK_OFFSET(0xC003D50)
#define PCPJIEBCNBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC003DA0)

inline static constexpr unsigned int PCPJIEBCNBI_TypeDefinitionIndex = 56057;

	class PCPJIEBCNBI : public ::System::Object
	{
	public:
		::BJCNEJFNIID* OLOKHEMMGOH; // 0x10
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
		::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x28
		::HAFGAIKHMMG FKCKKFALPBK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPJIEBCNBI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPJIEBCNBI_CLEAR_OFFSET))(this);
		}

	};
