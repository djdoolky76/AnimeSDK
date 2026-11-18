#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneForbidRotation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16522AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16522AB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_WRITE_OFFSET UNITYSDK_OFFSET(0x165230E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16523480)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneForbidRotation_IBNHDHEPPCJ_TypeDefinitionIndex = 66631;

	class AnimatorZoneForbidRotation_IBNHDHEPPCJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneForbidRotation*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidRotation*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneForbidRotation*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidRotation*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_IBNHDHEPPCJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
