#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define LNHDHINNKAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DF0D0)
#define LNHDHINNKAH_FHGCBEFKCMO_OFFSET UNITYSDK_OFFSET(0xB7DEC60)
#define LNHDHINNKAH_NPEAIDBJFLL_OFFSET UNITYSDK_OFFSET(0xB7DED70)

	class LNHDHINNKAH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDHINNKAH_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BaseChallengeTargetData* FHGCBEFKCMO(::System::UInt32 a1)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNHDHINNKAH_FHGCBEFKCMO_OFFSET))(a1);
		}

		static ::RPG::Client::BaseChallengeTargetData* NPEAIDBJFLL(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + LNHDHINNKAH_NPEAIDBJFLL_OFFSET))(a1);
		}

	};
