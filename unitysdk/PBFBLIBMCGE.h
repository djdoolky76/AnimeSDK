#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeOpponentLiveState.h"
#include "unitysdk/System/Object.h"

#define PBFBLIBMCGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB66B50)

inline static constexpr unsigned int PBFBLIBMCGE_TypeDefinitionIndex = 43213;

	class PBFBLIBMCGE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::Match3::MatchThreeOpponentLiveState KGDEJHBLAGP; // 0x10
		::System::Int32 GLANPLEGMPG; // 0x14
		::System::Int32 OGOADCDDCIG; // 0x18
		::System::Int32 BPEHFMHGHAC; // 0x1C
		::System::Int32 AMMPNOLLCIN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBLIBMCGE_CTOR_OFFSET))(this);
		}

	};
