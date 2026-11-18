#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AnimatorBlendGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127508D0)
#define MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127508E0)
#define MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_WRITE_OFFSET UNITYSDK_OFFSET(0x12750C90)
#define MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG__CTOR_OFFSET UNITYSDK_OFFSET(0x12750EC0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendGroup_PMLEGGGHEJG_TypeDefinitionIndex = 52578;

	class AnimatorBlendGroup_PMLEGGGHEJG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AnimatorBlendGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimatorBlendGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::AnimatorBlendGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimatorBlendGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP_PMLEGGGHEJG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
