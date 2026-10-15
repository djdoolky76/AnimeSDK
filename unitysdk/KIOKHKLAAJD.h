#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionGeneratePickupItem; }

#define KIOKHKLAAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E3270)
#define KIOKHKLAAJD_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C6E3280)

inline static constexpr unsigned int KIOKHKLAAJD_TypeDefinitionIndex = 37386;

	class KIOKHKLAAJD : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionGeneratePickupItem* HBMANJMOFNO; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionGeneratePickupItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*))((::PBYTE)hIl2Cpp + KIOKHKLAAJD_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KIOKHKLAAJD_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
