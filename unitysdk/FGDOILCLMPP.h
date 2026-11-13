#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PatienceStage.h"
#include "unitysdk/System/Object.h"

#define FGDOILCLMPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20A650)

inline static constexpr unsigned int FGDOILCLMPP_TypeDefinitionIndex = 44754;

	class FGDOILCLMPP : public ::System::Object
	{
	public:
		::System::Single JJKHMACFIDB; // 0x10
		::System::Single LHHHOIHOFLG; // 0x14
		::System::Single NFIOEKGKHDK; // 0x18
		::RPG::Client::LittleGame::ComicDessert::PatienceStage PPANBKDPFFK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDOILCLMPP_CTOR_OFFSET))(this);
		}

	};
