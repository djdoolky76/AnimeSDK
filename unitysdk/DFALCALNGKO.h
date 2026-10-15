#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionTriggerActionOnFight; }

#define DFALCALNGKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E8A00)
#define DFALCALNGKO_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C5E8A10)

inline static constexpr unsigned int DFALCALNGKO_TypeDefinitionIndex = 37399;

	class DFALCALNGKO : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionTriggerActionOnFight* OINLNFFMJHH; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + DFALCALNGKO_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + DFALCALNGKO_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
