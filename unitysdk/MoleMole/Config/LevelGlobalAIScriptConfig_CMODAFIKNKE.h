#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190B54A0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190B54B0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_WRITE_OFFSET UNITYSDK_OFFSET(0x190B5700)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190B58E0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE__CTOR_OFFSET UNITYSDK_OFFSET(0x190B58A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfig_CMODAFIKNKE_TypeDefinitionIndex = 75694;

	class LevelGlobalAIScriptConfig_CMODAFIKNKE
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_CMODAFIKNKE_TypeDefinitionIndex)->GetStaticField(0x41A90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Object*>*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelGlobalAIScriptConfig_CMODAFIKNKE_TypeDefinitionIndex)->GetStaticField(0x41A98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelGlobalAIScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::LevelGlobalAIScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_CMODAFIKNKE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
