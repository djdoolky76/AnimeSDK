#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CPNBEPCCCDH;
class FCOEMCEDLNL;

#define CPNBEPCCCDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC95750)
#define CPNBEPCCCDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC95770)
#define CPNBEPCCCDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC95710)

inline static constexpr unsigned int CPNBEPCCCDH_TypeDefinitionIndex = 21465;

	class CPNBEPCCCDH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FiveDimPlayerResetMode FCGFFAJIBKA; // 0x18
		::System::Single NIDNKPMPIHL; // 0x1C
		::RPG::GameCore::FiveDimPlayerResetSweepDirection OJPNBGDKPJP; // 0x20
		::System::Single GADCHMOGPAO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBEPCCCDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPNBEPCCCDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPNBEPCCCDH*))((::PBYTE)hIl2Cpp + CPNBEPCCCDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CPNBEPCCCDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPNBEPCCCDH*))((::PBYTE)hIl2Cpp + CPNBEPCCCDH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
