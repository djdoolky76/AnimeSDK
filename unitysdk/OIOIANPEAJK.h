#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKAAHMNPJPA.h"
class KCJNGDLDKFG;
namespace System { class Action; }

#define OIOIANPEAJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA3730)
#define OIOIANPEAJK_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xBEA3740)

	class OIOIANPEAJK : public ::CKAAHMNPJPA
	{
	public:
		::System::UInt32 HGPKPIGKAOJ; // 0x18
		::System::Boolean FOFDKHPKNDH; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::KCJNGDLDKFG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + OIOIANPEAJK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMKJAJLNEBK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OIOIANPEAJK_DMKJAJLNEBK_OFFSET))(this, a1);
		}

	};
