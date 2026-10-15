#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline::Discussion { class StandSlotUsageInfo; }
namespace RPGTools::Timeline::Discussion { class StandTemplateUsageInfo; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE8DB000)
#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE8DC210)
#define RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xE8DC290)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int StandTemplateUsageInfo_TypeDefinitionIndex = 48779;

	class StandTemplateUsageInfo : public ::System::Object
	{
	public:
		::System::String* TemplateGuid; // 0x10
		::System::String* TemplatePath; // 0x18
		::System::String* TemplateName; // 0x20
		::System::String* TemplateTitle; // 0x28
		::System::Boolean Inverse; // 0x30
		::System::Boolean IsVariant; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single MaxPositionDelta; // 0x34
		::System::Single MaxForwardDelta; // 0x38
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPGTools::Timeline::Discussion::StandSlotUsageInfo*>* Slots; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_GET_ISVALID_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::StandTemplateUsageInfo* NBHCPBBGAKA()
		{
			return ((::RPGTools::Timeline::Discussion::StandTemplateUsageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDTEMPLATEUSAGEINFO_NBHCPBBGAKA_OFFSET))(this);
		}

	};
}
