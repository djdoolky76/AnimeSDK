#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ClickBehaviour.h"
#include "unitysdk/System/Object.h"

#define FBBKBJPPNNK_DJCGCCCKDNF_OFFSET UNITYSDK_OFFSET(0x165A9D90)
#define FBBKBJPPNNK_FJCBNKBKNHO_OFFSET UNITYSDK_OFFSET(0x165A9DD0)
#define FBBKBJPPNNK_ICJAOABNLKP_OFFSET UNITYSDK_OFFSET(0x165A9D40)
#define FBBKBJPPNNK_PIELALOLCIB_OFFSET UNITYSDK_OFFSET(0x165A9E20)

inline static constexpr unsigned int FBBKBJPPNNK_TypeDefinitionIndex = 79846;

	class FBBKBJPPNNK : public ::System::Object
	{
	public:
		static ::System::Boolean ICJAOABNLKP(::System::Boolean a1, ::RPG::Client::LittleGame::ComicDessert::ClickBehaviour a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::RPG::Client::LittleGame::ComicDessert::ClickBehaviour))((::PBYTE)hIl2Cpp + FBBKBJPPNNK_ICJAOABNLKP_OFFSET))(a1, a2);
		}

		static ::System::Boolean DJCGCCCKDNF(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FBBKBJPPNNK_DJCGCCCKDNF_OFFSET))(a1);
		}

		static ::System::Boolean FJCBNKBKNHO(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBKBJPPNNK_FJCBNKBKNHO_OFFSET))(a1, a2);
		}

		static ::System::Boolean PIELALOLCIB(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FBBKBJPPNNK_PIELALOLCIB_OFFSET))(a1);
		}

	};
