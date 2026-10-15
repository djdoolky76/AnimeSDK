#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionAddBuff; }

#define DCNFKEHFHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E7F50)
#define DCNFKEHFHJM_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C5E7F60)

	class DCNFKEHFHJM : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionAddBuff* LEIJDAMHJPH; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionAddBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + DCNFKEHFHJM_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + DCNFKEHFHJM_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
