#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Exception.h"
class ECIAICDLAHO;

#define ECGEMGLNMHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC3B950)
#define ECGEMGLNMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3B840)

inline static constexpr unsigned int ECGEMGLNMHP_TypeDefinitionIndex = 44299;

	class ECGEMGLNMHP : public ::System::Exception
	{
	public:
		::ECIAICDLAHO* IMEBMDDODHA; // 0x88
		::FIEBGAGBELM INJNMJLEIGN; // 0x90
		::ECIAICDLAHO* CAGIJAJJEMO; // 0xA8
		::System::Void _ctor(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2, ::ECIAICDLAHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::FIEBGAGBELM a1, ::ECIAICDLAHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FIEBGAGBELM, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + ECGEMGLNMHP_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
