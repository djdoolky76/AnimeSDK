#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"

#define KGLLENLBNFD_CMJPKJNMKEK_OFFSET UNITYSDK_OFFSET(0x1977E3A0)
#define KGLLENLBNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1977E510)
#define KGLLENLBNFD_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x1977E4F0)
#define KGLLENLBNFD_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x1977E360)
#define KGLLENLBNFD_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x1977E4B0)
#define KGLLENLBNFD_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x1977E500)

inline static constexpr unsigned int KGLLENLBNFD_TypeDefinitionIndex = 62500;

	class KGLLENLBNFD : public ::RPG::Client::BasePhaseContext
	{
	public:
		::System::Boolean _IsEneterWorld_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLLENLBNFD_CTOR_OFFSET))(this);
		}

		::System::Void OnEnterMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLLENLBNFD_ONENTERMAP_OFFSET))(this);
		}

		::System::Void CMJPKJNMKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLLENLBNFD_CMJPKJNMKEK_OFFSET))(this);
		}

		::System::Void OnFirstEnterMapFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLLENLBNFD_ONFIRSTENTERMAPFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsEneterWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLLENLBNFD_GET_ISENETERWORLD_OFFSET))(this);
		}

		::System::Void set_IsEneterWorld(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGLLENLBNFD_SET_ISENETERWORLD_OFFSET))(this, a1);
		}

	};
