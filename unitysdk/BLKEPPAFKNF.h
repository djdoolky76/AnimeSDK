#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLKEPPAFKNF;

#define BLKEPPAFKNF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA75600)
#define BLKEPPAFKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA75690)
#define BLKEPPAFKNF_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xBA756A0)
#define BLKEPPAFKNF_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xBA756C0)
#define BLKEPPAFKNF_GET_RATIO_OFFSET UNITYSDK_OFFSET(0xBA756E0)
#define BLKEPPAFKNF_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xBA756B0)
#define BLKEPPAFKNF_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xBA756D0)
#define BLKEPPAFKNF_SET_RATIO_OFFSET UNITYSDK_OFFSET(0xBA756F0)

inline static constexpr unsigned int BLKEPPAFKNF_TypeDefinitionIndex = 66292;

	class BLKEPPAFKNF : public ::System::Object
	{
	public:
		::System::UInt32 _OptionID_k__BackingField; // 0x10
		::System::UInt32 _Ratio_k__BackingField; // 0x14
		::System::UInt32 _EventID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_CTOR_OFFSET))(this);
		}

		static ::BLKEPPAFKNF* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::BLKEPPAFKNF*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OptionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_GET_OPTIONID_OFFSET))(this);
		}

		::System::Void set_OptionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_SET_OPTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLKEPPAFKNF_SET_RATIO_OFFSET))(this, a1);
		}

	};
