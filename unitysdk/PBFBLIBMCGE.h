#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define PBFBLIBMCGE_CTOR_OFFSET UNITYSDK_OFFSET(0x176786D0)

inline static constexpr unsigned int PBFBLIBMCGE_TypeDefinitionIndex = 43213;

	class PBFBLIBMCGE : public ::System::Object
	{
	public:
		::System::Int32 AMMPNOLLCIN; // 0x10
		::System::Int32 OGOADCDDCIG; // 0x14
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState KGDEJHBLAGP; // 0x18
		::System::Int32 GLANPLEGMPG; // 0x1C
		::System::Int32 BPEHFMHGHAC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBLIBMCGE_CTOR_OFFSET))(this);
		}

	};
