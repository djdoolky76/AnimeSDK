#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121B0890)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121B08A0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_WRITE_OFFSET UNITYSDK_OFFSET(0x121B0CF0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF__CTOR_OFFSET UNITYSDK_OFFSET(0x121B0F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPatternBindAnimatorState_ENHMMJDAOAF_TypeDefinitionIndex = 85794;

	class AttackPatternBindAnimatorState_ENHMMJDAOAF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPatternBindAnimatorState*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AttackPatternBindAnimatorState*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ENHMMJDAOAF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
