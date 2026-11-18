#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneLookIK; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5AF80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5AF90)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_WRITE_OFFSET UNITYSDK_OFFSET(0x11A5BAE0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5C140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIK_FELOCDINMJM_TypeDefinitionIndex = 63827;

	class AnimatorZoneLookIK_FELOCDINMJM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneLookIK*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLookIK*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneLookIK*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneLookIK*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_FELOCDINMJM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
