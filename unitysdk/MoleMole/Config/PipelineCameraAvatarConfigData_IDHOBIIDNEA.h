#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16545510)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16545520)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_WRITE_OFFSET UNITYSDK_OFFSET(0x16545780)
#define MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA__CTOR_OFFSET UNITYSDK_OFFSET(0x16545900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PipelineCameraAvatarConfigData_IDHOBIIDNEA_TypeDefinitionIndex = 46783;

	class PipelineCameraAvatarConfigData_IDHOBIIDNEA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::PipelineCameraAvatarConfigData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::PipelineCameraAvatarConfigData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PIPELINECAMERAAVATARCONFIGDATA_IDHOBIIDNEA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
