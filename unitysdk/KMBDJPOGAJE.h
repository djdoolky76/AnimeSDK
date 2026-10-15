#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMBDJPOGAJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5354B0)
#define KMBDJPOGAJE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xB535490)
#define KMBDJPOGAJE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xB5354A0)

inline static constexpr unsigned int KMBDJPOGAJE_TypeDefinitionIndex = 49698;

	class KMBDJPOGAJE : public ::System::Object
	{
	public:
		::System::Boolean _Active_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBDJPOGAJE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBDJPOGAJE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMBDJPOGAJE_SET_ACTIVE_OFFSET))(this, a1);
		}

	};
