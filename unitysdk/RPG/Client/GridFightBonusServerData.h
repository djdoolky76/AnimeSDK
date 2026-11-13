#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDCFMMGPCA;
class OIHFNODPOGM;
namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589F60)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET UNITYSDK_OFFSET(0x1D589A70)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET UNITYSDK_OFFSET(0x1D589E50)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET UNITYSDK_OFFSET(0x1D589EC0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0x1D589F20)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0x1D589F40)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET UNITYSDK_OFFSET(0x1D589CD0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET UNITYSDK_OFFSET(0x1D589C30)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET UNITYSDK_OFFSET(0x1D589F30)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET UNITYSDK_OFFSET(0x1D589F50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_TypeDefinitionIndex = 65895;

	class GridFightBonusServerData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* _InitialSupplyBonusResultData_k__BackingField; // 0x10
		::System::Collections::Generic::Queue_1<::OIHFNODPOGM*>* bonusDistributorQueue; // 0x18
		::System::Collections::Generic::List_1<::EDDCFMMGPCA*>* _TraitBonuses_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_CTOR_OFFSET))(this);
		}

		::System::Void DistributeBonus(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_DISTRIBUTEBONUS_OFFSET))(this, a1);
		}

		::System::Void RegisteDistributor(::OIHFNODPOGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIHFNODPOGM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_REGISTEDISTRIBUTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsBattleBonusContainsOrb(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ISBATTLEBONUSCONTAINSORB_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInitialSupplyBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASINITIALSUPPLYBONUS_OFFSET))(this);
		}

		::System::Boolean get_HasTraitEffectBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_HASTRAITEFFECTBONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusResultData* get_InitialSupplyBonusResultData()
		{
			return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this);
		}

		::System::Void set_InitialSupplyBonusResultData(::RPG::Client::GridFightBonusResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_INITIALSUPPLYBONUSRESULTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EDDCFMMGPCA*>* get_TraitBonuses()
		{
			return ((::System::Collections::Generic::List_1<::EDDCFMMGPCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_GET_TRAITBONUSES_OFFSET))(this);
		}

		::System::Void set_TraitBonuses(::System::Collections::Generic::List_1<::EDDCFMMGPCA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EDDCFMMGPCA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_SET_TRAITBONUSES_OFFSET))(this, a1);
		}

	};
}
