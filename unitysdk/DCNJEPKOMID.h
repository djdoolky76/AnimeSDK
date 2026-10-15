#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HIJPIJFOOCN;
namespace RPG::Client::B51Racing { class B51RacingPauseDialogViewModel; }

#define DCNJEPKOMID_CTOR_OFFSET UNITYSDK_OFFSET(0xE252690)
#define DCNJEPKOMID_DGJFBMGGALA_OFFSET UNITYSDK_OFFSET(0xE252490)
#define DCNJEPKOMID_PKCAMAJNJDN_OFFSET UNITYSDK_OFFSET(0xE252530)

	class DCNJEPKOMID : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNJEPKOMID_CTOR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingPauseDialogViewModel* DGJFBMGGALA(::HIJPIJFOOCN* a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingPauseDialogViewModel*(*)(::PVOID, ::HIJPIJFOOCN*))((::PBYTE)hIl2Cpp + DCNJEPKOMID_DGJFBMGGALA_OFFSET))(this, a1);
		}

		::RPG::Client::TextID PKCAMAJNJDN()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNJEPKOMID_PKCAMAJNJDN_OFFSET))(this);
		}

	};
