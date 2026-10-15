#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class IPMLDNLACFO;
namespace RPG::Client { class PlanetFesGachaResultItemData; }

#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDB97670)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDB97B40)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDB97BD0)
#define RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET UNITYSDK_OFFSET(0xDB97710)

namespace RPG::Client
{
	class PlanetFesGachaResultItemData : public ::System::Object
	{
	public:
		::System::UInt32 ItemNum; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create(::FMKMEFMOJGJ* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::FMKMEFMOJGJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesGachaResultItemData* Create_1(::IPMLDNLACFO* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultItemData*(*)(::IPMLDNLACFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void Merge(::RPG::Client::PlanetFesGachaResultItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTITEMDATA_MERGE_OFFSET))(this, a1);
		}

	};
}
