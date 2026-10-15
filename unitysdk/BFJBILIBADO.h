#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPBLDAGPPFB;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFJBILIBADO_CTOR_OFFSET UNITYSDK_OFFSET(0xB16ECD0)
#define BFJBILIBADO_GET_MAPS_OFFSET UNITYSDK_OFFSET(0xB16ECC0)
#define BFJBILIBADO_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xB16ED50)

	class BFJBILIBADO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>* _Maps_k__BackingField; // 0x10
		::OPBLDAGPPFB* NIJOOBIAPGP; // 0x18
		::System::Void _ctor(::OPBLDAGPPFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPBLDAGPPFB*))((::PBYTE)hIl2Cpp + BFJBILIBADO_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>* get_Maps()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFJBILIBADO_GET_MAPS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleMap* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFJBILIBADO_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
