#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBHGKOEPPJI_PLIPDIDMOOC;
class MBPKHMAJLGK;

#define EBHGKOEPPJI_PLIPDIDMOOC_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C3BE230)
#define EBHGKOEPPJI_PLIPDIDMOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3BC4D0)
#define EBHGKOEPPJI_PLIPDIDMOOC_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C3BE210)
#define EBHGKOEPPJI_PLIPDIDMOOC_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1C3BE1F0)
#define EBHGKOEPPJI_PLIPDIDMOOC_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C3BE220)
#define EBHGKOEPPJI_PLIPDIDMOOC_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1C3BE200)

inline static constexpr unsigned int EBHGKOEPPJI_PLIPDIDMOOC_TypeDefinitionIndex = 82563;

	class EBHGKOEPPJI_PLIPDIDMOOC : public ::System::Object
	{
	public:
		::MBPKHMAJLGK* _Unit_k__BackingField; // 0x10
		::System::Single _StartTime_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_CTOR_OFFSET))(this);
		}

		::MBPKHMAJLGK* get_Unit()
		{
			return ((::MBPKHMAJLGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_GET_UNIT_OFFSET))(this);
		}

		::System::Void set_Unit(::MBPKHMAJLGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBPKHMAJLGK*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_SET_UNIT_OFFSET))(this, a1);
		}

		::System::Single get_StartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void set_StartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_SET_STARTTIME_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::EBHGKOEPPJI_PLIPDIDMOOC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EBHGKOEPPJI_PLIPDIDMOOC*))((::PBYTE)hIl2Cpp + EBHGKOEPPJI_PLIPDIDMOOC_COMPARETO_OFFSET))(this, a1);
		}

	};
