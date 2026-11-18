#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneTags; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B0F6F0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B0F700)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_WRITE_OFFSET UNITYSDK_OFFSET(0x19B0FBF0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0FED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneTags_HKBOGBFAKJA_TypeDefinitionIndex = 87602;

	class AnimatorZoneTags_HKBOGBFAKJA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneTags*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneTags*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneTags*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneTags*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_HKBOGBFAKJA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
