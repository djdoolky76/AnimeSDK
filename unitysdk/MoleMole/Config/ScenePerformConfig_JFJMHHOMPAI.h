#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B26320)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B26330)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_WRITE_OFFSET UNITYSDK_OFFSET(0x19B26790)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B26A80)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI__CTOR_OFFSET UNITYSDK_OFFSET(0x19B26A40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePerformConfig_JFJMHHOMPAI_TypeDefinitionIndex = 49376;

	class ScenePerformConfig_JFJMHHOMPAI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_JFJMHHOMPAI_TypeDefinitionIndex)->GetStaticField(0x34840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePerformConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ScenePerformConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_JFJMHHOMPAI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
