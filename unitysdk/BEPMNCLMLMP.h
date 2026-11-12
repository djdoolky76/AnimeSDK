#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;

#define BEPMNCLMLMP_CAPGACHKDIJ_OFFSET UNITYSDK_OFFSET(0xB7E5D00)
#define BEPMNCLMLMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E5D70)
#define BEPMNCLMLMP_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0xB7E5CF0)
#define BEPMNCLMLMP_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB7E5D10)

inline static constexpr unsigned int BEPMNCLMLMP_TypeDefinitionIndex = 62410;

	class BEPMNCLMLMP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPMNCLMLMP_CTOR_OFFSET))(this);
		}

		::RPG::Client::UILayer EGKLFHBCGCB()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPMNCLMLMP_EGKLFHBCGCB_OFFSET))(this);
		}

		::RPG::CustomRP::FrameCapture_CaptureType CAPGACHKDIJ()
		{
			return ((::RPG::CustomRP::FrameCapture_CaptureType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPMNCLMLMP_CAPGACHKDIJ_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::FFIOPGBDLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFIOPGBDLCA*))((::PBYTE)hIl2Cpp + BEPMNCLMLMP_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
