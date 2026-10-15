#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFGINEFBBK;
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class SettledPunkLordData; }

#define KJNJIHCEGNF_DBOCFDFIPGB_OFFSET UNITYSDK_OFFSET(0xB45E0D0)
#define KJNJIHCEGNF_GGEGEHBEFGN_OFFSET UNITYSDK_OFFSET(0xB45E170)

	class KJNJIHCEGNF : public ::System::Object
	{
	public:
		static ::RPG::Client::PunkLordData* DBOCFDFIPGB(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::PunkLordData*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KJNJIHCEGNF_DBOCFDFIPGB_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::SettledPunkLordData* GGEGEHBEFGN(::FGFGINEFBBK* a1)
		{
			return ((::RPG::Client::SettledPunkLordData*(*)(::FGFGINEFBBK*))((::PBYTE)hIl2Cpp + KJNJIHCEGNF_GGEGEHBEFGN_OFFSET))(a1);
		}

	};
