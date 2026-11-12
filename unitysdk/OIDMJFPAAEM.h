#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPICAPOOFD.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
class OFKKIMABHJD;
namespace RPG::Client { class UIController; }

#define OIDMJFPAAEM_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC736010)
#define OIDMJFPAAEM_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC735F90)
#define OIDMJFPAAEM_CTOR_OFFSET UNITYSDK_OFFSET(0xC735F80)

inline static constexpr unsigned int OIDMJFPAAEM_TypeDefinitionIndex = 65493;

	class OIDMJFPAAEM : public ::BMPICAPOOFD
	{
	public:
		::RPG::Client::UIController* DFMELDBKDIK; // 0x18
		::System::Void _ctor(::OFKKIMABHJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + OIDMJFPAAEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + OIDMJFPAAEM_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::FateGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + OIDMJFPAAEM_AHEEAFKFALM_OFFSET))(this, a1);
		}

	};
