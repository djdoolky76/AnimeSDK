#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DBE10)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9DB700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleDisplayRow_TypeDefinitionIndex = 14697;

	class RogueMiracleDisplayRow : public ::System::Object
	{
	public:
		::System::String* MiracleFigureIconPath; // 0x10
		::System::String* MiracleIconPath; // 0x18
		::System::UInt32 MiracleDisplayID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MiracleName; // 0x28
		::RPG::Client::TextID MiracleBGDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMiracleDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
