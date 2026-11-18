#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A76D1D0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A76D1E0)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_WRITE_OFFSET UNITYSDK_OFFSET(0x1A76D770)
#define MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76DAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectTimeSegmentConfig_CBBNPKODFKP_TypeDefinitionIndex = 47469;

	class EffectTimeSegmentConfig_CBBNPKODFKP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::EffectTimeSegmentConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::EffectTimeSegmentConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTTIMESEGMENTCONFIG_CBBNPKODFKP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
