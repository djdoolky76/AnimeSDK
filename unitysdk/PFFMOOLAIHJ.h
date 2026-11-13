#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PFFMOOLAIHJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D7B8F0)
#define PFFMOOLAIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16D7B950)

inline static constexpr unsigned int PFFMOOLAIHJ_TypeDefinitionIndex = 58947;

	class PFFMOOLAIHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::MVector3 BBFOLEOPPPL; // 0x18
		::System::Single KBKCPCDLDGO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFMOOLAIHJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFMOOLAIHJ_CLEAR_OFFSET))(this);
		}

	};
