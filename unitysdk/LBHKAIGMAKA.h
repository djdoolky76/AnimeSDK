#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBEOIDJHJMG.h"
class BBPBANMMLMF;
class EAGPPDDBBIM;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class NEFGBOPDKEH;

#define LBHKAIGMAKA_BEACDEEOHOO_OFFSET UNITYSDK_OFFSET(0x1B299240)
#define LBHKAIGMAKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B299160)

inline static constexpr unsigned int LBHKAIGMAKA_TypeDefinitionIndex = 80066;

	class LBHKAIGMAKA : public ::FBEOIDJHJMG
	{
	public:
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::LPHINGPIEAJ* a2, ::BBPBANMMLMF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::LPHINGPIEAJ*, ::BBPBANMMLMF*))((::PBYTE)hIl2Cpp + LBHKAIGMAKA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::NEFGBOPDKEH* BEACDEEOHOO(::EAGPPDDBBIM* a1)
		{
			return ((::NEFGBOPDKEH*(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + LBHKAIGMAKA_BEACDEEOHOO_OFFSET))(this, a1);
		}

	};
