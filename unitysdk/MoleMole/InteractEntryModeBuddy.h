#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class IJLOBIGIEDO;
namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A90A8C0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A90A830)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A90A960)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90A9E0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1A90A9F0)
#define MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A90AA80)

namespace MoleMole
{
	inline static constexpr unsigned int InteractEntryModeBuddy_TypeDefinitionIndex = 56288;

	class InteractEntryModeBuddy : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::MoleMole::AniamtorParamsSetting* BuddyAniamtorSetting; // 0x20
		::System::String* PosAttachPoint; // 0x28
		::MoleMole::AniamtorParamsSetting* InteractAniamtorSetting; // 0x30
		::System::Boolean MuteLocalInput; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY__CTOR_OFFSET))(this);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTENTRYMODEBUDDY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
