#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCharacterAnimatorStateLength; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1909A280)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1909A290)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_WRITE_OFFSET UNITYSDK_OFFSET(0x1909A420)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1909A540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCharacterAnimatorStateLength_PJELCPBOCDO_TypeDefinitionIndex = 76114;

	class ConfigCharacterAnimatorStateLength_PJELCPBOCDO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCharacterAnimatorStateLength*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAnimatorStateLength*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCharacterAnimatorStateLength*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAnimatorStateLength*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_PJELCPBOCDO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
