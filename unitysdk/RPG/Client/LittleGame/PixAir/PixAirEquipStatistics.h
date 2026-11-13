#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CCTOR_OFFSET UNITYSDK_OFFSET(0x20713080)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CLAMPSTATISTICVALUE_OFFSET UNITYSDK_OFFSET(0x20712D10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CTOR_OFFSET UNITYSDK_OFFSET(0x20713070)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALDIRECTDAMAGE_OFFSET UNITYSDK_OFFSET(0x20712C70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALHASTEDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x20712FD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALJAMDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x20712F30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALSHIELDGENERATED_OFFSET UNITYSDK_OFFSET(0x20712E90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALDIRECTDAMAGE_OFFSET UNITYSDK_OFFSET(0x20712C80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALHASTEDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x20712FE0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALJAMDURATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x20712F40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALSHIELDGENERATED_OFFSET UNITYSDK_OFFSET(0x20712EA0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipStatistics_TypeDefinitionIndex = 44658;

	class PixAirEquipStatistics : public ::System::Object
	{
	public:
		::System::UInt32 EquipLevel; // 0x10
		::System::Int32 EquipmentID; // 0x14
		::RPG::GameCore::FixPoint _totalShieldGenerated; // 0x18
		::RPG::GameCore::FixPoint _totalJamDurationApplied; // 0x20
		::System::Int32 SlotIndex; // 0x28
		::System::Int32 TotalBurnStacksAdded; // 0x2C
		::System::Int32 EntityRuntimeID; // 0x30
		::System::Int32 UseCount; // 0x34
		::RPG::GameCore::FixPoint _totalHasteDurationApplied; // 0x38
		::RPG::GameCore::FixPoint _totalDirectDamage; // 0x40
		static ::RPG::GameCore::FixPoint* StaticGet_MaxStatisticValue()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.Client.LittleGame.PixAir", "PixAirEquipStatistics")->GetStaticField(0x13580);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CCTOR_OFFSET))();
		}

		::RPG::GameCore::FixPoint get_TotalDirectDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALDIRECTDAMAGE_OFFSET))(this);
		}

		::System::Void set_TotalDirectDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALDIRECTDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalShieldGenerated()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALSHIELDGENERATED_OFFSET))(this);
		}

		::System::Void set_TotalShieldGenerated(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALSHIELDGENERATED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalJamDurationApplied()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALJAMDURATIONAPPLIED_OFFSET))(this);
		}

		::System::Void set_TotalJamDurationApplied(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALJAMDURATIONAPPLIED_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_TotalHasteDurationApplied()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_GET_TOTALHASTEDURATIONAPPLIED_OFFSET))(this);
		}

		::System::Void set_TotalHasteDurationApplied(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_SET_TOTALHASTEDURATIONAPPLIED_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixPoint ClampStatisticValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIREQUIPSTATISTICS_CLAMPSTATISTICVALUE_OFFSET))(a1);
		}

	};
}
