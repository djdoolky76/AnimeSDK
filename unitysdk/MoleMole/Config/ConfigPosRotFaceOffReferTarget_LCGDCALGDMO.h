#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotFaceOffReferTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B929070)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B929080)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_WRITE_OFFSET UNITYSDK_OFFSET(0x1B929A80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92A030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotFaceOffReferTarget_LCGDCALGDMO_TypeDefinitionIndex = 88538;

	class ConfigPosRotFaceOffReferTarget_LCGDCALGDMO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotFaceOffReferTarget*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotFaceOffReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTFACEOFFREFERTARGET_LCGDCALGDMO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
