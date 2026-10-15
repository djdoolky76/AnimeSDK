#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
class EKPBGMKJGDL;
class IPMLDNLACFO;
class NGHCOJCMJOK;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesGachaResultAvatarFragmentsData; }
namespace RPG::Client { class PlanetFesGachaResultItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESGACHARESULTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDB97A50)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDB96BB0)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET UNITYSDK_OFFSET(0xDB96EF0)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET UNITYSDK_OFFSET(0xDB972E0)
#define RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET UNITYSDK_OFFSET(0xDB96E40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultData_TypeDefinitionIndex = 66597;

	class PlanetFesGachaResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*>* AvatarFragmentsList; // 0x10
		::System::Numerics::BigInteger Coin; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarData*>* NewAvatarList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesGachaResultItemData*>* ItemList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::NGHCOJCMJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHCOJCMJOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncItemList(::System::Collections::Generic::List_1<::IPMLDNLACFO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IPMLDNLACFO*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCITEMLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncNewAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCNEWAVATARLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncAvatarItemList(::System::Collections::Generic::List_1<::EKPBGMKJGDL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EKPBGMKJGDL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTDATA__SYNCAVATARITEMLIST_OFFSET))(this, a1);
		}

	};
}
