#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarDemoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }

#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4113C0)
#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D411220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoModuleConfigRow_TypeDefinitionIndex = 12775;

	class AvatarDemoModuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Sort; // 0x10
		::RPG::GameCore::AvatarDemoType AvatarDemoType; // 0x14
		::System::UInt32 AvatarDemoStageID; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDemoModuleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDemoModuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
