#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class InteractTraitData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139EC9B0)
#define MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139EC9C0)
#define MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_WRITE_OFFSET UNITYSDK_OFFSET(0x139ECBB0)
#define MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA__CTOR_OFFSET UNITYSDK_OFFSET(0x139ECD20)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitData_BPHPLMDBGFA_TypeDefinitionIndex = 86139;

	class InteractTraitData_BPHPLMDBGFA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::InteractTraitData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InteractTraitData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::InteractTraitData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InteractTraitData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_BPHPLMDBGFA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
