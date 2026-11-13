#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGGOOHNIBNN.h"

#define MAEEDIEHIEM_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1B6DF9F0)
#define MAEEDIEHIEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B6DFA90)
#define MAEEDIEHIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DFAD0)
#define MAEEDIEHIEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B6DFA30)
#define MAEEDIEHIEM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1B6DF9B0)

inline static constexpr unsigned int MAEEDIEHIEM_TypeDefinitionIndex = 79273;

	class MAEEDIEHIEM : public ::GGGOOHNIBNN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEDIEHIEM_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEDIEHIEM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEDIEHIEM_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MAEEDIEHIEM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEDIEHIEM_CLEAR_OFFSET))(this);
		}

	};
