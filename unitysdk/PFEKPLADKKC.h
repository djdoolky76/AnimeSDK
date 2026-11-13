#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PFEKPLADKKC_CTOR_OFFSET UNITYSDK_OFFSET(0x16D79150)
#define PFEKPLADKKC_GET_DEVICEIDLIST_OFFSET UNITYSDK_OFFSET(0x16D79160)
#define PFEKPLADKKC_GET_OPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x16D794F0)
#define PFEKPLADKKC_GET_TARGETSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x16D79500)
#define PFEKPLADKKC_MOEDJNIAGPK_OFFSET UNITYSDK_OFFSET(0x16D79170)

inline static constexpr unsigned int PFEKPLADKKC_TypeDefinitionIndex = 77045;

	class PFEKPLADKKC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _DeviceIDList_k__BackingField; // 0x10
		::System::Int32 _TargetSlotIndex_k__BackingField; // 0x18
		::RPG::GameCore::ComicDessertTutorialOperationType _OperationType_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::GameCore::ComicDessertTutorialOperationType a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComicDessertTutorialOperationType, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PFEKPLADKKC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_DeviceIDList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEKPLADKKC_GET_DEVICEIDLIST_OFFSET))(this);
		}

		::System::Boolean MOEDJNIAGPK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFEKPLADKKC_MOEDJNIAGPK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ComicDessertTutorialOperationType get_OperationType()
		{
			return ((::RPG::GameCore::ComicDessertTutorialOperationType(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEKPLADKKC_GET_OPERATIONTYPE_OFFSET))(this);
		}

		::System::Int32 get_TargetSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEKPLADKKC_GET_TARGETSLOTINDEX_OFFSET))(this);
		}

	};
