#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleWheelSelectConfigRow; }

#define RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BC090)
#define RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7BB840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelSelectConfigRow_TypeDefinitionIndex = 13323;

	class LittleWheelSelectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Left1; // 0x10
		::Il2CppArray<::System::UInt32>* Left2; // 0x18
		::Il2CppArray<::System::UInt32>* Left3; // 0x20
		::Il2CppArray<::System::UInt32>* Right3; // 0x28
		::Il2CppArray<::System::UInt32>* Left4; // 0x30
		::Il2CppArray<::System::UInt32>* Right2; // 0x38
		::Il2CppArray<::System::UInt32>* Right1; // 0x40
		::Il2CppArray<::System::UInt32>* Right4; // 0x48
		::RPG::GameCore::GameModeType GameMode; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleWheelSelectConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleWheelSelectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
