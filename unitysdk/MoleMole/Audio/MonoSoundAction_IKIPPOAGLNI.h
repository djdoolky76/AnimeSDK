#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Audio { class MonoSoundAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5A6350)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5A6360)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5A64F0)
#define MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A6610)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int MonoSoundAction_IKIPPOAGLNI_TypeDefinitionIndex = 91092;

	class MonoSoundAction_IKIPPOAGLNI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Audio::MonoSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Audio::MonoSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Audio::MonoSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Audio::MonoSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_MONOSOUNDACTION_IKIPPOAGLNI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
