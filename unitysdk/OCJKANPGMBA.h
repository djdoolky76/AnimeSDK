#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace System { class Nullable; }

#define OCJKANPGMBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6E7D0)
#define OCJKANPGMBA_DLCBNPGLCAP_OFFSET UNITYSDK_OFFSET(0xBD6E550)
#define OCJKANPGMBA_HOGBNAHHPHL_OFFSET UNITYSDK_OFFSET(0xBD6E470)
#define OCJKANPGMBA_NANJEPLECBE_OFFSET UNITYSDK_OFFSET(0xBD6E630)

inline static constexpr unsigned int OCJKANPGMBA_TypeDefinitionIndex = 81617;

	class OCJKANPGMBA : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* GNOEGILFEMD; // 0x10
		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + OCJKANPGMBA_CTOR_OFFSET))(this, a1);
		}

		::System::Nullable* HOGBNAHHPHL()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_HOGBNAHHPHL_OFFSET))(this);
		}

		::System::Nullable* DLCBNPGLCAP()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_DLCBNPGLCAP_OFFSET))(this);
		}

		::System::Nullable* NANJEPLECBE()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_NANJEPLECBE_OFFSET))(this);
		}

	};
