#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleConnectionPointType.h"
#include "unitysdk/RPG/GameCore/ChronicleLineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleConnectionConfig; }

#define RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B23E0)
#define RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleConnectionConfig_TypeDefinitionIndex = 18975;

	class ChronicleConnectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChronicleLineType LineType; // 0x14
		::RPG::GameCore::ChronicleConnectionPointType FromPoint; // 0x18
		::RPG::GameCore::ChronicleConnectionPointType ToPoint; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChronicleConnectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChronicleConnectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECONNECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
