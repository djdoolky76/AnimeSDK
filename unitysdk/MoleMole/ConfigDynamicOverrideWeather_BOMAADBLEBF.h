#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFF1A50)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFF1A60)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_WRITE_OFFSET UNITYSDK_OFFSET(0xFFF1BF0)
#define MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF1D10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDynamicOverrideWeather_BOMAADBLEBF_TypeDefinitionIndex = 67064;

	class ConfigDynamicOverrideWeather_BOMAADBLEBF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigDynamicOverrideWeather*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigDynamicOverrideWeather*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICOVERRIDEWEATHER_BOMAADBLEBF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
