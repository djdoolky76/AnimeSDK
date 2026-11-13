#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarDemoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoModuleConfigRow; }

#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC8B50)
#define RPG_GAMECORE_AVATARDEMOMODULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEC89B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoModuleConfigRow_TypeDefinitionIndex = 12847;

	class AvatarDemoModuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarDemoStageID; // 0x10
		::System::UInt32 Sort; // 0x14
		::RPG::GameCore::AvatarDemoType AvatarDemoType; // 0x18
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
