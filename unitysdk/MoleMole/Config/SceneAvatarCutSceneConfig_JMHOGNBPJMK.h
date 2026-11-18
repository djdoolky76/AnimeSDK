#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8B64B0)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B64C0)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8B6710)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B6890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarCutSceneConfig_JMHOGNBPJMK_TypeDefinitionIndex = 80499;

	class SceneAvatarCutSceneConfig_JMHOGNBPJMK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneAvatarCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::SceneAvatarCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_JMHOGNBPJMK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
