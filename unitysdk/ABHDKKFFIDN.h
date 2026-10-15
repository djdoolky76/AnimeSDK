#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define ABHDKKFFIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C552520)
#define ABHDKKFFIDN_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C552530)
#define ABHDKKFFIDN_TICK_OFFSET UNITYSDK_OFFSET(0x1C552670)

inline static constexpr unsigned int ABHDKKFFIDN_TypeDefinitionIndex = 37345;

	class ABHDKKFFIDN : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHDKKFFIDN_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ABHDKKFFIDN_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + ABHDKKFFIDN_TICK_OFFSET))(this, a1);
		}

	};
