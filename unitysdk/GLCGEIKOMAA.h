#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCBJOJNLLC.h"
class NFAHODNHEKK;

#define GLCGEIKOMAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C646900)
#define GLCGEIKOMAA_FCKDPOPNLIB_OFFSET UNITYSDK_OFFSET(0x1C646910)
#define GLCGEIKOMAA_TICK_OFFSET UNITYSDK_OFFSET(0x1C647130)

	class GLCGEIKOMAA : public ::HOCBJOJNLLC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGEIKOMAA_CTOR_OFFSET))(this);
		}

		::System::Void FCKDPOPNLIB(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + GLCGEIKOMAA_FCKDPOPNLIB_OFFSET))(this, a1);
		}

		::System::Void Tick(::NFAHODNHEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFAHODNHEKK*))((::PBYTE)hIl2Cpp + GLCGEIKOMAA_TICK_OFFSET))(this, a1);
		}

	};
