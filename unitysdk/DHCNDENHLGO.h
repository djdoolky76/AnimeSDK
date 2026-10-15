#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHCNDENHLGO_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC97A0)
#define DHCNDENHLGO_GET_ID_OFFSET UNITYSDK_OFFSET(0xEBC9780)
#define DHCNDENHLGO_SET_ID_OFFSET UNITYSDK_OFFSET(0xEBC9790)

inline static constexpr unsigned int DHCNDENHLGO_TypeDefinitionIndex = 81443;

	class DHCNDENHLGO : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCNDENHLGO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCNDENHLGO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHCNDENHLGO_SET_ID_OFFSET))(this, a1);
		}

	};
