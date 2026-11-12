#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"
class BGPIHMLLNGM;

#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE46B440)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xE46B370)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0xE46B3B0)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE46B3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int NonePlayerRogueRecordData_TypeDefinitionIndex = 65732;

	class NonePlayerRogueRecordData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::BGPIHMLLNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGPIHMLLNGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET))(this, a1);
		}

	};
}
