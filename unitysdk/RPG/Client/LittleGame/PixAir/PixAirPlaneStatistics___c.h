#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::PixAir { class PixAirEquipStatistics; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA09560)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA095A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__GETEQUIPSTATSSORTEDBYUSECOUNT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1CA095B0)

namespace RPG::Client::LittleGame::PixAir
{
	class PixAirPlaneStatistics___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x5E5A0);
		}

		static ::System::Comparison_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*>**)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "<>c")->GetStaticField(0x5E5A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEquipStatsSortedByUseCount_b__7_0(::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* a1, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANESTATISTICS___C__GETEQUIPSTATSSORTEDBYUSECOUNT_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
