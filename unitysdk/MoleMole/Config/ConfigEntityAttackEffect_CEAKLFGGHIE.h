#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E8C930)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E8C940)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_WRITE_OFFSET UNITYSDK_OFFSET(0x11E8D010)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8D400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffect_CEAKLFGGHIE_TypeDefinitionIndex = 85138;

	class ConfigEntityAttackEffect_CEAKLFGGHIE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_CEAKLFGGHIE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
