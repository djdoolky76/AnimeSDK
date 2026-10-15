#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class DGBEPKNAJBM;
namespace RPG::GameCore { class GameEntity; }

#define DGBEPKNAJBM_CLEAR_OFFSET UNITYSDK_OFFSET(0xE837EC0)
#define DGBEPKNAJBM_CTOR_OFFSET UNITYSDK_OFFSET(0xE837F10)
#define DGBEPKNAJBM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE837E50)

inline static constexpr unsigned int DGBEPKNAJBM_TypeDefinitionIndex = 55163;

	class DGBEPKNAJBM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::FixPoint PMEGJKPHDMH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBEPKNAJBM_CTOR_OFFSET))(this);
		}

		::DGBEPKNAJBM* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::DGBEPKNAJBM*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DGBEPKNAJBM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBEPKNAJBM_CLEAR_OFFSET))(this);
		}

	};
