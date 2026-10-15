#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define NKOCJECPAMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C76DF70)
#define NKOCJECPAMK_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C76DF80)
#define NKOCJECPAMK_TICK_OFFSET UNITYSDK_OFFSET(0x1C76E0C0)

inline static constexpr unsigned int NKOCJECPAMK_TypeDefinitionIndex = 37356;

	class NKOCJECPAMK : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCJECPAMK_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + NKOCJECPAMK_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + NKOCJECPAMK_TICK_OFFSET))(this, a1);
		}

	};
