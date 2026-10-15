#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHAKEEKGKIJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA9DC80)
#define HHAKEEKGKIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9DCE0)

inline static constexpr unsigned int HHAKEEKGKIJ_TypeDefinitionIndex = 42996;

	class HHAKEEKGKIJ : public ::System::Object
	{
	public:
		::System::UInt32 ONOGIODHCEC; // 0x10
		::System::UInt32 LOGDJCNCDPK; // 0x14
		::System::UInt32 JCJGJBLENCP; // 0x18
		::System::Boolean ENAMBNDFMPI; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 DDCOGNDMBFJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAKEEKGKIJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAKEEKGKIJ_CLEAR_OFFSET))(this);
		}

	};
