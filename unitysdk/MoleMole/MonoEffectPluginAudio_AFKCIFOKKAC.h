#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginAudio; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x135B80A0)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x135B80B0)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_WRITE_OFFSET UNITYSDK_OFFSET(0x135B83C0)
#define MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC__CTOR_OFFSET UNITYSDK_OFFSET(0x135B85A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAudio_AFKCIFOKKAC_TypeDefinitionIndex = 86107;

	class MonoEffectPluginAudio_AFKCIFOKKAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginAudio*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginAudio*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginAudio*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginAudio*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINAUDIO_AFKCIFOKKAC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
