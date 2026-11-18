#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118F42E0)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118F42F0)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_WRITE_OFFSET UNITYSDK_OFFSET(0x118F4480)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK__CTOR_OFFSET UNITYSDK_OFFSET(0x118F45A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUp_FHJEOHPLBKK_TypeDefinitionIndex = 42559;

	class ConfigTempleLevelUp_FHJEOHPLBKK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTempleLevelUp*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigTempleLevelUp*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_FHJEOHPLBKK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
