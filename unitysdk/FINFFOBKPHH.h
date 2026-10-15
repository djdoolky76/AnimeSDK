#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define FINFFOBKPHH_CTOR_OFFSET UNITYSDK_OFFSET(0x157A3210)
#define FINFFOBKPHH_GHMLKGCJJPD_OFFSET UNITYSDK_OFFSET(0x157A3220)
#define FINFFOBKPHH_NDGMNPMNPAD_OFFSET UNITYSDK_OFFSET(0x157A32E0)

inline static constexpr unsigned int FINFFOBKPHH_TypeDefinitionIndex = 75017;

	class FINFFOBKPHH : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + FINFFOBKPHH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GHMLKGCJJPD(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + FINFFOBKPHH_GHMLKGCJJPD_OFFSET))(this, a1);
		}

		::System::Void NDGMNPMNPAD(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + FINFFOBKPHH_NDGMNPMNPAD_OFFSET))(this, a1, a2);
		}

	};
