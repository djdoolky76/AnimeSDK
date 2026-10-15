#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define OGIKFAKMNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CE430)
#define OGIKFAKMNAI_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C7CE440)
#define OGIKFAKMNAI_TICK_OFFSET UNITYSDK_OFFSET(0x1C7CE5E0)

inline static constexpr unsigned int OGIKFAKMNAI_TypeDefinitionIndex = 37342;

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
