#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkillCharacterScriptConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19CEAC90)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19CEACA0)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_WRITE_OFFSET UNITYSDK_OFFSET(0x19CEBF30)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CECA20)
#define MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEC9E0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterScriptConfig_EMINLHNCPCE_TypeDefinitionIndex = 48144;

	class SkillCharacterScriptConfig_EMINLHNCPCE
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkillCharacterScriptConfig_EMINLHNCPCE_TypeDefinitionIndex)->GetStaticField(0x50C90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkillCharacterScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SkillCharacterScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERSCRIPTCONFIG_EMINLHNCPCE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
