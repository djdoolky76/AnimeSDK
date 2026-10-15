#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class DMEPKAKPGBO;

#define DMEPKAKPGBO_BLDLBGDPHFA_OFFSET UNITYSDK_OFFSET(0xFEB78C0)
#define DMEPKAKPGBO_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB78F0)
#define DMEPKAKPGBO_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEB7870)
#define DMEPKAKPGBO_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xFEB7820)
#define DMEPKAKPGBO_GET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0xFEB78D0)
#define DMEPKAKPGBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFEB77D0)
#define DMEPKAKPGBO_SET_FEVERTEAM_OFFSET UNITYSDK_OFFSET(0xFEB78E0)

inline static constexpr unsigned int DMEPKAKPGBO_TypeDefinitionIndex = 56846;

	class DMEPKAKPGBO : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TeamType _FeverTeam_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_CTOR_OFFSET))(this);
		}

		::DMEPKAKPGBO* KPJGDHLENIP(::RPG::GameCore::TeamType a1)
		{
			return ((::DMEPKAKPGBO*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean BLDLBGDPHFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_BLDLBGDPHFA_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_FeverTeam()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_GET_FEVERTEAM_OFFSET))(this);
		}

		::System::Void set_FeverTeam(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + DMEPKAKPGBO_SET_FEVERTEAM_OFFSET))(this, a1);
		}

	};
