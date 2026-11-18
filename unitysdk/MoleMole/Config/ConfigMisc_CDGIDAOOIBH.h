#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA2ED30)
#define MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA2ED40)
#define MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA30A80)
#define MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA31B90)
#define MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA31B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex = 92044;

	class ConfigMisc_CDGIDAOOIBH
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_PBENMLJEEMM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_JNGLFPAKMCI()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMisc_CDGIDAOOIBH_TypeDefinitionIndex)->GetStaticField(0x50BD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_CDGIDAOOIBH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
