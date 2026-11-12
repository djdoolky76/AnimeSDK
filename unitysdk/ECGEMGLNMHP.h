#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Exception.h"
class ECIAICDLAHO;

#define ECGEMGLNMHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF199D0)
#define ECGEMGLNMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF198C0)

inline static constexpr unsigned int ECGEMGLNMHP_TypeDefinitionIndex = 45374;

	class ECGEMGLNMHP : public ::System::Exception
	{
	public:
		::ECIAICDLAHO* CAGIJAJJEMO; // 0x88
		::FIEBGAGBELM INJNMJLEIGN; // 0x90
		::ECIAICDLAHO* IMEBMDDODHA; // 0xA8
		::System::Void _ctor(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2, ::ECIAICDLAHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
