#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFlowCanvas; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192409C0)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192409D0)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_WRITE_OFFSET UNITYSDK_OFFSET(0x19240B60)
#define MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI__CTOR_OFFSET UNITYSDK_OFFSET(0x19240C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFlowCanvas_HBHILEMPHMI_TypeDefinitionIndex = 47159;

	class ConfigFlowCanvas_HBHILEMPHMI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFlowCanvas*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigFlowCanvas*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOWCANVAS_HBHILEMPHMI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
