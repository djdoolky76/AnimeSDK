#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/RPG/GameCore/LittleGamePixAirEquipmentFaction.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLGCJGEHPHO_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xB243D40)
#define JLGCJGEHPHO_AFFPGPPPCLM_OFFSET UNITYSDK_OFFSET(0xB244710)
#define JLGCJGEHPHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2447E0)
#define JLGCJGEHPHO_ECNFBLHCIEB_OFFSET UNITYSDK_OFFSET(0xB244770)
#define JLGCJGEHPHO_GBCADBOJDPF_OFFSET UNITYSDK_OFFSET(0xB244350)

inline static constexpr unsigned int JLGCJGEHPHO_TypeDefinitionIndex = 77372;

	class JLGCJGEHPHO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGCJGEHPHO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + JLGCJGEHPHO_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::PixAir::PixAirPlaneType GBCADBOJDPF(::IOGNBKGNPFD* a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + JLGCJGEHPHO_GBCADBOJDPF_OFFSET))(this, a1);
		}

		::System::Boolean AFFPGPPPCLM(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + JLGCJGEHPHO_AFFPGPPPCLM_OFFSET))(this, a1, a2);
		}

		::System::Boolean ECNFBLHCIEB(::RPG::GameCore::LittleGamePixAirEquipmentFaction a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGamePixAirEquipmentFaction, ::System::Boolean))((::PBYTE)hIl2Cpp + JLGCJGEHPHO_ECNFBLHCIEB_OFFSET))(this, a1, a2);
		}

	};
