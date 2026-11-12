#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJDMDKKMFI;
namespace RPG::Client { class PlayerGridFightRecordData; }

#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE68B980)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE68B9F0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xE68BBB0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE68BBD0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_ISVALIDTOSHOW_OFFSET UNITYSDK_OFFSET(0xE68BA00)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xE68BBC0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE68BBE0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE68B8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerGridFightRecordData_TypeDefinitionIndex = 65729;

	class PlayerGridFightRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionID_k__BackingField; // 0x10
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::HBJDMDKKMFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBJDMDKKMFI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SYNC_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlayerGridFightRecordData* Create()
		{
			return ((::RPG::Client::PlayerGridFightRecordData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CREATE_OFFSET))();
		}

		::System::Boolean IsValidToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_ISVALIDTOSHOW_OFFSET))(this);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONLEVEL_OFFSET))(this, a1);
		}

	};
}
