#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34B720)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34B760)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__ADDNEWEQUIP_B__21_1_OFFSET UNITYSDK_OFFSET(0x1E34B770)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEMPTY_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E34B8B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEQUIP_B__27_0_OFFSET UNITYSDK_OFFSET(0x1E34B810)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag___c_TypeDefinitionIndex = 82099;

	class PixAirBag___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__21_1()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x32E60);
		}

		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x32E68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x32E70);
		}

		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x32E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _AddNewEquip_b__21_1(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__ADDNEWEQUIP_B__21_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEquip_b__27_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEQUIP_B__27_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ReplaceSlotWithEmpty_b__28_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__REPLACESLOTWITHEMPTY_B__28_0_OFFSET))(this, a1, a2);
		}

	};
}
