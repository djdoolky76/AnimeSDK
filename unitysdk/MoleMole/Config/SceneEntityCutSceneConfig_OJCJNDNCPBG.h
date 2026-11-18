#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B93A690)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B93A6A0)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_WRITE_OFFSET UNITYSDK_OFFSET(0x1B93AC30)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93AF70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneEntityCutSceneConfig_OJCJNDNCPBG_TypeDefinitionIndex = 85882;

	class SceneEntityCutSceneConfig_OJCJNDNCPBG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneEntityCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::SceneEntityCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_OJCJNDNCPBG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
