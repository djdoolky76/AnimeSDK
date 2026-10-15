#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::Timeline { class TimelineEventArgument_TimelineEventCallParam; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_CPJHCALNJJN_OFFSET UNITYSDK_OFFSET(0xE94C7E0)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE94CA30)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_HFJKNOBJCHI_OFFSET UNITYSDK_OFFSET(0xE94C770)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_HLJODDFEEFB_OFFSET UNITYSDK_OFFSET(0xE94C9A0)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_KDOELPOACHB_OFFSET UNITYSDK_OFFSET(0xE94C8E0)
#define RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0xE94C940)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineEventArgument_TypeDefinitionIndex = 48431;

	class TimelineEventArgument : public ::System::Object
	{
	public:
		::System::Boolean NonPerformer; // 0x10
		::System::Byte TypeEnumIdx; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* Key; // 0x18
		::Il2CppArray<::System::Object*>* Parameters; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_CTOR_OFFSET))(this);
		}

		::System::String* HFJKNOBJCHI(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_HFJKNOBJCHI_OFFSET))(this, a1);
		}

		::System::Int32 KDOELPOACHB(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_KDOELPOACHB_OFFSET))(this, a1);
		}

		::System::Single MPIBNJBBOKM(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_MPIBNJBBOKM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HLJODDFEEFB(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_HLJODDFEEFB_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::TimelineEventArgument_TimelineEventCallParam* CPJHCALNJJN(::System::String* a1)
		{
			return ((::RPGTools::Timeline::TimelineEventArgument_TimelineEventCallParam*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEEVENTARGUMENT_CPJHCALNJJN_OFFSET))(this, a1);
		}

	};
}
