#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define KGEDFFEEOPI_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB3DDA20)
#define KGEDFFEEOPI_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB3DD900)
#define KGEDFFEEOPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3DD8F0)

inline static constexpr unsigned int KGEDFFEEOPI_TypeDefinitionIndex = 64051;

	class KGEDFFEEOPI : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* OMDGCBMAFLD; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + KGEDFFEEOPI_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + KGEDFFEEOPI_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + KGEDFFEEOPI_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
