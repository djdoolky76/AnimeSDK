#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPanelFadeInOutScript_PNIBCLFNEIA.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FE170C0)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET UNITYSDK_OFFSET(0x1FE17530)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET UNITYSDK_OFFSET(0x1FE176C0)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x1FE17110)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FE178E0)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FE17820)
#define MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE179C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPanelFadeInOutScript_TypeDefinitionIndex = 96466;

	class UIPanelFadeInOutScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* root; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::System::String* NNMIAOMGAAO; // 0x28
		::System::String* GENKEAPFFJG; // 0x30
		::System::Single JJGICAJMNBO; // 0x38
		::System::Single EOFEDMONKLI; // 0x3C
		::System::Single HLDBBJFJLJH; // 0x40
		::System::Boolean ICGFKMAOFOK; // 0x44
		::System::Byte _padding0[0x3];
		::MoleMole::UIPanelFadeInOutScript_PNIBCLFNEIA KCAGIHIEOBA; // 0x48
		::System::Boolean JBJFINAFFKO; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_INIT_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_FADEOUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPANELFADEINOUTSCRIPT_ONDISABLE_OFFSET))(this);
		}
	};
}
