#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigActivityLiveHouseRhythm; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1276EA40)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1276EA50)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_WRITE_OFFSET UNITYSDK_OFFSET(0x1276EBF0)
#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1276ED10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseRhythm_BKKJDAGNDFL_TypeDefinitionIndex = 63699;

	class ConfigActivityLiveHouseRhythm_BKKJDAGNDFL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigActivityLiveHouseRhythm*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigActivityLiveHouseRhythm*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSERHYTHM_BKKJDAGNDFL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
