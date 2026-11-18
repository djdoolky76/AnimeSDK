#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoActivityResSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x146845F0)
#define MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14684600)
#define MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_WRITE_OFFSET UNITYSDK_OFFSET(0x14684850)
#define MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN__CTOR_OFFSET UNITYSDK_OFFSET(0x146849D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityResSetting_ONJKJDEOGLN_TypeDefinitionIndex = 85193;

	class MonoActivityResSetting_ONJKJDEOGLN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityResSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoActivityResSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_ONJKJDEOGLN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
