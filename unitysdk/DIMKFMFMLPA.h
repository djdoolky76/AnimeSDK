#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PatienceStage.h"
#include "unitysdk/System/Object.h"

#define DIMKFMFMLPA_ELKFFEIOGDN_OFFSET UNITYSDK_OFFSET(0xF988AF0)
#define DIMKFMFMLPA_HOPNINFFJHM_OFFSET UNITYSDK_OFFSET(0xF9889D0)
#define DIMKFMFMLPA_JFIDLIHKBFP_OFFSET UNITYSDK_OFFSET(0xF988A60)

inline static constexpr unsigned int DIMKFMFMLPA_TypeDefinitionIndex = 79855;

	class DIMKFMFMLPA : public ::System::Object
	{
	public:
		static ::System::Single HOPNINFFJHM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIMKFMFMLPA_HOPNINFFJHM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ComicDessert::PatienceStage JFIDLIHKBFP(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::PatienceStage(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIMKFMFMLPA_JFIDLIHKBFP_OFFSET))(a1, a2);
		}

		static ::System::Boolean ELKFFEIOGDN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + DIMKFMFMLPA_ELKFFEIOGDN_OFFSET))(a1);
		}

	};
