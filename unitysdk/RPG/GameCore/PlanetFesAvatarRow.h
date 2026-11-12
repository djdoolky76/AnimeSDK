#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/RPG/GameCore/PlanetFesStandType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3BD30)
#define RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB3B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRow_TypeDefinitionIndex = 12246;

	class PlanetFesAvatarRow : public ::System::Object
	{
	public:
		::System::String* MiniIcon; // 0x10
		::System::String* MidIcon; // 0x18
		::System::String* AnimConfig; // 0x20
		::System::String* CargoIcon; // 0x28
		::System::String* Description; // 0x30
		::Il2CppArray<::System::UInt32>* Skill1List; // 0x38
		::System::String* HeadIcon; // 0x40
		::Il2CppArray<::System::UInt32>* Skill2List; // 0x48
		::Il2CppArray<::System::UInt32>* GachaUnlockIDList; // 0x50
		::System::String* Body; // 0x58
		::System::UInt32 IncomeParam; // 0x60
		::System::UInt32 Rarity; // 0x64
		::RPG::Client::TextID Name; // 0x68
		::RPG::GameCore::PlanetFesLandType LandType; // 0x78
		::System::UInt32 ID; // 0x7C
		::System::UInt32 ItemID; // 0x80
		::RPG::GameCore::PlanetFesStandType PlanetType; // 0x84
		::System::UInt32 CD; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
