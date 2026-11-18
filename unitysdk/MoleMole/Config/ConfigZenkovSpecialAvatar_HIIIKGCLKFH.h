#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFACB370)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFACB380)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_WRITE_OFFSET UNITYSDK_OFFSET(0xFACB520)
#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH__CTOR_OFFSET UNITYSDK_OFFSET(0xFACB640)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZenkovSpecialAvatar_HIIIKGCLKFH_TypeDefinitionIndex = 40709;

	class ConfigZenkovSpecialAvatar_HIIIKGCLKFH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigZenkovSpecialAvatar*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigZenkovSpecialAvatar*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR_HIIIKGCLKFH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
