#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;

#define NICMEMIAIIB_CAPGACHKDIJ_OFFSET UNITYSDK_OFFSET(0xC4C08D0)
#define NICMEMIAIIB_CTOR_OFFSET UNITYSDK_OFFSET(0xC4C09B0)
#define NICMEMIAIIB_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0xC4C08C0)
#define NICMEMIAIIB_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xC4C08E0)

inline static constexpr unsigned int NICMEMIAIIB_TypeDefinitionIndex = 62409;

	class NICMEMIAIIB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICMEMIAIIB_CTOR_OFFSET))(this);
		}

		::RPG::Client::UILayer EGKLFHBCGCB()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + NICMEMIAIIB_EGKLFHBCGCB_OFFSET))(this);
		}

		::RPG::CustomRP::FrameCapture_CaptureType CAPGACHKDIJ()
		{
			return ((::RPG::CustomRP::FrameCapture_CaptureType(*)(::PVOID))((::PBYTE)hIl2Cpp + NICMEMIAIIB_CAPGACHKDIJ_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::FFIOPGBDLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFIOPGBDLCA*))((::PBYTE)hIl2Cpp + NICMEMIAIIB_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
