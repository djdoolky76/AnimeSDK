#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EBHGHFIKCOD_CTOR_OFFSET UNITYSDK_OFFSET(0x13AA37E0)
#define EBHGHFIKCOD_GET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x13AA3730)
#define EBHGHFIKCOD_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x13AA3770)
#define EBHGHFIKCOD_GET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x13AA3750)
#define EBHGHFIKCOD_GET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x13AA3710)
#define EBHGHFIKCOD_GET_UID_OFFSET UNITYSDK_OFFSET(0x13AA36F0)
#define EBHGHFIKCOD_NJLEFFGFCPC_OFFSET UNITYSDK_OFFSET(0x13AA3790)
#define EBHGHFIKCOD_SET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x13AA3740)
#define EBHGHFIKCOD_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x13AA3780)
#define EBHGHFIKCOD_SET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x13AA3760)
#define EBHGHFIKCOD_SET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x13AA3720)
#define EBHGHFIKCOD_SET_UID_OFFSET UNITYSDK_OFFSET(0x13AA3700)

inline static constexpr unsigned int EBHGHFIKCOD_TypeDefinitionIndex = 84856;

	class EBHGHFIKCOD : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _LineupAvatarIDs_k__BackingField; // 0x10
		::System::Boolean _IsSelf_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::System::Double _ConsumedActionValue_k__BackingField; // 0x20
		::System::UInt32 _MaxHpBarBreakCount_k__BackingField; // 0x28
		::System::UInt32 _Uid_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHpBarBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_GET_MAXHPBARBREAKCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxHpBarBreakCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_SET_MAXHPBARBREAKCOUNT_OFFSET))(this, a1);
		}

		::System::Double get_ConsumedActionValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_GET_CONSUMEDACTIONVALUE_OFFSET))(this);
		}

		::System::Void set_ConsumedActionValue(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_SET_CONSUMEDACTIONVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_LineupAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_GET_LINEUPAVATARIDS_OFFSET))(this);
		}

		::System::Void set_LineupAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_SET_LINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_GET_ISSELF_OFFSET))(this);
		}

		::System::Void set_IsSelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_SET_ISSELF_OFFSET))(this, a1);
		}

		::System::Boolean NJLEFFGFCPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGHFIKCOD_NJLEFFGFCPC_OFFSET))(this);
		}

	};
