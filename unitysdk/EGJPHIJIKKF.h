#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleForceLaunchToTarget; }

#define EGJPHIJIKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA21DC0)
#define EGJPHIJIKKF_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA21DD0)

inline static constexpr unsigned int EGJPHIJIKKF_TypeDefinitionIndex = 43101;

	class EGJPHIJIKKF : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleForceLaunchToTarget* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleForceLaunchToTarget* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleForceLaunchToTarget*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + EGJPHIJIKKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJPHIJIKKF_KDNAAOHECPD_OFFSET))(this);
		}

	};
