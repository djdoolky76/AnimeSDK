#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetRBL; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19290CC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19290CD0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_WRITE_OFFSET UNITYSDK_OFFSET(0x19291120)
#define MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP__CTOR_OFFSET UNITYSDK_OFFSET(0x192913B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetRBL_ACIBENNCBFP_TypeDefinitionIndex = 85732;

	class AnimatorZoneSetRBL_ACIBENNCBFP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetRBL*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetRBL*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetRBL*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetRBL*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETRBL_ACIBENNCBFP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
