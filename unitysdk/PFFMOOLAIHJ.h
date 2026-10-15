#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define PFFMOOLAIHJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xC20D690)
#define PFFMOOLAIHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC20D6F0)

inline static constexpr unsigned int PFFMOOLAIHJ_TypeDefinitionIndex = 57714;

	class PFFMOOLAIHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Single KBKCPCDLDGO; // 0x18
		::RPG::MVector3 BBFOLEOPPPL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFMOOLAIHJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFMOOLAIHJ_CLEAR_OFFSET))(this);
		}

	};
