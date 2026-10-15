#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPAHFKMNOC;
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MODHHPELPLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA273B0)
#define MODHHPELPLO_GET_ROUTES_OFFSET UNITYSDK_OFFSET(0xBA273A0)
#define MODHHPELPLO_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xBA27430)

	class MODHHPELPLO : public ::System::Object
	{
	public:
		::FFPAHFKMNOC* IPBJJAJCCKD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>* _Routes_k__BackingField; // 0x18
		::System::Void _ctor(::FFPAHFKMNOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFPAHFKMNOC*))((::PBYTE)hIl2Cpp + MODHHPELPLO_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>* get_Routes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRoute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODHHPELPLO_GET_ROUTES_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRoute* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MODHHPELPLO_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
