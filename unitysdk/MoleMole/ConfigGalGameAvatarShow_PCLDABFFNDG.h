#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGalGameAvatarShow; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B452180)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B452190)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_WRITE_OFFSET UNITYSDK_OFFSET(0x1B4523E0)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B452560)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShow_PCLDABFFNDG_TypeDefinitionIndex = 46586;

	class ConfigGalGameAvatarShow_PCLDABFFNDG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShow*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShow*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW_PCLDABFFNDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
