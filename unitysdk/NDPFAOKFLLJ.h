#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDPFAOKFLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16FCF480)
#define NDPFAOKFLLJ_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x16FCF400)
#define NDPFAOKFLLJ_GET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x16FCF440)
#define NDPFAOKFLLJ_GET_HPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x16FCF420)
#define NDPFAOKFLLJ_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x16FCF460)
#define NDPFAOKFLLJ_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x16FCF410)
#define NDPFAOKFLLJ_SET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0x16FCF450)
#define NDPFAOKFLLJ_SET_HPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0x16FCF430)
#define NDPFAOKFLLJ_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x16FCF470)

inline static constexpr unsigned int NDPFAOKFLLJ_TypeDefinitionIndex = 84846;

	class NDPFAOKFLLJ : public ::System::Object
	{
	public:
		::System::UInt32 _ChallengeID_k__BackingField; // 0x10
		::System::UInt32 _HpBarBreakCount_k__BackingField; // 0x14
		::System::Double _ConsumedActionValue_k__BackingField; // 0x18
		::System::Boolean _IsNewRecord_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_HpBarBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_GET_HPBARBREAKCOUNT_OFFSET))(this);
		}

		::System::Void set_HpBarBreakCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_SET_HPBARBREAKCOUNT_OFFSET))(this, a1);
		}

		::System::Double get_ConsumedActionValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_GET_CONSUMEDACTIONVALUE_OFFSET))(this);
		}

		::System::Void set_ConsumedActionValue(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_SET_CONSUMEDACTIONVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDPFAOKFLLJ_SET_ISNEWRECORD_OFFSET))(this, a1);
		}

	};
