#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFPAFGCOKHK.h"

#define NAMPAKJKBHH_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA1AD0)
#define NAMPAKJKBHH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBAA1AE0)
#define NAMPAKJKBHH_GET_REVERSE_OFFSET UNITYSDK_OFFSET(0xBAA1CE0)
#define NAMPAKJKBHH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBAA1B70)

inline static constexpr unsigned int NAMPAKJKBHH_TypeDefinitionIndex = 74198;

	class NAMPAKJKBHH : public ::FFPAFGCOKHK
	{
	public:
		::System::Boolean _Reverse_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 CICBCEIBAAO; // 0x44
		::System::Single DKOFFPPGEFI; // 0x48
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
