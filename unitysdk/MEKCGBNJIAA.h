#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;

#define MEKCGBNJIAA_CAPGACHKDIJ_OFFSET UNITYSDK_OFFSET(0x17C662C0)
#define MEKCGBNJIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x17C66360)
#define MEKCGBNJIAA_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x17C662B0)
#define MEKCGBNJIAA_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x17C662D0)

inline static constexpr unsigned int MEKCGBNJIAA_TypeDefinitionIndex = 62413;

	class MEKCGBNJIAA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKCGBNJIAA_CTOR_OFFSET))(this);
		}

		::RPG::Client::UILayer EGKLFHBCGCB()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKCGBNJIAA_EGKLFHBCGCB_OFFSET))(this);
		}

		::RPG::CustomRP::FrameCapture_CaptureType CAPGACHKDIJ()
		{
			return ((::RPG::CustomRP::FrameCapture_CaptureType(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKCGBNJIAA_CAPGACHKDIJ_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::FFIOPGBDLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFIOPGBDLCA*))((::PBYTE)hIl2Cpp + MEKCGBNJIAA_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
