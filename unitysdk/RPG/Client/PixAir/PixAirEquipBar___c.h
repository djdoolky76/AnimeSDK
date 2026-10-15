#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB32F10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB32F50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEMPTY_B__20_0_OFFSET UNITYSDK_OFFSET(0xDB33000)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEQUIP_B__19_0_OFFSET UNITYSDK_OFFSET(0xDB32F60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipBar___c_TypeDefinitionIndex = 79326;

	class PixAirEquipBar___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D2B0);
		}

		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D2B8);
		}

		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ReplaceSlotWithEquip_b__19_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEQUIP_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEmpty_b__20_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPBAR___C__REPLACESLOTWITHEMPTY_B__20_0_OFFSET))(this, a1, a2);
		}

	};
}
