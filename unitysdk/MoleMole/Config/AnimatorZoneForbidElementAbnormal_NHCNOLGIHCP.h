#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneForbidElementAbnormal; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E76520)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E76530)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_WRITE_OFFSET UNITYSDK_OFFSET(0x11E76980)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP__CTOR_OFFSET UNITYSDK_OFFSET(0x11E76C10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneForbidElementAbnormal_NHCNOLGIHCP_TypeDefinitionIndex = 76326;

	class AnimatorZoneForbidElementAbnormal_NHCNOLGIHCP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneForbidElementAbnormal*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidElementAbnormal*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneForbidElementAbnormal*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidElementAbnormal*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDELEMENTABNORMAL_NHCNOLGIHCP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
