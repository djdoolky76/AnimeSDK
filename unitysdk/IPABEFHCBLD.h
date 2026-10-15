#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPABEFHCBLD;

#define IPABEFHCBLD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1651C400)
#define IPABEFHCBLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1651C3F0)
#define IPABEFHCBLD_GET_DICEID_OFFSET UNITYSDK_OFFSET(0x1651C4C0)
#define IPABEFHCBLD_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1651C4E0)
#define IPABEFHCBLD_SET_DICEID_OFFSET UNITYSDK_OFFSET(0x1651C4D0)
#define IPABEFHCBLD_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x1651C4F0)

	class IPABEFHCBLD : public ::System::Object
	{
	public:
		::System::UInt32 _DiceID_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 _UnlockTime_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPABEFHCBLD_CTOR_OFFSET))(this);
		}

		static ::IPABEFHCBLD* BPLPBPMEODA(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::IPABEFHCBLD*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + IPABEFHCBLD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPABEFHCBLD_GET_DICEID_OFFSET))(this);
		}

		::System::Void set_DiceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPABEFHCBLD_SET_DICEID_OFFSET))(this, a1);
		}

		::System::Int64 get_UnlockTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IPABEFHCBLD_GET_UNLOCKTIME_OFFSET))(this);
		}

		::System::Void set_UnlockTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IPABEFHCBLD_SET_UNLOCKTIME_OFFSET))(this, a1);
		}

	};
