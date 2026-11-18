#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A7726A0)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A7726B0)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A772850)
#define MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Vector3Range_JECLHFDJFLG_TypeDefinitionIndex = 40444;

	class Vector3Range_JECLHFDJFLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::Vector3Range& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::Vector3Range&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::Vector3Range& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::Vector3Range&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VECTOR3RANGE_JECLHFDJFLG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
