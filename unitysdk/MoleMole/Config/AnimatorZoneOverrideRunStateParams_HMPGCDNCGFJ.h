#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneOverrideRunStateParams; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163FE100)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163FE110)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_WRITE_OFFSET UNITYSDK_OFFSET(0x163FE880)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x163FECD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideRunStateParams_HMPGCDNCGFJ_TypeDefinitionIndex = 53535;

	class AnimatorZoneOverrideRunStateParams_HMPGCDNCGFJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneOverrideRunStateParams*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideRunStateParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneOverrideRunStateParams*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneOverrideRunStateParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_HMPGCDNCGFJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
