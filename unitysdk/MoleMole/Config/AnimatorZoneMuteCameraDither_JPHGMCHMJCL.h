#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteCameraDither; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5CCA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5CCB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_WRITE_OFFSET UNITYSDK_OFFSET(0x11A5D060)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5D290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteCameraDither_JPHGMCHMJCL_TypeDefinitionIndex = 78852;

	class AnimatorZoneMuteCameraDither_JPHGMCHMJCL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteCameraDither*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteCameraDither*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteCameraDither*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteCameraDither*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTECAMERADITHER_JPHGMCHMJCL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
