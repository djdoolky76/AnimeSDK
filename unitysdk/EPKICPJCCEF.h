#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class EPKICPJCCEF;
namespace RPG::Client { class ActivityTelevisionData; }
namespace RPG::GameCore { class MappingInfoRow; }

#define EPKICPJCCEF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155D7370)
#define EPKICPJCCEF_CTOR_OFFSET UNITYSDK_OFFSET(0x155D7470)
#define EPKICPJCCEF_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x155D7130)
#define EPKICPJCCEF_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x155D7250)

	class EPKICPJCCEF : public ::System::Object
	{
	public:
		::RPG::Client::ActivityTelevisionData* APPIHABBCGK; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityTelevisionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + EPKICPJCCEF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKICPJCCEF_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKICPJCCEF_PNLLINHJDJF_OFFSET))(this);
		}

		static ::EPKICPJCCEF* BPLPBPMEODA(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::EPKICPJCCEF*(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + EPKICPJCCEF_BPLPBPMEODA_OFFSET))(a1);
		}

	};
