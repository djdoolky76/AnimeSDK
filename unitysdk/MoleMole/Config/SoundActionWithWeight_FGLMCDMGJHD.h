#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SoundActionWithWeight; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6EF440)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6EF450)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6EF5E0)
#define MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EF700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SoundActionWithWeight_FGLMCDMGJHD_TypeDefinitionIndex = 88560;

	class SoundActionWithWeight_FGLMCDMGJHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SoundActionWithWeight*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::SoundActionWithWeight*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SoundActionWithWeight*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SOUNDACTIONWITHWEIGHT_FGLMCDMGJHD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
