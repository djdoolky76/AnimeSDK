#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteInput; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E7C280)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E7C290)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_WRITE_OFFSET UNITYSDK_OFFSET(0x11E7C780)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7CA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteInput_JBAECLGFABJ_TypeDefinitionIndex = 87594;

	class AnimatorZoneMuteInput_JBAECLGFABJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteInput*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteInput*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteInput*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteInput*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEINPUT_JBAECLGFABJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
