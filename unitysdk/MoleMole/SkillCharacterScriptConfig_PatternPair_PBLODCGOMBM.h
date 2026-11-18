#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig_PatternPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15AD6AD0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15AD6AE0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_WRITE_OFFSET UNITYSDK_OFFSET(0x15AD6C70)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD6D90)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_PatternPair_PBLODCGOMBM_TypeDefinitionIndex = 48148;

	class SkillCharacterScriptConfig_PatternPair_PBLODCGOMBM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_PatternPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_PatternPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_PatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_PATTERNPAIR_PBLODCGOMBM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
