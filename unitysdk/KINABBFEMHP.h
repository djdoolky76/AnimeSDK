#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MaterialSubmitter; }

#define KINABBFEMHP_CMMGOIMMOPD_OFFSET UNITYSDK_OFFSET(0xB436170)
#define KINABBFEMHP_OMDKHKBHMDN_OFFSET UNITYSDK_OFFSET(0xB436120)
#define KINABBFEMHP_ONMPNLGIHFL_OFFSET UNITYSDK_OFFSET(0xB4360E0)

	class KINABBFEMHP : public ::System::Object
	{
	public:
		static ::RPG::Client::MaterialSubmitter* ONMPNLGIHFL(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KINABBFEMHP_ONMPNLGIHFL_OFFSET))(a1);
		}

		static ::System::Boolean OMDKHKBHMDN(::System::UInt32 a1, ::RPG::Client::MaterialSubmitter* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MaterialSubmitter*))((::PBYTE)hIl2Cpp + KINABBFEMHP_OMDKHKBHMDN_OFFSET))(a1, a2);
		}

		static ::System::Boolean CMMGOIMMOPD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KINABBFEMHP_CMMGOIMMOPD_OFFSET))(a1);
		}

	};
