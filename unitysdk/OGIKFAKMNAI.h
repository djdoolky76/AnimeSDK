#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define OGIKFAKMNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B081990)
#define OGIKFAKMNAI_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1B0819A0)
#define OGIKFAKMNAI_TICK_OFFSET UNITYSDK_OFFSET(0x1B081B40)

inline static constexpr unsigned int OGIKFAKMNAI_TypeDefinitionIndex = 38270;

	class OGIKFAKMNAI : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIKFAKMNAI_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + OGIKFAKMNAI_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + OGIKFAKMNAI_TICK_OFFSET))(this, a1);
		}

	};
