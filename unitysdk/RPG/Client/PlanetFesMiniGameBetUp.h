#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigInteger.h"
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace RPG::Client { class PlanetFesModule; }
namespace RPG::GameCore { class PlanetFesRaiseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_CREATE_OFFSET UNITYSDK_OFFSET(0xE637D50)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE637DB0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_COSTSTR_OFFSET UNITYSDK_OFFSET(0xE638430)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOSTBIGINTEGER_OFFSET UNITYSDK_OFFSET(0xE637F10)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOST_OFFSET UNITYSDK_OFFSET(0xE637E70)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDICON_OFFSET UNITYSDK_OFFSET(0xE6384B0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ISGOLDENOUGH_OFFSET UNITYSDK_OFFSET(0xE6386C0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xE637DC0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISEVALUE_OFFSET UNITYSDK_OFFSET(0xE637DE0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE637E00)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__GOLDITEMID_OFFSET UNITYSDK_OFFSET(0xE6385E0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xE638130)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISECURVEID_OFFSET UNITYSDK_OFFSET(0xE637DD0)
#define RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISEVALUE_OFFSET UNITYSDK_OFFSET(0xE637DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBetUp_TypeDefinitionIndex = 68543;

	class PlanetFesMiniGameBetUp : public ::System::Object
	{
	public:
		::System::UInt32 _RaiseCurveID_k__BackingField; // 0x10
		::System::UInt32 _RaiseValue_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesMiniGameBetUp* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PlanetFesMiniGameBetUp*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_RaiseCurveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISECURVEID_OFFSET))(this);
		}

		::System::Void set_RaiseCurveID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISECURVEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RaiseValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_RAISEVALUE_OFFSET))(this);
		}

		::System::Void set_RaiseValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_SET_RAISEVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesRaiseConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesRaiseConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_GoldCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOST_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_GoldCostBigInteger()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDCOSTBIGINTEGER_OFFSET))(this);
		}

		::System::String* get_CostStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_COSTSTR_OFFSET))(this);
		}

		::System::String* get_GoldIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_GOLDICON_OFFSET))(this);
		}

		::System::Boolean get_IsGoldEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET_ISGOLDENOUGH_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__MODULE_OFFSET))(this);
		}

		::System::UInt32 get__GoldItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBETUP_GET__GOLDITEMID_OFFSET))(this);
		}

	};
}
