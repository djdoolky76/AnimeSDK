#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EILKAMDFJPI_MBOFJKCLAEL_CTOR_OFFSET UNITYSDK_OFFSET(0x19AA0020)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISAIRBORNE_OFFSET UNITYSDK_OFFSET(0x19AA1090)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISATTACKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19AA1150)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISFALLINGLANDINGQTEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA10D0)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISLAUNCHPHASE_OFFSET UNITYSDK_OFFSET(0x19AA1130)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISLAUNCHQTEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA10F0)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISULTIMATEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA10B0)
#define EILKAMDFJPI_MBOFJKCLAEL_GET_ISULTIMATEDRIFTBUTTONVISIBLE_OFFSET UNITYSDK_OFFSET(0x19AA1110)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISAIRBORNE_OFFSET UNITYSDK_OFFSET(0x19AA10A0)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISATTACKUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19AA1160)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISFALLINGLANDINGQTEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA10E0)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISLAUNCHPHASE_OFFSET UNITYSDK_OFFSET(0x19AA1140)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISLAUNCHQTEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA1100)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISULTIMATEACTIVE_OFFSET UNITYSDK_OFFSET(0x19AA10C0)
#define EILKAMDFJPI_MBOFJKCLAEL_SET_ISULTIMATEDRIFTBUTTONVISIBLE_OFFSET UNITYSDK_OFFSET(0x19AA1120)

inline static constexpr unsigned int EILKAMDFJPI_MBOFJKCLAEL_TypeDefinitionIndex = 84695;

	class EILKAMDFJPI_MBOFJKCLAEL : public ::System::Object
	{
	public:
		::System::Boolean _IsFallingLandingQteActive_k__BackingField; // 0x10
		::System::Boolean _IsAttackUnlocked_k__BackingField; // 0x11
		::System::Boolean _IsLaunchQteActive_k__BackingField; // 0x12
		::System::Boolean _IsUltimateActive_k__BackingField; // 0x13
		::System::Boolean _IsUltimateDriftButtonVisible_k__BackingField; // 0x14
		::System::Boolean _IsLaunchPhase_k__BackingField; // 0x15
		::System::Boolean _IsAirborne_k__BackingField; // 0x16
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsAirborne()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISAIRBORNE_OFFSET))(this);
		}

		::System::Void set_IsAirborne(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISAIRBORNE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUltimateActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISULTIMATEACTIVE_OFFSET))(this);
		}

		::System::Void set_IsUltimateActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISULTIMATEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFallingLandingQteActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISFALLINGLANDINGQTEACTIVE_OFFSET))(this);
		}

		::System::Void set_IsFallingLandingQteActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISFALLINGLANDINGQTEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLaunchQteActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISLAUNCHQTEACTIVE_OFFSET))(this);
		}

		::System::Void set_IsLaunchQteActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISLAUNCHQTEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUltimateDriftButtonVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISULTIMATEDRIFTBUTTONVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsUltimateDriftButtonVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISULTIMATEDRIFTBUTTONVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLaunchPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISLAUNCHPHASE_OFFSET))(this);
		}

		::System::Void set_IsLaunchPhase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISLAUNCHPHASE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttackUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_GET_ISATTACKUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsAttackUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILKAMDFJPI_MBOFJKCLAEL_SET_ISATTACKUNLOCKED_OFFSET))(this, a1);
		}

	};
