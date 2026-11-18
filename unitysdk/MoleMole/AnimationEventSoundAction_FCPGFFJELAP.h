#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimationEventSoundAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127504B0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127504C0)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_WRITE_OFFSET UNITYSDK_OFFSET(0x12750710)
#define MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP__CTOR_OFFSET UNITYSDK_OFFSET(0x12750890)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationEventSoundAction_FCPGFFJELAP_TypeDefinitionIndex = 54243;

	class AnimationEventSoundAction_FCPGFFJELAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimationEventSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AnimationEventSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationEventSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONEVENTSOUNDACTION_FCPGFFJELAP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
