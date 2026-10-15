#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleConvertBuff; }

#define ILKLMIIDDJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB783B0)
#define ILKLMIIDDJN_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CB783C0)

inline static constexpr unsigned int ILKLMIIDDJN_TypeDefinitionIndex = 43097;

	class ILKLMIIDDJN : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleConvertBuff* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleConvertBuff* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleConvertBuff*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + ILKLMIIDDJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKLMIIDDJN_KDNAAOHECPD_OFFSET))(this);
		}

	};
