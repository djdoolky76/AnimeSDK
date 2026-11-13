#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirTagDisplayData; }

#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D822E30)
#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82E170)
#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D82E150)
#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0x1D82E130)
#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D82E160)
#define RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_SET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0x1D82E140)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTagDisplayData_TypeDefinitionIndex = 82092;

	class PixAirTagDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirEquipTag _TagType_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PixAirEquipTag get_TagType()
		{
			return ((::RPG::GameCore::PixAirEquipTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_GET_TAGTYPE_OFFSET))(this);
		}

		::System::Void set_TagType(::RPG::GameCore::PixAirEquipTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirEquipTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_SET_TAGTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_SET_NAME_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirTagDisplayData* Create(::RPG::GameCore::PixAirEquipTag a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::PixAir::PixAirTagDisplayData*(*)(::RPG::GameCore::PixAirEquipTag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTAGDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

	};
}
