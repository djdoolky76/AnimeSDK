#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingConquerLevelRow; }

#define RPG_GAMECORE_CHENLINGCONQUERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58B2E0)
#define RPG_GAMECORE_CHENLINGCONQUERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58B1F0)

namespace RPG::GameCore
{
	class ChenLingConquerLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 PrivilegePointNum; // 0x10
		::System::UInt32 Level; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONQUERLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingConquerLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingConquerLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCONQUERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
