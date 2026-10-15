#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDHKPOLCNOK;
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class CumulativeScoreBoardConfigData; }
namespace RPG::GameCore { class CumulativeScoreBoardConfigRow; }

#define FEHOIMBNPND_CEDEPODOCFL_OFFSET UNITYSDK_OFFSET(0x156F2600)
#define FEHOIMBNPND_CTOR_OFFSET UNITYSDK_OFFSET(0x156F2030)
#define FEHOIMBNPND_FGBBHONLKMJ_OFFSET UNITYSDK_OFFSET(0x156F2990)
#define FEHOIMBNPND_JNLIJFGGLFB_OFFSET UNITYSDK_OFFSET(0x156F20D0)
#define FEHOIMBNPND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x156F2AD0)
#define FEHOIMBNPND_PFHECDDMLNK_OFFSET UNITYSDK_OFFSET(0x156F22C0)

	class FEHOIMBNPND : public ::System::Object
	{
	public:
		::RPG::Client::MissionModule* JOMIMCLABPL; // 0x10
		::RPG::GameCore::CumulativeScoreBoardConfigData* OPILIGEJFON; // 0x18
		::RPG::GameCore::CumulativeScoreBoardConfigRow* NOPAMNLEDHK; // 0x20
		::System::Void _ctor(::MDHKPOLCNOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + FEHOIMBNPND_CTOR_OFFSET))(this, a1);
		}

		::System::Void JNLIJFGGLFB(::MDHKPOLCNOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + FEHOIMBNPND_JNLIJFGGLFB_OFFSET))(this, a1);
		}

		::System::Void PFHECDDMLNK(::MDHKPOLCNOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + FEHOIMBNPND_PFHECDDMLNK_OFFSET))(this, a1);
		}

		::System::Void CEDEPODOCFL(::MDHKPOLCNOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + FEHOIMBNPND_CEDEPODOCFL_OFFSET))(this, a1);
		}

		::System::UInt64 FGBBHONLKMJ(::System::UInt32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEHOIMBNPND_FGBBHONLKMJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::CumulativeScoreBoardConfigData* LMBKNCAIDLC()
		{
			return ((::RPG::GameCore::CumulativeScoreBoardConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHOIMBNPND_LMBKNCAIDLC_OFFSET))(this);
		}

	};
