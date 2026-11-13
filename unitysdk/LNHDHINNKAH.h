#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define LNHDHINNKAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A58C400)
#define LNHDHINNKAH_FHGCBEFKCMO_OFFSET UNITYSDK_OFFSET(0x1A58BF90)
#define LNHDHINNKAH_NPEAIDBJFLL_OFFSET UNITYSDK_OFFSET(0x1A58C0A0)

inline static constexpr unsigned int LNHDHINNKAH_TypeDefinitionIndex = 64546;

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
