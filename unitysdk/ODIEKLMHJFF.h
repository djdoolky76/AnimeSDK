#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournGame; }

#define ODIEKLMHJFF_DHNBJGGFODA_OFFSET UNITYSDK_OFFSET(0xBD93C70)

	class ODIEKLMHJFF : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournGame* DHNBJGGFODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGame*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODIEKLMHJFF_DHNBJGGFODA_OFFSET))(a1);
		}

	};
