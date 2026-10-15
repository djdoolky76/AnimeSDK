#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }

#define MAJHDKCFHBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C923420)

inline static constexpr unsigned int MAJHDKCFHBM_TypeDefinitionIndex = 43674;

	class MAJHDKCFHBM : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* KKKMOHDHDAK; // 0x10
		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* FJGMOCJKGCG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJHDKCFHBM_CTOR_OFFSET))(this);
		}

	};
