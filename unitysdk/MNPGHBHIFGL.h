#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionWaitSleep; }

#define MNPGHBHIFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74FFC0)
#define MNPGHBHIFGL_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C74FFD0)

	class MNPGHBHIFGL : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionWaitSleep* DAIMIOCCAAI; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionWaitSleep* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + MNPGHBHIFGL_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + MNPGHBHIFGL_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
