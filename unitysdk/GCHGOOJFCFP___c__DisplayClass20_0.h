#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class GCHGOOJFCFP;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }

#define GCHGOOJFCFP___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1596F890)
#define GCHGOOJFCFP___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1596F8A0)

	class GCHGOOJFCFP___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::AGCPAMNLCGN* cellEntity; // 0x10
		::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* cellWrapperView; // 0x18
		::GCHGOOJFCFP* __4__this; // 0x20
		::AGCPAMNLCGN* sectionEntity; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayCellAppearAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHGOOJFCFP___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET))(this);
		}

	};
