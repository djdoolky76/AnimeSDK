#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionChangeRobinRadiusByVote; }

#define NDDCFMLJGPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7583E0)
#define NDDCFMLJGPC_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7583F0)

inline static constexpr unsigned int NDDCFMLJGPC_TypeDefinitionIndex = 37381;

	class NDDCFMLJGPC : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* DOJKBHBJOHK; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*))((::PBYTE)hIl2Cpp + NDDCFMLJGPC_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + NDDCFMLJGPC_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
