#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightPlayerPropertyType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2E6A0)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMAUGMENT_OFFSET UNITYSDK_OFFSET(0x1DF2E5B0)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_FROMBATTLE_OFFSET UNITYSDK_OFFSET(0x1DF2E600)
#define RPG_CLIENT_GRIDFIGHTPLAYERCHANGEDATA_GET_UNKNOWNREASON_OFFSET UNITYSDK_OFFSET(0x1DF2E650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayerChangeData_TypeDefinitionIndex = 66734;

	class GridFightPlayerChangeData : public ::System::Object
	{
	public:
		::JJDFGMMMCMI SrcType; // 0x10
		::System::Int32 OldValue; // 0x14
		::RPG::Client::GridFightPlayerPropertyType PropertyType; // 0x18
		::System::Int32 ChangeValue; // 0x1C
		::RPG::Client::TextID SrcName; // 0x20
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
