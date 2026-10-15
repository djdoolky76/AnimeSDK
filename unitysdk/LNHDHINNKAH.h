#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define LNHDHINNKAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D8B20)
#define LNHDHINNKAH_FHGCBEFKCMO_OFFSET UNITYSDK_OFFSET(0xB7D86B0)
#define LNHDHINNKAH_NPEAIDBJFLL_OFFSET UNITYSDK_OFFSET(0xB7D87C0)

inline static constexpr unsigned int LNHDHINNKAH_TypeDefinitionIndex = 63108;

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
