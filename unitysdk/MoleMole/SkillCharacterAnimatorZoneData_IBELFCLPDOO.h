#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19CEAAC0)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19CEAAD0)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_WRITE_OFFSET UNITYSDK_OFFSET(0x19CEABA0)
#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEAC50)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterAnimatorZoneData_IBELFCLPDOO_TypeDefinitionIndex = 65391;

	class SkillCharacterAnimatorZoneData_IBELFCLPDOO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterAnimatorZoneData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkillCharacterAnimatorZoneData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA_IBELFCLPDOO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
