#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DILIKOIGENM;

#define JAPKPEJKIDB_CTOR_OFFSET UNITYSDK_OFFSET(0xB895180)
#define JAPKPEJKIDB_GET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0xB895100)
#define JAPKPEJKIDB_GET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0xB895140)
#define JAPKPEJKIDB_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xB895160)
#define JAPKPEJKIDB_GET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0xB8950E0)
#define JAPKPEJKIDB_GET_REVENUECURRENCY_OFFSET UNITYSDK_OFFSET(0xB8950C0)
#define JAPKPEJKIDB_GET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0xB895120)
#define JAPKPEJKIDB_SET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0xB895110)
#define JAPKPEJKIDB_SET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0xB895150)
#define JAPKPEJKIDB_SET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xB895170)
#define JAPKPEJKIDB_SET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0xB8950F0)
#define JAPKPEJKIDB_SET_REVENUECURRENCY_OFFSET UNITYSDK_OFFSET(0xB8950D0)
#define JAPKPEJKIDB_SET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0xB895130)

inline static constexpr unsigned int JAPKPEJKIDB_TypeDefinitionIndex = 82525;

	class JAPKPEJKIDB : public ::System::Object
	{
	public:
		::DILIKOIGENM* _RevenueCurrency_k__BackingField; // 0x10
		::System::UInt32 _TargetRevenue_k__BackingField; // 0x18
		::System::UInt32 _LastRevenue_k__BackingField; // 0x1C
		::System::UInt32 _GainRevenue_k__BackingField; // 0x20
		::System::Boolean _IsLevelMax_k__BackingField; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 _CurRevenue_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_CTOR_OFFSET))(this);
		}

		::DILIKOIGENM* get_RevenueCurrency()
		{
			return ((::DILIKOIGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_REVENUECURRENCY_OFFSET))(this);
		}

		::System::Void set_RevenueCurrency(::DILIKOIGENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILIKOIGENM*))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_REVENUECURRENCY_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastRevenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_LASTREVENUE_OFFSET))(this);
		}

		::System::Void set_LastRevenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_LASTREVENUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurRevenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_CURREVENUE_OFFSET))(this);
		}

		::System::Void set_CurRevenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_CURREVENUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetRevenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_TARGETREVENUE_OFFSET))(this);
		}

		::System::Void set_TargetRevenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_TARGETREVENUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GainRevenue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_GAINREVENUE_OFFSET))(this);
		}

		::System::Void set_GainRevenue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_GAINREVENUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_GET_ISLEVELMAX_OFFSET))(this);
		}

		::System::Void set_IsLevelMax(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAPKPEJKIDB_SET_ISLEVELMAX_OFFSET))(this, a1);
		}

	};
