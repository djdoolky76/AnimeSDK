#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define PBGJFNCHEJO_ABOMEAHIEFN_OFFSET UNITYSDK_OFFSET(0xC8F16D0)
#define PBGJFNCHEJO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8F1680)
#define PBGJFNCHEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC8F17F0)
#define PBGJFNCHEJO_HADGAGKJBHG_OFFSET UNITYSDK_OFFSET(0xC8F1730)
#define PBGJFNCHEJO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC8F1790)

inline static constexpr unsigned int PBGJFNCHEJO_TypeDefinitionIndex = 62156;

	class PBGJFNCHEJO : public ::System::Object
	{
	public:
		::System::Action* CDJGBPCECMB; // 0x10
		::System::Action* OLHHIJIBKEM; // 0x18
		::System::Action* LNNLMNBOPCB; // 0x20
		::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x28
		::RPG::GameCore::GameEntity* LGIABFPBNPG; // 0x30
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
