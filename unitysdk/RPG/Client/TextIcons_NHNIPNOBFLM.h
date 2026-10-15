#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TextIcons; }

#define RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_BUILD_OFFSET UNITYSDK_OFFSET(0xE213030)
#define RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_CTOR_OFFSET UNITYSDK_OFFSET(0xE20C400)
#define RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_GETICONASPECTS_OFFSET UNITYSDK_OFFSET(0xE212FE0)

namespace RPG::Client
{
	class TextIcons_NHNIPNOBFLM : public ::System::Object
	{
	public:
		::RPG::Client::TextIcons* GFAGBNEHELN; // 0x10
		::System::Boolean PJEIPLHJOBH; // 0x18
		::System::Void _ctor(::RPG::Client::TextIcons* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextIcons*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Single>* GetIconAspects()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_GETICONASPECTS_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_NHNIPNOBFLM_BUILD_OFFSET))(this);
		}

	};
}
