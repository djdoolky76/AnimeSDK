#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDOIKKNIPDK_CTOR_OFFSET UNITYSDK_OFFSET(0x186D25D0)
#define EDOIKKNIPDK_EIBHHOPHJCK_OFFSET UNITYSDK_OFFSET(0x186D2510)
#define EDOIKKNIPDK_FKKAEANHMGM_OFFSET UNITYSDK_OFFSET(0x186D2570)
#define EDOIKKNIPDK_GET_BESTCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x186D24F0)
#define EDOIKKNIPDK_GET_PLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x186D24D0)
#define EDOIKKNIPDK_SET_BESTCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x186D2500)
#define EDOIKKNIPDK_SET_PLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x186D24E0)

inline static constexpr unsigned int EDOIKKNIPDK_TypeDefinitionIndex = 77075;

	class EDOIKKNIPDK : public ::System::Object
	{
	public:
		::System::UInt32 _PlayCount_k__BackingField; // 0x10
		::System::UInt32 _BestCustomerCount_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PlayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_GET_PLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_PlayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_SET_PLAYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BestCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_GET_BESTCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Void set_BestCustomerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_SET_BESTCUSTOMERCOUNT_OFFSET))(this, a1);
		}

		::System::Void EIBHHOPHJCK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_EIBHHOPHJCK_OFFSET))(this, a1, a2);
		}

		::System::Void FKKAEANHMGM(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EDOIKKNIPDK_FKKAEANHMGM_OFFSET))(this, a1, a2);
		}

	};
