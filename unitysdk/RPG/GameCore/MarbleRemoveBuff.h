#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleRemoveBuff; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEREMOVEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8459F0)
#define RPG_GAMECORE_MARBLEREMOVEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D845A00)
#define RPG_GAMECORE_MARBLEREMOVEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8459A0)

namespace RPG::GameCore
{
	class MarbleRemoveBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14
		::System::UInt32 StackCount; // 0x18
		::System::Boolean UseFactor; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single RemoveFactor; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* RemoveFactorDynamic; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRemoveBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRemoveBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
