#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B35B10)
#define MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B35B20)
#define MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_WRITE_OFFSET UNITYSDK_OFFSET(0x19B35E30)
#define MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B36010)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIFishV2_MEEGCKFILBE_TypeDefinitionIndex = 54732;

	class ConfigUIFishV2_MEEGCKFILBE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIFishV2*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIFishV2*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUIFishV2*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIFISHV2_MEEGCKFILBE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
