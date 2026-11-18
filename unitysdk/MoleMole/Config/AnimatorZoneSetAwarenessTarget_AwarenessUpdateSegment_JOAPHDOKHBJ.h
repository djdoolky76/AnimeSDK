#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAAED70)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAAED80)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_WRITE_OFFSET UNITYSDK_OFFSET(0xFAAEF20)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFAAF040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_JOAPHDOKHBJ_TypeDefinitionIndex = 79655;

	class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment_JOAPHDOKHBJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_AWARENESSUPDATESEGMENT_JOAPHDOKHBJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
