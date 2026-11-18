#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AA3C0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5AA3D0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5AA560)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AA680)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorButtonControl_DIKGJPNIBML_TypeDefinitionIndex = 39031;

	class AnimatorButtonControl_DIKGJPNIBML
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::AnimatorButtonControl*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::AnimatorButtonControl*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::AnimatorButtonControl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_DIKGJPNIBML_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
