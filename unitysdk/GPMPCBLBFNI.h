#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionPropertyModifier; }

#define GPMPCBLBFNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CE250)
#define GPMPCBLBFNI_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1D7CE260)

inline static constexpr unsigned int GPMPCBLBFNI_TypeDefinitionIndex = 38319;

	class GPMPCBLBFNI : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionPropertyModifier* JKMCCMKALOM; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionPropertyModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + GPMPCBLBFNI_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + GPMPCBLBFNI_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
