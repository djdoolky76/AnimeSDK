#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneEnablePositionConstraint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131D27F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131D2800)
#define MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_WRITE_OFFSET UNITYSDK_OFFSET(0x131D2C50)
#define MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP__CTOR_OFFSET UNITYSDK_OFFSET(0x131D2EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneEnablePositionConstraint_KHPHDPBPINP_TypeDefinitionIndex = 42099;

	class AnimatorZoneEnablePositionConstraint_KHPHDPBPINP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneEnablePositionConstraint*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEnablePositionConstraint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneEnablePositionConstraint*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEnablePositionConstraint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENABLEPOSITIONCONSTRAINT_KHPHDPBPINP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
