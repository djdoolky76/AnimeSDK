#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190ACAB0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190ACAC0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_WRITE_OFFSET UNITYSDK_OFFSET(0x190ACDD0)
#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x190ACFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaveMorphParam_KLLOLMJFGGC_TypeDefinitionIndex = 53797;

	class ConfigWaveMorphParam_KLLOLMJFGGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigWaveMorphParam*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigWaveMorphParam*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM_KLLOLMJFGGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
