#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHexAvatarBaseTypeRow; }

#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3CFD0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3C970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexAvatarBaseTypeRow_TypeDefinitionIndex = 15029;

	class RogueTournHexAvatarBaseTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* AvatarType; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* AvatarDamageType; // 0x18
		::System::UInt32 MiracleID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
