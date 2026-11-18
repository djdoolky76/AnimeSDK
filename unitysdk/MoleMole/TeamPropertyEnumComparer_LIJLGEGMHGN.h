#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TeamPropertyEnumComparer.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A079C0)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A079D0)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_WRITE_OFFSET UNITYSDK_OFFSET(0x13A079E0)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x13A079F0)

namespace MoleMole
{
	inline static constexpr unsigned int TeamPropertyEnumComparer_LIJLGEGMHGN_TypeDefinitionIndex = 88377;

	class TeamPropertyEnumComparer_LIJLGEGMHGN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::TeamPropertyEnumComparer& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::TeamPropertyEnumComparer& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_LIJLGEGMHGN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
