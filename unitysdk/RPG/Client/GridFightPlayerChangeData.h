#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightPlayerPropertyType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDC30820)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMAUGMENT_OFFSET UNITYSDK_OFFSET(0xDC30730)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMBATTLE_OFFSET UNITYSDK_OFFSET(0xDC30780)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_UNKNOWNREASON_OFFSET UNITYSDK_OFFSET(0xDC307D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerChangeData_TypeDefinitionIndex = 66734;

	class GridFightPlayerChangeData : public ::System::Object
	{
	public:
		::RPG::Client::TextID SrcName; // 0x10
		::System::Int32 OldValue; // 0x20
		::RPG::Client::GridFightPlayerPropertyType PropertyType; // 0x24
		::System::Int32 ChangeValue; // 0x28
		::JJDFGMMMCMI SrcType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_FromAugment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMAUGMENT_OFFSET))(this);
		}

		::System::Boolean get_FromBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMBATTLE_OFFSET))(this);
		}

		::System::Boolean get_UnknownReason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_UNKNOWNREASON_OFFSET))(this);
		}

	};
}
