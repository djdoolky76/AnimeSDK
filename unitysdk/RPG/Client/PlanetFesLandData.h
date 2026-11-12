#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class DAGGFIOGHGE;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesAvatarEventData; }
namespace RPG::Client { class PlanetFesMiniGame; }
namespace RPG::Client { class PlanetFesUnlockData; }
namespace RPG::GameCore { class PlanetFesLandRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESLANDDATA_BUYLAND_OFFSET UNITYSDK_OFFSET(0xE632FD0)
#define RPG_CLIENT_PLANETFESLANDDATA_CANBUY_OFFSET UNITYSDK_OFFSET(0xE632950)
#define RPG_CLIENT_PLANETFESLANDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE632720)
#define RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEAVATARVISIT_OFFSET UNITYSDK_OFFSET(0xE6338F0)
#define RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0xE633CF0)
#define RPG_CLIENT_PLANETFESLANDDATA_GETNOTFINISHEDUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xE632E30)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CANCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xE6344C0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CARGOICON_OFFSET UNITYSDK_OFFSET(0xE634740)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECTTOSTR_OFFSET UNITYSDK_OFFSET(0xE634440)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECT_OFFSET UNITYSDK_OFFSET(0xE634320)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMEPREDICT_OFFSET UNITYSDK_OFFSET(0xE633F90)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_CURWORKAVATAR_OFFSET UNITYSDK_OFFSET(0xE634230)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE634680)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_INCOMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xE633F50)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xE634580)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LANDID_OFFSET UNITYSDK_OFFSET(0xE633F10)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LANDTYPE_OFFSET UNITYSDK_OFFSET(0xE6345C0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_LASTSETTLEINCOMETIME_OFFSET UNITYSDK_OFFSET(0xE633F30)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE634610)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_PIC_OFFSET UNITYSDK_OFFSET(0xE6346F0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xE6345A0)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xE632C30)
#define RPG_CLIENT_PLANETFESLANDDATA_GET_WAITCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xE633F70)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_INCOMEPERSECOND_OFFSET UNITYSDK_OFFSET(0xE633F60)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_ISOWNED_OFFSET UNITYSDK_OFFSET(0xE634590)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_LANDID_OFFSET UNITYSDK_OFFSET(0xE633F20)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_LASTSETTLEINCOMETIME_OFFSET UNITYSDK_OFFSET(0xE633F40)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xE6345B0)
#define RPG_CLIENT_PLANETFESLANDDATA_SET_WAITCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xE633F80)
#define RPG_CLIENT_PLANETFESLANDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE6327A0)
#define RPG_CLIENT_PLANETFESLANDDATA_TRYCOLLECTINCOME_OFFSET UNITYSDK_OFFSET(0xE6336A0)
#define RPG_CLIENT_PLANETFESLANDDATA_TRYEQUIPAVATAR_OFFSET UNITYSDK_OFFSET(0xE6331B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandData_TypeDefinitionIndex = 68538;

	class PlanetFesLandData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _IncomePerSecond_k__BackingField; // 0x10
		::System::Numerics::BigInteger _Price_k__BackingField; // 0x20
		::System::Numerics::BigInteger _WaitCollectIncome_k__BackingField; // 0x30
		::RPG::GameCore::PlanetFesLandRow* _Row; // 0x40
		::System::Boolean _IsOwned_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 _LandID_k__BackingField; // 0x4C
		::System::Int64 _LastSettleIncomeTime_k__BackingField; // 0x50
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::DAGGFIOGHGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGGFIOGHGE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean CanBuy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_CANBUY_OFFSET))(this);
		}

		::RPG::Client::PlanetFesUnlockData* GetNotFinishedUnlockData()
		{
			return ((::RPG::Client::PlanetFesUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETNOTFINISHEDUNLOCKDATA_OFFSET))(this);
		}

		::System::Void BuyLand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_BUYLAND_OFFSET))(this);
		}

		::System::Void TryEquipAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_TRYEQUIPAVATAR_OFFSET))(this, a1);
		}

		::System::Void TryCollectIncome()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_TRYCOLLECTINCOME_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarEventData* GetActiveAvatarVisit()
		{
			return ((::RPG::Client::PlanetFesAvatarEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEAVATARVISIT_OFFSET))(this);
		}

		::RPG::Client::PlanetFesMiniGame* GetActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GETACTIVEGAMEDATA_OFFSET))(this);
		}

		::System::UInt32 get_LandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LANDID_OFFSET))(this);
		}

		::System::Void set_LandID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_LANDID_OFFSET))(this, a1);
		}

		::System::Int64 get_LastSettleIncomeTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LASTSETTLEINCOMETIME_OFFSET))(this);
		}

		::System::Void set_LastSettleIncomeTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_LASTSETTLEINCOMETIME_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_IncomePerSecond()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_INCOMEPERSECOND_OFFSET))(this);
		}

		::System::Void set_IncomePerSecond(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_INCOMEPERSECOND_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_WaitCollectIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_WAITCOLLECTINCOME_OFFSET))(this);
		}

		::System::Void set_WaitCollectIncome(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_WAITCOLLECTINCOME_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_CurIncomePredict()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMEPREDICT_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_CurIncomeCanCollect()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECT_OFFSET))(this);
		}

		::System::String* get_CurIncomeCanCollectToStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURINCOMECANCOLLECTTOSTR_OFFSET))(this);
		}

		::System::Boolean get_CanCollectIncome()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CANCOLLECTINCOME_OFFSET))(this);
		}

		::System::Boolean get_IsOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_ISOWNED_OFFSET))(this);
		}

		::System::Void set_IsOwned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_ISOWNED_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_Price()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_SET_PRICE_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesAvatarData* get_CurWorkAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CURWORKAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesLandType get_LandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_LANDTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Pic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_PIC_OFFSET))(this);
		}

		::System::String* get_CargoIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_CARGOICON_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDDATA_GET_UNLOCKIDLIST_OFFSET))(this);
		}

	};
}
