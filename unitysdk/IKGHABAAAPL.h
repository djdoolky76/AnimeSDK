#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKILHIPMLFL;
class FMMLIBBFDHG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IKGHABAAAPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1745E890)
#define IKGHABAAAPL_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1745E790)
#define IKGHABAAAPL_GET_DRAGDELETEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1745E7F0)
#define IKGHABAAAPL_GET_HASLONGTAILRECORD_OFFSET UNITYSDK_OFFSET(0x1745E850)
#define IKGHABAAAPL_GET_INSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x1745E770)
#define IKGHABAAAPL_GET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0x1745E810)
#define IKGHABAAAPL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1745E750)
#define IKGHABAAAPL_GET_LONGTAILBESTCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1745E830)
#define IKGHABAAAPL_GET_SHOWASSEMBLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1745E7D0)
#define IKGHABAAAPL_GET_STAGEPRICEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1745E870)
#define IKGHABAAAPL_GET_UNLOCKEDDISHES_OFFSET UNITYSDK_OFFSET(0x1745E7B0)
#define IKGHABAAAPL_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1745E7A0)
#define IKGHABAAAPL_SET_DRAGDELETEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1745E800)
#define IKGHABAAAPL_SET_HASLONGTAILRECORD_OFFSET UNITYSDK_OFFSET(0x1745E860)
#define IKGHABAAAPL_SET_INSTRUCTIONID_OFFSET UNITYSDK_OFFSET(0x1745E780)
#define IKGHABAAAPL_SET_ISLONGTAIL_OFFSET UNITYSDK_OFFSET(0x1745E820)
#define IKGHABAAAPL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1745E760)
#define IKGHABAAAPL_SET_LONGTAILBESTCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1745E840)
#define IKGHABAAAPL_SET_SHOWASSEMBLYEFFECT_OFFSET UNITYSDK_OFFSET(0x1745E7E0)
#define IKGHABAAAPL_SET_STAGEPRICEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1745E880)
#define IKGHABAAAPL_SET_UNLOCKEDDISHES_OFFSET UNITYSDK_OFFSET(0x1745E7C0)

inline static constexpr unsigned int IKGHABAAAPL_TypeDefinitionIndex = 77014;

	class IKGHABAAAPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>* _Devices_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::FMMLIBBFDHG*>* _UnlockedDishes_k__BackingField; // 0x18
		::System::UInt32 _InstructionID_k__BackingField; // 0x20
		::System::Boolean _HasLongTailRecord_k__BackingField; // 0x24
		::System::Boolean _ShowAssemblyEffect_k__BackingField; // 0x25
		::System::Boolean _IsLongTail_k__BackingField; // 0x26
		::System::Boolean _DragDeleteUnlocked_k__BackingField; // 0x27
		::System::Single _StagePriceMultiplier_k__BackingField; // 0x28
		::System::UInt32 _LevelId_k__BackingField; // 0x2C
		::System::UInt32 _LongTailBestCustomerCount_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstructionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_INSTRUCTIONID_OFFSET))(this);
		}

		::System::Void set_InstructionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_INSTRUCTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>* get_Devices()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_DEVICES_OFFSET))(this);
		}

		::System::Void set_Devices(::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BKILHIPMLFL*>*))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_DEVICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FMMLIBBFDHG*>* get_UnlockedDishes()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FMMLIBBFDHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_UNLOCKEDDISHES_OFFSET))(this);
		}

		::System::Void set_UnlockedDishes(::System::Collections::Generic::IReadOnlyList_1<::FMMLIBBFDHG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FMMLIBBFDHG*>*))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_UNLOCKEDDISHES_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowAssemblyEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_SHOWASSEMBLYEFFECT_OFFSET))(this);
		}

		::System::Void set_ShowAssemblyEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_SHOWASSEMBLYEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_DragDeleteUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_DRAGDELETEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_DragDeleteUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_DRAGDELETEUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_ISLONGTAIL_OFFSET))(this);
		}

		::System::Void set_IsLongTail(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_ISLONGTAIL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LongTailBestCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_LONGTAILBESTCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Void set_LongTailBestCustomerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_LONGTAILBESTCUSTOMERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLongTailRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_HASLONGTAILRECORD_OFFSET))(this);
		}

		::System::Void set_HasLongTailRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_HASLONGTAILRECORD_OFFSET))(this, a1);
		}

		::System::Single get_StagePriceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGHABAAAPL_GET_STAGEPRICEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_StagePriceMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKGHABAAAPL_SET_STAGEPRICEMULTIPLIER_OFFSET))(this, a1);
		}

	};
