#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
class CCPCAIGEBCB;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CREATEENCHANTEQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xDB37270)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDB36FF0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_DOENCHANT_OFFSET UNITYSDK_OFFSET(0xDB37040)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xDB373B0)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_ENCHANTTYPE_OFFSET UNITYSDK_OFFSET(0xDB37020)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDB37420)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SET_ENCHANTTYPE_OFFSET UNITYSDK_OFFSET(0xDB37030)
#define RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SKIPENCHANT_OFFSET UNITYSDK_OFFSET(0xDB37220)

namespace RPG::Client::PixAir
{
	class PixAirEnchantAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::GameCore::PixAirEnchantmentType _EnchantType_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::CCPCAIGEBCB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CCPCAIGEBCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PixAirEnchantmentType get_EnchantType()
		{
			return ((::RPG::GameCore::PixAirEnchantmentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_ENCHANTTYPE_OFFSET))(this);
		}

		::System::Void set_EnchantType(::RPG::GameCore::PixAirEnchantmentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirEnchantmentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SET_ENCHANTTYPE_OFFSET))(this, a1);
		}

		::System::Void DoEnchant(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_DOENCHANT_OFFSET))(this, a1);
		}

		::System::Void SkipEnchant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_SKIPENCHANT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* CreateEnchantEquipInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_CREATEENCHANTEQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENCHANTACTION_GET_NODECASE_OFFSET))(this);
		}

	};
}
