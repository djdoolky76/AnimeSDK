#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;

#define MHCMHGFOOBO_CAPGACHKDIJ_OFFSET UNITYSDK_OFFSET(0x1B350030)
#define MHCMHGFOOBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B350130)
#define MHCMHGFOOBO_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x1B350020)
#define MHCMHGFOOBO_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x1B350040)

inline static constexpr unsigned int MHCMHGFOOBO_TypeDefinitionIndex = 62411;

	class MHCMHGFOOBO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMHGFOOBO_CTOR_OFFSET))(this);
		}

		::RPG::Client::UILayer EGKLFHBCGCB()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMHGFOOBO_EGKLFHBCGCB_OFFSET))(this);
		}

		::RPG::CustomRP::FrameCapture_CaptureType CAPGACHKDIJ()
		{
			return ((::RPG::CustomRP::FrameCapture_CaptureType(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMHGFOOBO_CAPGACHKDIJ_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::FFIOPGBDLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFIOPGBDLCA*))((::PBYTE)hIl2Cpp + MHCMHGFOOBO_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
