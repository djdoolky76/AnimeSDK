#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneForbidExhaustedTriggered; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127681F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12768200)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_WRITE_OFFSET UNITYSDK_OFFSET(0x127685B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM__CTOR_OFFSET UNITYSDK_OFFSET(0x127687E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneForbidExhaustedTriggered_HEAAMBMPBPM_TypeDefinitionIndex = 92906;

	class AnimatorZoneForbidExhaustedTriggered_HEAAMBMPBPM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneForbidExhaustedTriggered*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidExhaustedTriggered*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneForbidExhaustedTriggered*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneForbidExhaustedTriggered*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDEXHAUSTEDTRIGGERED_HEAAMBMPBPM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
