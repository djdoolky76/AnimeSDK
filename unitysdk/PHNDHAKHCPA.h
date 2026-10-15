#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class PHNDHAKHCPA;
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::GameCore { class MappingInfoRow; }

#define PHNDHAKHCPA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC24EB40)
#define PHNDHAKHCPA_CTOR_OFFSET UNITYSDK_OFFSET(0xC24EC40)
#define PHNDHAKHCPA_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xC24E990)
#define PHNDHAKHCPA_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xC24EA70)

inline static constexpr unsigned int PHNDHAKHCPA_TypeDefinitionIndex = 62926;

	class PHNDHAKHCPA : public ::System::Object
	{
	public:
		::RPG::Client::ActivitySummonStage* APPIHABBCGK; // 0x10
		::System::Void _ctor(::RPG::Client::ActivitySummonStage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + PHNDHAKHCPA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNDHAKHCPA_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNDHAKHCPA_PNLLINHJDJF_OFFSET))(this);
		}

		static ::PHNDHAKHCPA* BPLPBPMEODA(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::PHNDHAKHCPA*(*)(::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + PHNDHAKHCPA_BPLPBPMEODA_OFFSET))(a1);
		}

	};
