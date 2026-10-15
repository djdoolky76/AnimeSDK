#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBAILHMCOI;
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD0E1360)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD0E1340)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD0E1350)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD0E00E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo_TypeDefinitionIndex = 64412;

	class GridFightBattleSttInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::BHBAILHMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SET_DAMAGESTATISTICS_OFFSET))(this, a1);
		}

	};
}
