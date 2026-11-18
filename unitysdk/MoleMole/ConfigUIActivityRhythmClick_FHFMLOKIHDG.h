#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIActivityRhythmClick; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1654FEA0)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1654FEB0)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_WRITE_OFFSET UNITYSDK_OFFSET(0x16550040)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16550160)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIActivityRhythmClick_FHFMLOKIHDG_TypeDefinitionIndex = 40587;

	class ConfigUIActivityRhythmClick_FHFMLOKIHDG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIActivityRhythmClick*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIActivityRhythmClick*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUIActivityRhythmClick*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIActivityRhythmClick*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_FHFMLOKIHDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
