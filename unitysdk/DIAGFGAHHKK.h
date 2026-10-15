#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define DIAGFGAHHKK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE8D10)
#define DIAGFGAHHKK_HDHKGACLMAN_OFFSET UNITYSDK_OFFSET(0xEBE87D0)
#define DIAGFGAHHKK_NLLPCNDOFMC_OFFSET UNITYSDK_OFFSET(0xEBE8B00)

inline static constexpr unsigned int DIAGFGAHHKK_TypeDefinitionIndex = 54122;

	class DIAGFGAHHKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGFGAHHKK_CTOR_OFFSET))(this);
		}

		::System::Void HDHKGACLMAN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIAGFGAHHKK_HDHKGACLMAN_OFFSET))(this, a1, a2);
		}

		::System::Void NLLPCNDOFMC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIAGFGAHHKK_NLLPCNDOFMC_OFFSET))(this, a1, a2);
		}

	};
