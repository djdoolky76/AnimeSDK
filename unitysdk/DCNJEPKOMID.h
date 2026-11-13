#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HIJPIJFOOCN;
namespace RPG::Client::B51Racing { class B51RacingPauseDialogViewModel; }

#define DCNJEPKOMID_CTOR_OFFSET UNITYSDK_OFFSET(0x17724D70)
#define DCNJEPKOMID_DGJFBMGGALA_OFFSET UNITYSDK_OFFSET(0x17724B40)
#define DCNJEPKOMID_PKCAMAJNJDN_OFFSET UNITYSDK_OFFSET(0x17724BE0)

inline static constexpr unsigned int DCNJEPKOMID_TypeDefinitionIndex = 84714;

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
