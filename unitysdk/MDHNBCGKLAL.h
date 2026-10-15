#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define MDHNBCGKLAL_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB8A37C0)
#define MDHNBCGKLAL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB8A3610)
#define MDHNBCGKLAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A3600)

inline static constexpr unsigned int MDHNBCGKLAL_TypeDefinitionIndex = 64050;

	class MDHNBCGKLAL : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* KGKKAEDGOCA; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + MDHNBCGKLAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + MDHNBCGKLAL_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + MDHNBCGKLAL_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
