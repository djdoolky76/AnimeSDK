#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPGTools::Timeline::VFX { class PageTearConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_VFX_TALKPAGETEARDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA34660)
#define RPGTOOLS_TIMELINE_VFX_TALKPAGETEARDATA_SETUP_OFFSET UNITYSDK_OFFSET(0x1DA345C0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int TalkPageTearData_TypeDefinitionIndex = 49722;

	class TalkPageTearData : public ::System::Object
	{
	public:
		::System::String* OldPaperTexturePath; // 0x10
		::System::String* FrontTexturePath; // 0x18
		::System::String* BackTexturePath; // 0x20
		::UnityEngine::Color OldPaperTint; // 0x28
		::System::Single OldPaperIntensity; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_TALKPAGETEARDATA_CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::VFX::PageTearConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::PageTearConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_TALKPAGETEARDATA_SETUP_OFFSET))(this, a1);
		}

	};
}
