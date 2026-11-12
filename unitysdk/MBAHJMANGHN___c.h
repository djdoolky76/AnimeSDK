#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirSlot; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MBAHJMANGHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC0BC830)
#define MBAHJMANGHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC0BC870)
#define MBAHJMANGHN___C__FINDEQUIPMENTINRANGE_B__40_0_OFFSET UNITYSDK_OFFSET(0xC0BC880)

inline static constexpr unsigned int MBAHJMANGHN___c_TypeDefinitionIndex = 82116;

	class MBAHJMANGHN___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>** StaticGet___9__40_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirSlot*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D8B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D8B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBAHJMANGHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAHJMANGHN___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _FindEquipmentInRange_b__40_0(::RPG::Client::PixAir::PixAirSlot* a1, ::RPG::Client::PixAir::PixAirSlot* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + MBAHJMANGHN___C__FINDEQUIPMENTINRANGE_B__40_0_OFFSET))(this, a1, a2);
		}

	};
