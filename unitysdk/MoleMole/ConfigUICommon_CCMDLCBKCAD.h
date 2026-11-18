#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8C1B10)
#define MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8C1B20)
#define MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8C3800)
#define MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C4840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_CCMDLCBKCAD_TypeDefinitionIndex = 50404;

	class ConfigUICommon_CCMDLCBKCAD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_CCMDLCBKCAD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
