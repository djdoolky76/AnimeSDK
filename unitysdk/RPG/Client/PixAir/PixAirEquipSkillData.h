#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class PEFKKFODAPH;
namespace RPG::Client::PixAir { class PixAirEquipSkillData; }
namespace RPG::GameCore { class PixAirSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDB41970)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDB46710)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0xDB41820)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLDESCTEXTID_OFFSET UNITYSDK_OFFSET(0xDB417B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDB46790)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDB467A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__INIT_OFFSET UNITYSDK_OFFSET(0xDB46720)

namespace RPG::Client::PixAir
{
	class PixAirEquipSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirSkillRow* _Row; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipSkillData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA__INIT_OFFSET))(this);
		}

		::System::String* GetDesc(::PEFKKFODAPH* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PEFKKFODAPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GETDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_SET_SKILLID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillDescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSKILLDATA_GET_SKILLDESCTEXTID_OFFSET))(this);
		}

	};
}
