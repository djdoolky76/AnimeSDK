#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_GlobalValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190A6570)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190A6580)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_WRITE_OFFSET UNITYSDK_OFFSET(0x190A6930)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A6BC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC__CTOR_OFFSET UNITYSDK_OFFSET(0x190A6B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_DADNIJBAOKC_TypeDefinitionIndex = 90874;

	class ConfigSoundAction_GlobalValue_DADNIJBAOKC
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_GlobalValue_DADNIJBAOKC_TypeDefinitionIndex)->GetStaticField(0x41A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_GlobalValue*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_GlobalValue*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_DADNIJBAOKC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
