#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneRenderVisible; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5E740)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5E750)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_WRITE_OFFSET UNITYSDK_OFFSET(0x11A5ECE0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5F020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRenderVisible_ADHAFBBJNMN_TypeDefinitionIndex = 56401;

	class AnimatorZoneRenderVisible_ADHAFBBJNMN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneRenderVisible*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRenderVisible*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneRenderVisible*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRenderVisible*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ADHAFBBJNMN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
