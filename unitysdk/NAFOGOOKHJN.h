#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define NAFOGOOKHJN_BOEPEMKFPDH_OFFSET UNITYSDK_OFFSET(0xBA93460)
#define NAFOGOOKHJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA93450)
#define NAFOGOOKHJN_EEFAMPPANMN_OFFSET UNITYSDK_OFFSET(0xBA935D0)
#define NAFOGOOKHJN_GHMLKGCJJPD_OFFSET UNITYSDK_OFFSET(0xBA936B0)
#define NAFOGOOKHJN_PBCBMGIBLFI_OFFSET UNITYSDK_OFFSET(0xBA93640)

inline static constexpr unsigned int NAFOGOOKHJN_TypeDefinitionIndex = 75023;

	class NAFOGOOKHJN : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + NAFOGOOKHJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOEPEMKFPDH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + NAFOGOOKHJN_BOEPEMKFPDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHMLKGCJJPD(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + NAFOGOOKHJN_GHMLKGCJJPD_OFFSET))(this, a1);
		}

		::System::UInt32 EEFAMPPANMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOGOOKHJN_EEFAMPPANMN_OFFSET))(this);
		}

		::System::UInt32 PBCBMGIBLFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFOGOOKHJN_PBCBMGIBLFI_OFFSET))(this);
		}

	};
