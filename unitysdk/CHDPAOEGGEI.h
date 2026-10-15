#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class HOBCIDMKOFM;
class KNHCNPDALBB;
class LBMCGPOLJHO;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CHDPAOEGGEI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8DC80)
#define CHDPAOEGGEI_GET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0xCC8DBD0)
#define CHDPAOEGGEI_GET_AVAILABLETALENTPATHS_OFFSET UNITYSDK_OFFSET(0xCC8DBF0)
#define CHDPAOEGGEI_GET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0xCC8DC10)
#define CHDPAOEGGEI_GET_EXPANDEDBOARDSIZE_OFFSET UNITYSDK_OFFSET(0xCC8DC30)
#define CHDPAOEGGEI_GET_INCREASEDOVERLAPMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCC8DC60)
#define CHDPAOEGGEI_GET_MODE_OFFSET UNITYSDK_OFFSET(0xCC8DBB0)
#define CHDPAOEGGEI_SET_AVAILABLECHIPIDS_OFFSET UNITYSDK_OFFSET(0xCC8DBE0)
#define CHDPAOEGGEI_SET_AVAILABLETALENTPATHS_OFFSET UNITYSDK_OFFSET(0xCC8DC00)
#define CHDPAOEGGEI_SET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0xCC8DC20)
#define CHDPAOEGGEI_SET_EXPANDEDBOARDSIZE_OFFSET UNITYSDK_OFFSET(0xCC8DC50)
#define CHDPAOEGGEI_SET_INCREASEDOVERLAPMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xCC8DC70)
#define CHDPAOEGGEI_SET_MODE_OFFSET UNITYSDK_OFFSET(0xCC8DBC0)

inline static constexpr unsigned int CHDPAOEGGEI_TypeDefinitionIndex = 79544;

	class CHDPAOEGGEI : public ::System::Object
	{
	public:
		::HOBCIDMKOFM* _BaseAttributeValue_k__BackingField; // 0x10
		::LBMCGPOLJHO* _Mode_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::KNHCNPDALBB*>* _AvailableTalentPaths_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AvailableChipIDs_k__BackingField; // 0x28
		::System::Nullable_1<::System::Int32> _IncreasedOverlapMaxCount_k__BackingField; // 0x30
		::System::Nullable_1<::UnityEngine::Vector2Int> _ExpandedBoardSize_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_CTOR_OFFSET))(this);
		}

		::LBMCGPOLJHO* get_Mode()
		{
			return ((::LBMCGPOLJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::LBMCGPOLJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBMCGPOLJHO*))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_MODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AvailableChipIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_AVAILABLECHIPIDS_OFFSET))(this);
		}

		::System::Void set_AvailableChipIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_AVAILABLECHIPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KNHCNPDALBB*>* get_AvailableTalentPaths()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KNHCNPDALBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_AVAILABLETALENTPATHS_OFFSET))(this);
		}

		::System::Void set_AvailableTalentPaths(::System::Collections::Generic::IReadOnlyList_1<::KNHCNPDALBB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KNHCNPDALBB*>*))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_AVAILABLETALENTPATHS_OFFSET))(this, a1);
		}

		::HOBCIDMKOFM* get_BaseAttributeValue()
		{
			return ((::HOBCIDMKOFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_BASEATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Void set_BaseAttributeValue(::HOBCIDMKOFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOBCIDMKOFM*))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_BASEATTRIBUTEVALUE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector2Int> get_ExpandedBoardSize()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_EXPANDEDBOARDSIZE_OFFSET))(this);
		}

		::System::Void set_ExpandedBoardSize(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_EXPANDEDBOARDSIZE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> get_IncreasedOverlapMaxCount()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_GET_INCREASEDOVERLAPMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_IncreasedOverlapMaxCount(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CHDPAOEGGEI_SET_INCREASEDOVERLAPMAXCOUNT_OFFSET))(this, a1);
		}

	};
