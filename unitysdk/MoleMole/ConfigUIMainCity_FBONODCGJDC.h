#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIMainCity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1CD15B60)
#define MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1CD15B70)
#define MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_WRITE_OFFSET UNITYSDK_OFFSET(0x1CD15F20)
#define MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD16190)
#define MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16150)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex = 75952;

	class ConfigUIMainCity_FBONODCGJDC
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_PBENMLJEEMM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex)->GetStaticField(0x44B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex)->GetStaticField(0x44B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex)->GetStaticField(0x44B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex)->GetStaticField(0x44B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_FBONODCGJDC_TypeDefinitionIndex)->GetStaticField(0x44B50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIMainCity*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUIMainCity*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_FBONODCGJDC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
