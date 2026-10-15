#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionChangeValidItem; }

#define PIMHALPLNOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BF230)
#define PIMHALPLNOF_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7BF240)

inline static constexpr unsigned int PIMHALPLNOF_TypeDefinitionIndex = 37382;

	class PIMHALPLNOF : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionChangeValidItem* GLLGLGDKHOB; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeValidItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeValidItem*))((::PBYTE)hIl2Cpp + PIMHALPLNOF_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + PIMHALPLNOF_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
