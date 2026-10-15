#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/RPG/Client/LittleGame/MovieAchievementType.h"
class FDPALAEIHPB;
namespace RPG::Client { class AchievementData; }
namespace RPG::GameCore { class MovieGameConstConfig; }

#define FPDBEGJALFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1590FEE0)
#define FPDBEGJALFN_HNKAOPNANBM_OFFSET UNITYSDK_OFFSET(0x15910060)

	class FPDBEGJALFN : public ::HLFHMKMJNPK
	{
	public:
		::RPG::GameCore::MovieGameConstConfig* POIDJMHLKJN; // 0x18
		::RPG::Client::AchievementData* ECIKBNDOLIE; // 0x20
		::RPG::Client::AchievementData* FGGMNKBLPEK; // 0x28
		::RPG::Client::AchievementData* GKMPLOCPNML; // 0x30
		::RPG::Client::AchievementData* PEJCKNIOJAP; // 0x38
		::RPG::Client::AchievementData* FJBMPELICHA; // 0x40
		::RPG::Client::AchievementData* LFEONCLDPNC; // 0x48
		::RPG::Client::AchievementData* LPEJGOIKMBA; // 0x50
		::RPG::Client::AchievementData* JCCAJEIKLLI; // 0x58
		::System::Void _ctor(::FDPALAEIHPB* a1, ::RPG::GameCore::MovieGameConstConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::RPG::GameCore::MovieGameConstConfig*))((::PBYTE)hIl2Cpp + FPDBEGJALFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HNKAOPNANBM(::RPG::Client::LittleGame::MovieAchievementType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MovieAchievementType, ::System::Int32))((::PBYTE)hIl2Cpp + FPDBEGJALFN_HNKAOPNANBM_OFFSET))(this, a1, a2);
		}

	};
