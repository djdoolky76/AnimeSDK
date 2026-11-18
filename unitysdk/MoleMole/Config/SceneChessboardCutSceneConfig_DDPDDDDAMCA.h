#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6EC5F0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6EC600)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6ECC40)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6ED040)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6ED000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_DDPDDDDAMCA_TypeDefinitionIndex = 52083;

	class SceneChessboardCutSceneConfig_DDPDDDDAMCA
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_DDPDDDDAMCA_TypeDefinitionIndex)->GetStaticField(0x4C0A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneChessboardCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::SceneChessboardCutSceneConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_DDPDDDDAMCA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
