#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAvatarQTEState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A58560)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A58570)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_WRITE_OFFSET UNITYSDK_OFFSET(0x11A58920)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A58B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAvatarQTEState_KOICEJKDGAE_TypeDefinitionIndex = 83695;

	class AnimatorZoneAvatarQTEState_KOICEJKDGAE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAvatarQTEState*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarQTEState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAvatarQTEState*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarQTEState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARQTESTATE_KOICEJKDGAE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
