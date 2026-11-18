#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig_ListPatternPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x146AC540)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x146AC550)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_WRITE_OFFSET UNITYSDK_OFFSET(0x146AC620)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x146AC710)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x146AC6D0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_ListPatternPair_GFNOFNPHPJI_TypeDefinitionIndex = 48146;

	class SkillCharacterScriptConfig_ListPatternPair_GFNOFNPHPJI
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_ListPatternPair_GFNOFNPHPJI_TypeDefinitionIndex)->GetStaticField(0x4C1D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig_ListPatternPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig_ListPatternPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_LISTPATTERNPAIR_GFNOFNPHPJI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
