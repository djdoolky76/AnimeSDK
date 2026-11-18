#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D3910)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6D3920)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6D41E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D46E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferTarget_GCHODGDMOPO_TypeDefinitionIndex = 45693;

	class ConfigPosRotReferTarget_GCHODGDMOPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GCHODGDMOPO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
