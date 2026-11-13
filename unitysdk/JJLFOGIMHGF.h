#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IDDAAPNDMJC;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define JJLFOGIMHGF_CMEJHCEBFEI_OFFSET UNITYSDK_OFFSET(0x3DEB430)
#define JJLFOGIMHGF_IEBDHDGMHLO_OFFSET UNITYSDK_OFFSET(0x3DEB420)
#define JJLFOGIMHGF_MAJECFPFCJG_OFFSET UNITYSDK_OFFSET(0x3DEB440)

inline static constexpr unsigned int JJLFOGIMHGF_TypeDefinitionIndex = 58985;

	struct alignas(8) JJLFOGIMHGF
	{
		::RPG::GameCore::TurnBasedModifierInstance* MIAJNJNECOG; // 0x10
		::RPG::GameCore::FixPoint OCOKKHKDKAI; // 0x18
		::RPG::GameCore::FixPoint DACDEKKFCJK; // 0x20
		::RPG::GameCore::FixPoint KMFIJFFONCJ; // 0x28
		::RPG::GameCore::FixPoint LCPFMGPBMMG; // 0x30
		::System::Int32 PKICDFAEPKE; // 0x38
		::RPG::GameCore::FixPoint IEBDHDGMHLO(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JJLFOGIMHGF_IEBDHDGMHLO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CMEJHCEBFEI(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JJLFOGIMHGF_CMEJHCEBFEI_OFFSET))(this, a1);
		}

		::IDDAAPNDMJC* MAJECFPFCJG(::RPG::GameCore::FixPoint a1)
		{
			return ((::IDDAAPNDMJC*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JJLFOGIMHGF_MAJECFPFCJG_OFFSET))(this, a1);
		}

	};
