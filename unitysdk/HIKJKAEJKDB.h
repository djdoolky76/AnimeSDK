#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelCompareType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;

#define HIKJKAEJKDB_FIOHBFLANOP_OFFSET UNITYSDK_OFFSET(0x15CE98B0)
#define HIKJKAEJKDB_GNIEBGLNOGP_OFFSET UNITYSDK_OFFSET(0x15CE9340)
#define HIKJKAEJKDB_HGJJFLNONLA_OFFSET UNITYSDK_OFFSET(0x15CE9520)
#define HIKJKAEJKDB_KMGIAJLFPCN_OFFSET UNITYSDK_OFFSET(0x15CE99B0)

inline static constexpr unsigned int HIKJKAEJKDB_TypeDefinitionIndex = 77577;

	class HIKJKAEJKDB : public ::System::Object
	{
	public:
		static ::System::Boolean GNIEBGLNOGP(::RPG::GameCore::ChimeraDuelCompareType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChimeraDuelCompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIKJKAEJKDB_GNIEBGLNOGP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HGJJFLNONLA(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelAttributeSelectorType a2)
		{
			return ((::System::Single(*)(::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelAttributeSelectorType))((::PBYTE)hIl2Cpp + HIKJKAEJKDB_HGJJFLNONLA_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ChimeraDuelTeamType FIOHBFLANOP(::RPG::GameCore::ChimeraDuelTeamType a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2, ::RPG::GameCore::ChimeraDuelTeamType a3)
		{
			return ((::RPG::GameCore::ChimeraDuelTeamType(*)(::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamSelectorType, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + HIKJKAEJKDB_FIOHBFLANOP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean KMGIAJLFPCN(::RPG::GameCore::ChimeraDuelTeamType a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::RPG::GameCore::ChimeraDuelTeamSelectorType a3, ::RPG::GameCore::ChimeraDuelTeamType a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamType, ::RPG::GameCore::ChimeraDuelTeamSelectorType, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + HIKJKAEJKDB_KMGIAJLFPCN_OFFSET))(a1, a2, a3, a4);
		}

	};
