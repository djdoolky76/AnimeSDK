#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLEBOOCADM.h"
class IAFKJCICCOP;
class KNOLJDOPBDG;

#define GBEAJBOADEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1687FCC0)
#define GBEAJBOADEE_EFHOJNKCMDL_OFFSET UNITYSDK_OFFSET(0x1687FCD0)

inline static constexpr unsigned int GBEAJBOADEE_TypeDefinitionIndex = 69077;

	class GBEAJBOADEE : public ::LKLEBOOCADM
	{
	public:
		::KNOLJDOPBDG* LEEMNOCGBOJ; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::KNOLJDOPBDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::KNOLJDOPBDG*))((::PBYTE)hIl2Cpp + GBEAJBOADEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EFHOJNKCMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEAJBOADEE_EFHOJNKCMDL_OFFSET))(this);
		}

	};
