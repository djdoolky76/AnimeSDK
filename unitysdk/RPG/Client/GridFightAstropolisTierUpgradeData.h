#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C725DA0)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_GET_MAXTIERUPGRADEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1C725DC0)
#define RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_GET_TIERUPGRADEDTRAITIDS_OFFSET UNITYSDK_OFFSET(0x1C725DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAstropolisTierUpgradeData_TypeDefinitionIndex = 67296;

	class GridFightAstropolisTierUpgradeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TierUpgradedTraitIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MaxTierUpgradedTraitIDs_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TierUpgradedTraitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_GET_TIERUPGRADEDTRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MaxTierUpgradedTraitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASTROPOLISTIERUPGRADEDATA_GET_MAXTIERUPGRADEDTRAITIDS_OFFSET))(this);
		}

	};
}
