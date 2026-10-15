#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define FLFPBPEBFMG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15824470)
#define FLFPBPEBFMG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15824360)
#define FLFPBPEBFMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15824350)

inline static constexpr unsigned int FLFPBPEBFMG_TypeDefinitionIndex = 64043;

	class FLFPBPEBFMG : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* IDONGDJPEJH; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + FLFPBPEBFMG_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FLFPBPEBFMG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + FLFPBPEBFMG_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
