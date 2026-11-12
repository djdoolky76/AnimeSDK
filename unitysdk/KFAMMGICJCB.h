#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
class FFIOPGBDLCA;
namespace RPG::GameCore { class GameEntity; }

#define KFAMMGICJCB_AINDLHDPKJI_OFFSET UNITYSDK_OFFSET(0xBC14550)
#define KFAMMGICJCB_CAPGACHKDIJ_OFFSET UNITYSDK_OFFSET(0xBC14460)
#define KFAMMGICJCB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC145F0)
#define KFAMMGICJCB_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0xBC14450)
#define KFAMMGICJCB_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xBC14470)

inline static constexpr unsigned int KFAMMGICJCB_TypeDefinitionIndex = 62412;

	class KFAMMGICJCB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAMMGICJCB_CTOR_OFFSET))(this);
		}

		::RPG::Client::UILayer EGKLFHBCGCB()
		{
			return ((::RPG::Client::UILayer(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAMMGICJCB_EGKLFHBCGCB_OFFSET))(this);
		}

		::RPG::CustomRP::FrameCapture_CaptureType CAPGACHKDIJ()
		{
			return ((::RPG::CustomRP::FrameCapture_CaptureType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFAMMGICJCB_CAPGACHKDIJ_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::FFIOPGBDLCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFIOPGBDLCA*))((::PBYTE)hIl2Cpp + KFAMMGICJCB_GNADABFLEFM_OFFSET))(this, a1);
		}

		static ::System::Boolean AINDLHDPKJI(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFAMMGICJCB_AINDLHDPKJI_OFFSET))(a1, a2, a3);
		}

	};
