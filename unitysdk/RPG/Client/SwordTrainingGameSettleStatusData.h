#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SwordTrainingGameSettleStatusData; }
namespace RPG::GameCore { class SwordTrainingStatusRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xEC1F190)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEC20610)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleStatusData_TypeDefinitionIndex = 63374;

	class SwordTrainingGameSettleStatusData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconOutlinePath; // 0x18
		::System::UInt32 StatusNum; // 0x20
		::System::UInt32 StatusID; // 0x24
		::System::UInt32 StatusMax; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StatusName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleStatusData* Create(::RPG::GameCore::SwordTrainingStatusRow* a1)
		{
			return ((::RPG::Client::SwordTrainingGameSettleStatusData*(*)(::RPG::GameCore::SwordTrainingStatusRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESTATUSDATA_CREATE_OFFSET))(a1);
		}

	};
}
