#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class OEFEDLLLAEL;
namespace RPG::GameCore { class GameEntity; }

#define OEFEDLLLAEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE2B760)
#define OEFEDLLLAEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2B7B0)
#define OEFEDLLLAEL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBE2B6F0)

inline static constexpr unsigned int OEFEDLLLAEL_TypeDefinitionIndex = 53861;

	class OEFEDLLLAEL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEDLLLAEL_CTOR_OFFSET))(this);
		}

		::OEFEDLLLAEL* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::OEFEDLLLAEL*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OEFEDLLLAEL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEDLLLAEL_CLEAR_OFFSET))(this);
		}

	};
