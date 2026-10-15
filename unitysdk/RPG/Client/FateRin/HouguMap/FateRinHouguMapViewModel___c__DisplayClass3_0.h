#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEMOEKHIFNN;
class PEAFBFCPFCC;
class PFLDDDHEAJO;
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapViewModel; }
namespace RPG::Client::FateRin::HouguMap { class HouguMapFightViewModel; }

#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCFA1C60)
#define RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0___BUILDFIGHTVIEWMODELS_B__1_OFFSET UNITYSDK_OFFSET(0xCFA2210)

namespace RPG::Client::FateRin::HouguMap
{
	inline static constexpr unsigned int FateRinHouguMapViewModel___c__DisplayClass3_0_TypeDefinitionIndex = 80767;

	class FateRinHouguMapViewModel___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::PFLDDDHEAJO* missionProgressService; // 0x10
		::EEMOEKHIFNN* overrideService; // 0x18
		::PEAFBFCPFCC* redDotService; // 0x20
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapViewModel* __4__this; // 0x28
		::System::Boolean bossIsHard; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel* __BuildFightViewModels_b__1(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
		{
			return ((::RPG::Client::FateRin::HouguMap::HouguMapFightViewModel*(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_HOUGUMAP_FATERINHOUGUMAPVIEWMODEL___C__DISPLAYCLASS3_0___BUILDFIGHTVIEWMODELS_B__1_OFFSET))(this, a1);
		}

	};
}
