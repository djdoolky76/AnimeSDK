#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9E2A0)
#define RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_RELICID_OFFSET UNITYSDK_OFFSET(0x1CA9E2B0)
#define RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_RELICTYPE_OFFSET UNITYSDK_OFFSET(0x1CA9E2C0)
#define RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CA9E2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemRelicTypeOption_TypeDefinitionIndex = 68796;

	class AsatPramadDiceItemRelicTypeOption : public ::System::Object
	{
	public:
		::RPG::Client::TextID _TypeName_k__BackingField; // 0x10
		::System::UInt32 _RelicID_k__BackingField; // 0x20
		::RPG::GameCore::RelicType _RelicType_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_RelicID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_RELICID_OFFSET))(this);
		}

		::RPG::GameCore::RelicType get_RelicType()
		{
			return ((::RPG::GameCore::RelicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_RELICTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMRELICTYPEOPTION_GET_TYPENAME_OFFSET))(this);
		}

	};
}
