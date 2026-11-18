#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAudioFetchAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E873B0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E873C0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_WRITE_OFFSET UNITYSDK_OFFSET(0x11E87550)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E876E0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI__CTOR_OFFSET UNITYSDK_OFFSET(0x11E876A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioFetchAnimatorParam_JJAGGCFFBJI_TypeDefinitionIndex = 48292;

	class ConfigAudioFetchAnimatorParam_JJAGGCFFBJI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAudioFetchAnimatorParam_JJAGGCFFBJI_TypeDefinitionIndex)->GetStaticField(0x48610);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioFetchAnimatorParam*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioFetchAnimatorParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_JJAGGCFFBJI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
