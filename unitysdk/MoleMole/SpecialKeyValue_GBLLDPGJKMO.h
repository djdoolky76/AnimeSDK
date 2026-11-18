#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SpecialKeyValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D5D640)
#define MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D5D650)
#define MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_WRITE_OFFSET UNITYSDK_OFFSET(0x10D5D7E0)
#define MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5D900)

namespace MoleMole
{
	inline static constexpr unsigned int SpecialKeyValue_GBLLDPGJKMO_TypeDefinitionIndex = 58263;

	class SpecialKeyValue_GBLLDPGJKMO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SpecialKeyValue*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SpecialKeyValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SpecialKeyValue*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SpecialKeyValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALKEYVALUE_GBLLDPGJKMO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
