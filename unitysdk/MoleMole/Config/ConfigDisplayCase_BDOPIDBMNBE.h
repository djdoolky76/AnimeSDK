#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDisplayCase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD18C0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD18D0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_WRITE_OFFSET UNITYSDK_OFFSET(0xFFD1C90)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD1ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDisplayCase_BDOPIDBMNBE_TypeDefinitionIndex = 73163;

	class ConfigDisplayCase_BDOPIDBMNBE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDisplayCase*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigDisplayCase*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_BDOPIDBMNBE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
