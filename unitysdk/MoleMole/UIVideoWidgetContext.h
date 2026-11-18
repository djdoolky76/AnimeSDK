#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GONOONNMCJF.h"
#include "unitysdk/KIDNJHBOEBC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/UI/AspectRatioFitter_AspectMode.h"

class ALAFHBOENMO;
class FBKGMECMMNI;
class PKKKFJAONDG;
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x170A5B50)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_VIDEOSKIP_OFFSET UNITYSDK_OFFSET(0x170A5B70)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x170A5B60)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_VIDEOSKIP_OFFSET UNITYSDK_OFFSET(0x170A5B80)
#define MOLEMOLE_UIVIDEOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170A5B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoWidgetContext_TypeDefinitionIndex = 85400;

	class UIVideoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ALAFHBOENMO* performTemplate; // 0x28
		::System::Action* OnPlayEnd; // 0x30
		::System::Action* OnRealPlay; // 0x38
		::FBKGMECMMNI* _Acceleration_k__BackingField; // 0x40
		::System::String* relativeUrl; // 0x48
		::System::Action* OnSetPlayData; // 0x50
		::System::Action* OnVideoDestroy; // 0x58
		::System::Action* OnSkip; // 0x60
		::System::Action_1<::MoleMole::UIVideoWidgetController*>* OnVideoPrepare; // 0x68
		::System::String* audioTimeline; // 0x70
		::UnityEngine::Video::VideoClip* clip; // 0x78
		::PKKKFJAONDG* _VideoSkip_k__BackingField; // 0x80
		::KIDNJHBOEBC fadeMode; // 0x88
		::GONOONNMCJF endMode; // 0x8C
		::System::Single screenHeightOffset; // 0x90
		::UnityEngine::UI::AspectRatioFitter_AspectMode aspectMode; // 0x94
		::System::Boolean isAutoPlayByPrepare; // 0x98
		::System::Boolean isPlayOnAwake; // 0x99
		::System::Boolean autoSetPlayMix; // 0x9A
		::System::Boolean IsSkip; // 0x9B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::FBKGMECMMNI* get_Acceleration()
		{
			return ((::FBKGMECMMNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_Acceleration(::FBKGMECMMNI* value)
		{
			return ((::System::Void(*)(::PVOID, ::FBKGMECMMNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_ACCELERATION_OFFSET))(this, value);
		}

		::PKKKFJAONDG* get_VideoSkip()
		{
			return ((::PKKKFJAONDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_GET_VIDEOSKIP_OFFSET))(this);
		}

		::System::Void set_VideoSkip(::PKKKFJAONDG* value)
		{
			return ((::System::Void(*)(::PVOID, ::PKKKFJAONDG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOWIDGETCONTEXT_SET_VIDEOSKIP_OFFSET))(this, value);
		}
	};
}
