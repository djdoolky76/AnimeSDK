#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NDPFAOKFLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC3DFC90)
#define NDPFAOKFLLJ_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC3DFC10)
#define NDPFAOKFLLJ_GET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0xC3DFC50)
#define NDPFAOKFLLJ_GET_HPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC3DFC30)
#define NDPFAOKFLLJ_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xC3DFC70)
#define NDPFAOKFLLJ_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xC3DFC20)
#define NDPFAOKFLLJ_SET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0xC3DFC60)
#define NDPFAOKFLLJ_SET_HPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC3DFC40)
#define NDPFAOKFLLJ_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xC3DFC80)

inline static constexpr unsigned int NDPFAOKFLLJ_TypeDefinitionIndex = 84847;

	class NDPFAOKFLLJ : public ::System::Object
	{
	public:
		::System::UInt32 _HpBarBreakCount_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double _ConsumedActionValue_k__BackingField; // 0x18
		::System::Boolean _IsNewRecord_k__BackingField; // 0x20
		::System::Byte _padding1[0x3];
		::System::UInt32 _ChallengeID_k__BackingField; // 0x24
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
