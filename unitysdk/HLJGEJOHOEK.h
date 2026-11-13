#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define HLJGEJOHOEK_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x198A1940)
#define HLJGEJOHOEK_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x198A1830)
#define HLJGEJOHOEK_CTOR_OFFSET UNITYSDK_OFFSET(0x198A1820)

inline static constexpr unsigned int HLJGEJOHOEK_TypeDefinitionIndex = 65490;

	class HLJGEJOHOEK : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* FAJFHDCOEGE; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + HLJGEJOHOEK_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + HLJGEJOHOEK_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + HLJGEJOHOEK_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
