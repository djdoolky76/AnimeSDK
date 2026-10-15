#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEHLFNHAMLA.h"
#include "unitysdk/NJBLCLGHIOE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveStopMode.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define JHHIMNANJHP_ADFBFBKOOBP_OFFSET UNITYSDK_OFFSET(0x3C33900)
#define JHHIMNANJHP_ANIILMENOLN_OFFSET UNITYSDK_OFFSET(0x3C33940)
#define JHHIMNANJHP_DIFNADAEMFB_OFFSET UNITYSDK_OFFSET(0x3C33920)
#define JHHIMNANJHP_EIFMGPEIJKM_OFFSET UNITYSDK_OFFSET(0x3C33960)
#define JHHIMNANJHP_OOIAOFDAJKA_OFFSET UNITYSDK_OFFSET(0x3C33980)

inline static constexpr unsigned int JHHIMNANJHP_TypeDefinitionIndex = 43553;

	struct alignas(8) JHHIMNANJHP
	{
		::RPG::PoolList_1<::KEHLFNHAMLA>* LJOOHOPBAJJ; // 0x10
		::RPG::PoolList_1<::NJBLCLGHIOE>* ONKAMPHIMKH; // 0x18
		::System::Boolean PELJACANAFH; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 LNAHCBKLLID; // 0x24
		::System::Single ACPCEFDDDAC; // 0x28
		::RPG::Client::LittleGame::FiveDim::SplineMoveStopMode BAMHMKPEBKK; // 0x2C
		::System::String* ALOFNPFIBBM; // 0x30
		::KEHLFNHAMLA ADFBFBKOOBP()
		{
			return ((::KEHLFNHAMLA(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHIMNANJHP_ADFBFBKOOBP_OFFSET))(this);
		}

		::KEHLFNHAMLA DIFNADAEMFB()
		{
			return ((::KEHLFNHAMLA(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHIMNANJHP_DIFNADAEMFB_OFFSET))(this);
		}

		::NJBLCLGHIOE ANIILMENOLN()
		{
			return ((::NJBLCLGHIOE(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHIMNANJHP_ANIILMENOLN_OFFSET))(this);
		}

		::NJBLCLGHIOE EIFMGPEIJKM()
		{
			return ((::NJBLCLGHIOE(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHIMNANJHP_EIFMGPEIJKM_OFFSET))(this);
		}

		::NJBLCLGHIOE OOIAOFDAJKA()
		{
			return ((::NJBLCLGHIOE(*)(::PVOID))((::PBYTE)hIl2Cpp + JHHIMNANJHP_OOIAOFDAJKA_OFFSET))(this);
		}

	};
