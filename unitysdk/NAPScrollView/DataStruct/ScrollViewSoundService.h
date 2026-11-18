#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE_EXECUTESINGLEAPPEARSOUND_OFFSET UNITYSDK_OFFSET(0x1ADEE1C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE_EXECUTESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1ADEE0F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEE0E0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewSoundService_TypeDefinitionIndex = 62036;

	class ScrollViewSoundService : public ::System::Object
	{
	public:
		::MonoUITableScrollV2* _owner; // 0x10

		::System::Void _ctor(::MonoUITableScrollV2* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE__CTOR_OFFSET))(this, owner);
		}

		::System::Void ExecuteSoundAction(::MoleMole::Config::ConfigSoundActionGeneral* action, ::System::String* defaultSoundActionName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionGeneral*, ::System::String*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE_EXECUTESOUNDACTION_OFFSET))(this, action, defaultSoundActionName);
		}

		::System::Void ExecuteSingleAppearSound(::MoleMole::Config::ConfigSoundActionIntending* action, ::System::String* overrideSoundActionName, ::System::String* defaultSoundActionName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionIntending*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWSOUNDSERVICE_EXECUTESINGLEAPPEARSOUND_OFFSET))(this, action, overrideSoundActionName, defaultSoundActionName);
		}
	};
}
