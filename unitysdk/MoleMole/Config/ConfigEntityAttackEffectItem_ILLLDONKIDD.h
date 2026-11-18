#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A763100)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A763110)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_WRITE_OFFSET UNITYSDK_OFFSET(0x1A7639F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A763F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffectItem_ILLLDONKIDD_TypeDefinitionIndex = 88124;

	class ConfigEntityAttackEffectItem_ILLLDONKIDD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackEffectItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackEffectItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackEffectItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECTITEM_ILLLDONKIDD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
