#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class EFPDMIPABKL;
class FGMHNMKDFMA;

#define EFPDMIPABKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x13A5F9A0)
#define EFPDMIPABKL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5FAB0)
#define EFPDMIPABKL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x13A5FA40)
#define EFPDMIPABKL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x13A5F9F0)
#define EFPDMIPABKL_GET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x13A5FA90)
#define EFPDMIPABKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A5F950)
#define EFPDMIPABKL_SET_ABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x13A5FAA0)

inline static constexpr unsigned int EFPDMIPABKL_TypeDefinitionIndex = 54080;

	class EFPDMIPABKL : public ::CMPGEAFHHDC
	{
	public:
		::FGMHNMKDFMA* _AbilityInstance_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPDMIPABKL_CTOR_OFFSET))(this);
		}

		::EFPDMIPABKL* KPJGDHLENIP(::FGMHNMKDFMA* a1)
		{
			return ((::EFPDMIPABKL*(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + EFPDMIPABKL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPDMIPABKL_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPDMIPABKL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPDMIPABKL_GETEVENTTYPE_OFFSET))(this);
		}

		::FGMHNMKDFMA* get_AbilityInstance()
		{
			return ((::FGMHNMKDFMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPDMIPABKL_GET_ABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_AbilityInstance(::FGMHNMKDFMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGMHNMKDFMA*))((::PBYTE)hIl2Cpp + EFPDMIPABKL_SET_ABILITYINSTANCE_OFFSET))(this, a1);
		}

	};
