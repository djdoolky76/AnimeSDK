#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define OIHNAJFFFKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE94CE0)
#define OIHNAJFFFKB_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBE94CC0)
#define OIHNAJFFFKB_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE94C80)
#define OIHNAJFFFKB_GET_PERCENTAGEVALUE_OFFSET UNITYSDK_OFFSET(0xBE94CA0)
#define OIHNAJFFFKB_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBE94CD0)
#define OIHNAJFFFKB_SET_ID_OFFSET UNITYSDK_OFFSET(0xBE94C90)
#define OIHNAJFFFKB_SET_PERCENTAGEVALUE_OFFSET UNITYSDK_OFFSET(0xBE94CB0)

	class OIHNAJFFFKB : public ::System::Object
	{
	public:
		::RPG::Client::TextID _Desc_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Single _PercentageValue_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_SET_ID_OFFSET))(this, a1);
		}

		::System::Single get_PercentageValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_GET_PERCENTAGEVALUE_OFFSET))(this);
		}

		::System::Void set_PercentageValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_SET_PERCENTAGEVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + OIHNAJFFFKB_SET_DESC_OFFSET))(this, a1);
		}

	};
