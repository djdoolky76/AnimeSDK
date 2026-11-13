#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOAOAKKCCPK;
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }

#define OCNFFGBIMPD_IJLGHFOOGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x19A1E940)

inline static constexpr unsigned int OCNFFGBIMPD_IJLGHFOOGFF_TypeDefinitionIndex = 74370;

	class OCNFFGBIMPD_IJLGHFOOGFF : public ::System::Object
	{
	public:
		::KOAOAKKCCPK* ANHEGDAFFJC; // 0x10
		::RPG::GameCore::BattleGridFightTeamTraitData* EPHPJCPMOHA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNFFGBIMPD_IJLGHFOOGFF_CTOR_OFFSET))(this);
		}

	};
