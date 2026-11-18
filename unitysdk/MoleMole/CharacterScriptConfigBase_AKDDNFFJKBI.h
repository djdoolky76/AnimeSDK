#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfigBase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5B1040)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5B1050)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA15840)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA15D60)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfigBase_AKDDNFFJKBI_TypeDefinitionIndex = 41077;

	class CharacterScriptConfigBase_AKDDNFFJKBI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfigBase*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfigBase*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfigBase*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfigBase*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_AKDDNFFJKBI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
