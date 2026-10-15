#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealGroupConfigRow; }

#define RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D819570)
#define RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D819430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealGroupConfigRow_TypeDefinitionIndex = 11861;

	class MarbleSealGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SealList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSealGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSealGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
