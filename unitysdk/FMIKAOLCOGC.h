#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define FMIKAOLCOGC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1585CAF0)
#define FMIKAOLCOGC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1585C940)
#define FMIKAOLCOGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1585C930)

	class FMIKAOLCOGC : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* DMNONOAOJNK; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + FMIKAOLCOGC_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FMIKAOLCOGC_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FMIKAOLCOGC_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
