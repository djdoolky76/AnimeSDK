#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPropertyLibrary; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11A5F5E0)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11A5F5F0)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_WRITE_OFFSET UNITYSDK_OFFSET(0x11A5F840)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5F9C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPropertyLibrary_KMEAPAKPMKE_TypeDefinitionIndex = 86527;

	class AttackPropertyLibrary_KMEAPAKPMKE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPropertyLibrary*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AttackPropertyLibrary*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_KMEAPAKPMKE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
