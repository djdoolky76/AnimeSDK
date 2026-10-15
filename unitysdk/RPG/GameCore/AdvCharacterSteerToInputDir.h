#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCharacterSteerToInputDir; }
namespace System { class String; }

#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399A70)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D399A80)
#define RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D399A40)

namespace RPG::GameCore
{
	class AdvCharacterSteerToInputDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeEnd; // 0x20
		::System::Single MinRotationSpeed; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterSteerToInputDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterSteerToInputDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERSTEERTOINPUTDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
