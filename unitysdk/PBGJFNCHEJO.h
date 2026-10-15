#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define PBGJFNCHEJO_ABOMEAHIEFN_OFFSET UNITYSDK_OFFSET(0xBFE5D10)
#define PBGJFNCHEJO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFE5CC0)
#define PBGJFNCHEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE5E30)
#define PBGJFNCHEJO_HADGAGKJBHG_OFFSET UNITYSDK_OFFSET(0xBFE5D70)
#define PBGJFNCHEJO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBFE5DD0)

inline static constexpr unsigned int PBGJFNCHEJO_TypeDefinitionIndex = 60777;

	class PBGJFNCHEJO : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x10
		::System::Action* LNNLMNBOPCB; // 0x18
		::RPG::GameCore::GameEntity* LGIABFPBNPG; // 0x20
		::System::Action* CDJGBPCECMB; // 0x28
		::System::Action* OLHHIJIBKEM; // 0x30
		::System::Boolean FKAJFHIEOAH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGJFNCHEJO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGJFNCHEJO_CLEAR_OFFSET))(this);
		}

		::System::Void ABOMEAHIEFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGJFNCHEJO_ABOMEAHIEFN_OFFSET))(this);
		}

		::System::Void HADGAGKJBHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGJFNCHEJO_HADGAGKJBHG_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGJFNCHEJO_HFKFNFKIEON_OFFSET))(this);
		}

	};
