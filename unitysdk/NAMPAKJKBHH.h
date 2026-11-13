#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define NAMPAKJKBHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFAF80)
#define NAMPAKJKBHH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1BAFAF90)
#define NAMPAKJKBHH_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0x1BAFB190)
#define NAMPAKJKBHH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1BAFB020)

inline static constexpr unsigned int NAMPAKJKBHH_TypeDefinitionIndex = 76346;

	class NAMPAKJKBHH : public ::FFPAFGCOKHK
	{
	public:
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Int32 CICBCEIBAAO; // 0x44
		::System::Boolean _Reverse_k__BackingField; // 0x48
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAMPAKJKBHH_CTOR_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMPAKJKBHH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAMPAKJKBHH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean get_Reverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMPAKJKBHH_GET_REVERSE_OFFSET))(this);
		}

	};
