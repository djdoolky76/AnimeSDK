#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetBGMFollowTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11EA18A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11EA18B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_WRITE_OFFSET UNITYSDK_OFFSET(0x11EA1A40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA1B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetBGMFollowTarget_IHCOAOHNMHD_TypeDefinitionIndex = 92116;

	class ConfigSoundAction_SetBGMFollowTarget_IHCOAOHNMHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetBGMFollowTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetBGMFollowTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetBGMFollowTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetBGMFollowTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETBGMFOLLOWTARGET_IHCOAOHNMHD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
