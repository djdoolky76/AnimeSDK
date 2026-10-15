#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingWaveExpRow; }

#define RPG_GAMECORE_CHENLINGWAVEEXPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D595360)
#define RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D595240)

namespace RPG::GameCore
{
	class ChenLingWaveExpRow : public ::System::Object
	{
	public:
		::System::UInt32 Wave; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingWaveExpRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingWaveExpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGWAVEEXPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
