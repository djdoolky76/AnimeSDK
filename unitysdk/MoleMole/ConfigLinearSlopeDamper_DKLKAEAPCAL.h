#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLinearSlopeDamper; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8BB300)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8BB310)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8BB770)
#define MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BBA10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLinearSlopeDamper_DKLKAEAPCAL_TypeDefinitionIndex = 89252;

	class ConfigLinearSlopeDamper_DKLKAEAPCAL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLinearSlopeDamper*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigLinearSlopeDamper*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLinearSlopeDamper*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLINEARSLOPEDAMPER_DKLKAEAPCAL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
