#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
class DFEAHIKPKLO;
class HCFLAPPBPOP;
class LBOOCKEPGLN;

#define LBOOCKEPGLN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB60DEA0)
#define LBOOCKEPGLN_CCNDKKBOKBI_OFFSET UNITYSDK_OFFSET(0xB60DE80)
#define LBOOCKEPGLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB60DF50)
#define LBOOCKEPGLN_EFDAHELBCJC_OFFSET UNITYSDK_OFFSET(0xB60DE90)
#define LBOOCKEPGLN_JOHPKPGOGHD_OFFSET UNITYSDK_OFFSET(0xB60DE70)

inline static constexpr unsigned int LBOOCKEPGLN_TypeDefinitionIndex = 78071;

	class LBOOCKEPGLN
	{
	public:
		::System::Void _ctor(::HCFLAPPBPOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + LBOOCKEPGLN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId JOHPKPGOGHD()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOOCKEPGLN_JOHPKPGOGHD_OFFSET))(this);
		}

		::DFEAHIKPKLO* CCNDKKBOKBI()
		{
			return ((::DFEAHIKPKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOOCKEPGLN_CCNDKKBOKBI_OFFSET))(this);
		}

		::System::UInt64 EFDAHELBCJC()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOOCKEPGLN_EFDAHELBCJC_OFFSET))(this);
		}

		static ::LBOOCKEPGLN* BPLPBPMEODA(::HCFLAPPBPOP* a1)
		{
			return ((::LBOOCKEPGLN*(*)(::HCFLAPPBPOP*))((::PBYTE)hIl2Cpp + LBOOCKEPGLN_BPLPBPMEODA_OFFSET))(a1);
		}

	};
