#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Random; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192ACF90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192ACFA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_WRITE_OFFSET UNITYSDK_OFFSET(0x192AD350)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x192AD5E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x192AD5A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_CNHNNEMBGAG_TypeDefinitionIndex = 45142;

	class ConfigSoundAction_Random_CNHNNEMBGAG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_CNHNNEMBGAG_TypeDefinitionIndex)->GetStaticField(0x520B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Random*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Random*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CNHNNEMBGAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
