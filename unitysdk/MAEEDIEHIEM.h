#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGGOOHNIBNN.h"

#define MAEEDIEHIEM_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB845820)
#define MAEEDIEHIEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB8458C0)
#define MAEEDIEHIEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB845900)
#define MAEEDIEHIEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB845860)
#define MAEEDIEHIEM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB8457E0)

inline static constexpr unsigned int MAEEDIEHIEM_TypeDefinitionIndex = 76939;

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
