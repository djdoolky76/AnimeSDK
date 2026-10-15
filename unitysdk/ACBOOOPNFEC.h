#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSetNextScoreDelta; }

#define ACBOOOPNFEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C849A40)
#define ACBOOOPNFEC_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C849A50)

inline static constexpr unsigned int ACBOOOPNFEC_TypeDefinitionIndex = 43125;

	class ACBOOOPNFEC : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleSetNextScoreDelta* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleSetNextScoreDelta* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetNextScoreDelta*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + ACBOOOPNFEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBOOOPNFEC_KDNAAOHECPD_OFFSET))(this);
		}

	};
