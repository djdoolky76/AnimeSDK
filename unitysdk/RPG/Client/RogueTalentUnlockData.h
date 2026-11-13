#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GKFGIMIBBHF;
namespace RPG::Client { class RogueTalentDataItem; }
namespace RPG::Client { class RogueTalentUnlockData; }

#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C85A540)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C85A600)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C85A7C0)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x1C85A710)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C85A610)
#define RPG_CLIENT_ROGUETALENTUNLOCKDATA_UPDATESRVDATA_OFFSET UNITYSDK_OFFSET(0x1C859CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentUnlockData_TypeDefinitionIndex = 69418;

	class RogueTalentUnlockData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTalentDataItem* _TalentDataItem; // 0x10
		::GKFGIMIBBHF* _Proto; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTalentUnlockData* Create(::RPG::Client::RogueTalentDataItem* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueTalentUnlockData*(*)(::RPG::Client::RogueTalentDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void UpdateSrvData(::GKFGIMIBBHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKFGIMIBBHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_UPDATESRVDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_ISFINISHED_OFFSET))(this);
		}

		::RPG::Client::TextID GetUnlockDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETUNLOCKDESC_OFFSET))(this);
		}

		::System::UInt32 GetProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTUNLOCKDATA_GETPROGRESS_OFFSET))(this);
		}

	};
}
