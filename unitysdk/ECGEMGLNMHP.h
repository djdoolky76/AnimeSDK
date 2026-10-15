#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Exception.h"
class ECIAICDLAHO;

#define ECGEMGLNMHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC68FF0)
#define ECGEMGLNMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC68EE0)

	class ECGEMGLNMHP : public ::System::Exception
	{
	public:
		::ECIAICDLAHO* CAGIJAJJEMO; // 0x88
		::ECIAICDLAHO* IMEBMDDODHA; // 0x90
		::FIEBGAGBELM INJNMJLEIGN; // 0x98
		::System::Void _ctor(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2, ::ECIAICDLAHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
