#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LBGNELKODEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F4D30)
#define LBGNELKODEM_DLCCBMPEKFA_OFFSET UNITYSDK_OFFSET(0xB5F4B90)
#define LBGNELKODEM_LCMJOHKAAAC_OFFSET UNITYSDK_OFFSET(0xB5F4BE0)
#define LBGNELKODEM_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0xB5F4CE0)

inline static constexpr unsigned int LBGNELKODEM_TypeDefinitionIndex = 78563;

	class LBGNELKODEM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::System::Single MNDFOPKBHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGNELKODEM_CTOR_OFFSET))(this);
		}

		::System::Boolean DLCCBMPEKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGNELKODEM_DLCCBMPEKFA_OFFSET))(this);
		}

		::System::Int32 LCMJOHKAAAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGNELKODEM_LCMJOHKAAAC_OFFSET))(this);
		}

		::System::Single MPIBNJBBOKM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGNELKODEM_MPIBNJBBOKM_OFFSET))(this);
		}

	};
