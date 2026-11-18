#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFHGMKOGNG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NDFPHHKNGGL;
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0EE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementContext_TypeDefinitionIndex = 75225;

	class UIActivityCameraSettlementContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::RenderTexture* captureRT; // 0x28
		::NDFPHHKNGGL* settlementRecord; // 0x30
		::CAFHGMKOGNG SourceType; // 0x38
		::System::Boolean IsRequestFinishPhotoQuest; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
