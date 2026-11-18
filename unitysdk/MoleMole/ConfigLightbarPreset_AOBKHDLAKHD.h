#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLightbarPreset; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190C24A0)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190C24B0)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_WRITE_OFFSET UNITYSDK_OFFSET(0x190C2640)
#define MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x190C2760)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLightbarPreset_AOBKHDLAKHD_TypeDefinitionIndex = 41823;

	class ConfigLightbarPreset_AOBKHDLAKHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLightbarPreset*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLightbarPreset*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigLightbarPreset*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLightbarPreset*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLIGHTBARPRESET_AOBKHDLAKHD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
