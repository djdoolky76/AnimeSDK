#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertView; }

#define DLDLEFNNBCM_BHKLCDOALOB_OFFSET UNITYSDK_OFFSET(0x18667760)
#define DLDLEFNNBCM_MMDJFFEGDOG_OFFSET UNITYSDK_OFFSET(0x18667990)

inline static constexpr unsigned int DLDLEFNNBCM_TypeDefinitionIndex = 79750;

	class DLDLEFNNBCM : public ::System::Object
	{
	public:
		static ::LPHINGPIEAJ* BHKLCDOALOB(::RPG::Client::LittleGame::ComicDessert::ComicDessertView* a1)
		{
			return ((::LPHINGPIEAJ*(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertView*))((::PBYTE)hIl2Cpp + DLDLEFNNBCM_BHKLCDOALOB_OFFSET))(a1);
		}

		static ::System::Void MMDJFFEGDOG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Boolean))((::PBYTE)hIl2Cpp + DLDLEFNNBCM_MMDJFFEGDOG_OFFSET))(a1, a2, a3, a4);
		}

	};
