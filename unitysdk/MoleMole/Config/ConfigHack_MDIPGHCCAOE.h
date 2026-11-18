#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHack; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAC6AA0)
#define MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAC6AB0)
#define MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_WRITE_OFFSET UNITYSDK_OFFSET(0xFAC6D10)
#define MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAC6F00)
#define MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC6EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHack_MDIPGHCCAOE_TypeDefinitionIndex = 79028;

	class ConfigHack_MDIPGHCCAOE
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HackObjectType, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HackObjectType, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHack_MDIPGHCCAOE_TypeDefinitionIndex)->GetStaticField(0x516B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHack*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHack*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_MDIPGHCCAOE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
