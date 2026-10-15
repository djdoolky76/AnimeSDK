#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelCoreflameVesselLevelRow; }

#define RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59E390)
#define RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D59E240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCoreflameVesselLevelRow_TypeDefinitionIndex = 11117;

	class ChimeraDuelCoreflameVesselLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::UInt32 Level; // 0x18
		::System::UInt32 ChimeraID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelCoreflameVesselLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOREFLAMEVESSELLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
