#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define AGDFBGCMLEG_CFLOGOHBBBC_OFFSET UNITYSDK_OFFSET(0xE7E30)
#define AGDFBGCMLEG_FLPLHJIANBD_OFFSET UNITYSDK_OFFSET(0xE7E20)
#define AGDFBGCMLEG_HDKHFLBDIHH_OFFSET UNITYSDK_OFFSET(0xE7E80)
#define AGDFBGCMLEG_ICANOMDKDEO_OFFSET UNITYSDK_OFFSET(0xE7E00)
#define AGDFBGCMLEG_MMJPADDGDDD_OFFSET UNITYSDK_OFFSET(0xE7E10)

inline static constexpr unsigned int AGDFBGCMLEG_TypeDefinitionIndex = 59055;

	struct alignas(8) AGDFBGCMLEG
	{
		::RPG::GameCore::GameEntity* LEGOPIOOCCL; // 0x10
		::RPG::GameCore::GameEntity* BOHBIOFAJEI; // 0x18
		::RPG::GameCore::GameEntity* OGMJNGAKCIP; // 0x20
		::RPG::GameCore::GameEntity* NKOCFCEBCHN; // 0x28
		::System::Int32 GHNOEFICBCA; // 0x30
		::System::Void ICANOMDKDEO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + AGDFBGCMLEG_ICANOMDKDEO_OFFSET))(this, a1, a2);
		}

		::System::Void MMJPADDGDDD(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + AGDFBGCMLEG_MMJPADDGDDD_OFFSET))(this, a1);
		}

		::System::Void FLPLHJIANBD(::RPG::GameCore::GameEntityList* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Int32))((::PBYTE)hIl2Cpp + AGDFBGCMLEG_FLPLHJIANBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean CFLOGOHBBBC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGDFBGCMLEG_CFLOGOHBBBC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* HDKHFLBDIHH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AGDFBGCMLEG_HDKHFLBDIHH_OFFSET))(this, a1);
		}

	};
