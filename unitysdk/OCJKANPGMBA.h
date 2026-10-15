#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

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

		::System::Nullable_1<::System::Int32> HOGBNAHHPHL()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_HOGBNAHHPHL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> DLCBNPGLCAP()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_DLCBNPGLCAP_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> NANJEPLECBE()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJKANPGMBA_NANJEPLECBE_OFFSET))(this);
		}

	};
