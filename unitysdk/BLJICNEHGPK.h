#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define BLJICNEHGPK_BJLAIPJICFG_OFFSET UNITYSDK_OFFSET(0xBA753C0)
#define BLJICNEHGPK_BKEMHAHNDNA_OFFSET UNITYSDK_OFFSET(0xBA74EE0)
#define BLJICNEHGPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA75430)
#define BLJICNEHGPK_INAHJDMCLEN_OFFSET UNITYSDK_OFFSET(0xBA74F40)
#define BLJICNEHGPK_JILBMIFGJJI_OFFSET UNITYSDK_OFFSET(0xBA74FA0)
#define BLJICNEHGPK_PLFOJJFNPPG_OFFSET UNITYSDK_OFFSET(0xBA751B0)

inline static constexpr unsigned int BLJICNEHGPK_TypeDefinitionIndex = 59031;

	class BLJICNEHGPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJICNEHGPK_CTOR_OFFSET))(this);
		}

		static ::System::Boolean BKEMHAHNDNA(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + BLJICNEHGPK_BKEMHAHNDNA_OFFSET))(a1, a2);
		}

		static ::System::Boolean INAHJDMCLEN(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + BLJICNEHGPK_INAHJDMCLEN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AetherSpiritType JILBMIFGJJI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLJICNEHGPK_JILBMIFGJJI_OFFSET))(a1);
		}

		static ::RPG::GameCore::AetherSpiritType PLFOJJFNPPG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLJICNEHGPK_PLFOJJFNPPG_OFFSET))(a1);
		}

		static ::RPG::GameCore::AetherSpiritType BJLAIPJICFG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLJICNEHGPK_BJLAIPJICFG_OFFSET))(a1);
		}

	};
