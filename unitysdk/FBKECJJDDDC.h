#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionChangeCurWaitTime; }

#define FBKECJJDDDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E33D0)
#define FBKECJJDDDC_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C5E33E0)

inline static constexpr unsigned int FBKECJJDDDC_TypeDefinitionIndex = 37380;

	class FBKECJJDDDC : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionChangeCurWaitTime* LIEOLDKGPEE; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + FBKECJJDDDC_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FBKECJJDDDC_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
