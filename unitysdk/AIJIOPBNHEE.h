#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionChangeCurSectionNormalCell; }

#define AIJIOPBNHEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C55CFD0)
#define AIJIOPBNHEE_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C55CFE0)

inline static constexpr unsigned int AIJIOPBNHEE_TypeDefinitionIndex = 37379;

	class AIJIOPBNHEE : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* ECFIHBEJFJN; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*))((::PBYTE)hIl2Cpp + AIJIOPBNHEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + AIJIOPBNHEE_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
