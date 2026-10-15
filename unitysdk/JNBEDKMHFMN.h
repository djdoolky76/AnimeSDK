#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class INFDNKHJDPP;
class PJPPGJEDCOG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JNBEDKMHFMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB270780)
#define JNBEDKMHFMN_GET_AVAILABLECHIPMOLDS_OFFSET UNITYSDK_OFFSET(0xB2707F0)
#define JNBEDKMHFMN_GET_FILTERSESSION_OFFSET UNITYSDK_OFFSET(0xB270800)
#define JNBEDKMHFMN_GET_REQUIREMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xB2707E0)

inline static constexpr unsigned int JNBEDKMHFMN_TypeDefinitionIndex = 79528;

	class JNBEDKMHFMN : public ::System::Object
	{
	public:
		::PJPPGJEDCOG* _RequirementConfig_k__BackingField; // 0x10
		::INFDNKHJDPP* _FilterSession_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* _AvailableChipMolds_k__BackingField; // 0x20
		::System::Void _ctor(::PJPPGJEDCOG* a1, ::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PJPPGJEDCOG*, ::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*))((::PBYTE)hIl2Cpp + JNBEDKMHFMN_CTOR_OFFSET))(this, a1, a2);
		}

		::PJPPGJEDCOG* get_RequirementConfig()
		{
			return ((::PJPPGJEDCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBEDKMHFMN_GET_REQUIREMENTCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* get_AvailableChipMolds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBEDKMHFMN_GET_AVAILABLECHIPMOLDS_OFFSET))(this);
		}

		::INFDNKHJDPP* get_FilterSession()
		{
			return ((::INFDNKHJDPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBEDKMHFMN_GET_FILTERSESSION_OFFSET))(this);
		}

	};
