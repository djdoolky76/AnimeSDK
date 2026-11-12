#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;

#define PEFBFJIOIMO_BAHFHEKBONE_OFFSET UNITYSDK_OFFSET(0xC941390)
#define PEFBFJIOIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC941240)
#define PEFBFJIOIMO_GHANHFMOGPA_OFFSET UNITYSDK_OFFSET(0xC9412D0)

inline static constexpr unsigned int PEFBFJIOIMO_TypeDefinitionIndex = 79931;

	class PEFBFJIOIMO : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		// static const ::System::Object AIIBGOJFGFK; // 0x0
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::MJAOHLLPLGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + PEFBFJIOIMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GHANHFMOGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBFJIOIMO_GHANHFMOGPA_OFFSET))(this);
		}

		::System::UInt32 BAHFHEKBONE(::LPHINGPIEAJ* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PEFBFJIOIMO_BAHFHEKBONE_OFFSET))(this, a1);
		}

	};
