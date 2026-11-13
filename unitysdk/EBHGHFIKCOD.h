#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EBHGHFIKCOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BB590)
#define EBHGHFIKCOD_GET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1C3BB4E0)
#define EBHGHFIKCOD_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1C3BB520)
#define EBHGHFIKCOD_GET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C3BB500)
#define EBHGHFIKCOD_GET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3BB4C0)
#define EBHGHFIKCOD_GET_UID_OFFSET UNITYSDK_OFFSET(0x1C3BB4A0)
#define EBHGHFIKCOD_NJLEFFGFCPC_OFFSET UNITYSDK_OFFSET(0x1C3BB540)
#define EBHGHFIKCOD_SET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1C3BB4F0)
#define EBHGHFIKCOD_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1C3BB530)
#define EBHGHFIKCOD_SET_LINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C3BB510)
#define EBHGHFIKCOD_SET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C3BB4D0)
#define EBHGHFIKCOD_SET_UID_OFFSET UNITYSDK_OFFSET(0x1C3BB4B0)

inline static constexpr unsigned int EBHGHFIKCOD_TypeDefinitionIndex = 84855;

	class EBHGHFIKCOD : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _LineupAvatarIDs_k__BackingField; // 0x10
		::System::UInt32 _MaxHpBarBreakCount_k__BackingField; // 0x18
		::System::Boolean _IsSelf_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Double _ConsumedActionValue_k__BackingField; // 0x20
		::System::UInt32 _Uid_k__BackingField; // 0x28
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
