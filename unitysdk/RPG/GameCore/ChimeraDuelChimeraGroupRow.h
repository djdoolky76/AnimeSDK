#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelChimeraGroupRow; }

#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56F860)
#define RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D56F2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraGroupRow_TypeDefinitionIndex = 11141;

	class ChimeraDuelChimeraGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChimeraIDList; // 0x10
		::System::UInt32 ChimeraGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelChimeraGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelChimeraGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
