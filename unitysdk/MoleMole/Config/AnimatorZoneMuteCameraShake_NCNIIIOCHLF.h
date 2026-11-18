#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5D2D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5D2E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_WRITE_OFFSET UNITYSDK_OFFSET(0x11A5D690)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5D8C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteCameraShake_NCNIIIOCHLF_TypeDefinitionIndex = 47240;

	class AnimatorZoneMuteCameraShake_NCNIIIOCHLF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERASHAKE_NCNIIIOCHLF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
