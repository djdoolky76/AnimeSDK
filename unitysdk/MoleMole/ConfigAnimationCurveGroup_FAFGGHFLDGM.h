#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1642D340)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1642D350)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_WRITE_OFFSET UNITYSDK_OFFSET(0x1642D7A0)
#define MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1642DA30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAnimationCurveGroup_FAFGGHFLDGM_TypeDefinitionIndex = 39866;

	class ConfigAnimationCurveGroup_FAFGGHFLDGM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigAnimationCurveGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigAnimationCurveGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANIMATIONCURVEGROUP_FAFGGHFLDGM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
