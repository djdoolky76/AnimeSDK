#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDHJMNAGIIA.h"
#include "unitysdk/System/Object.h"
class EIFBMCGPNMG;
class INOEJKDIMKO;
namespace RPG::Client::PixAir { class PixAirGameSession; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDB39AF0)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_RECORDCHANGE_OFFSET UNITYSDK_OFFSET(0xDB39040)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDBASICCHANGE_OFFSET UNITYSDK_OFFSET(0xDB39620)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDSLOTNUMCHANGE_OFFSET UNITYSDK_OFFSET(0xDB39A90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterNewAreaAction_TypeDefinitionIndex = 79278;

	class PixAirEnterNewAreaAction : public ::System::Object
	{
	public:
		::System::Int32 _TempSlotNum; // 0x10
		::System::Int32 _TempMaxHp; // 0x14
		::System::Int32 _TempCoin; // 0x18
		::System::Int32 AddSlotNum; // 0x1C
		::System::Int32 AddMaxHp; // 0x20
		::System::Int32 AddCoin; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_CTOR_OFFSET))(this);
		}

		::System::Void RecordChange(::INOEJKDIMKO* a1, ::RPG::Client::PixAir::PixAirGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INOEJKDIMKO*, ::RPG::Client::PixAir::PixAirGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION_RECORDCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordBasicChange(::JDHJMNAGIIA a1, ::EIFBMCGPNMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JDHJMNAGIIA, ::EIFBMCGPNMG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDBASICCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordSlotNumChange(::JDHJMNAGIIA a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JDHJMNAGIIA, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERNEWAREAACTION__RECORDSLOTNUMCHANGE_OFFSET))(this, a1, a2);
		}

	};
}
