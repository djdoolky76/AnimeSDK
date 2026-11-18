#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class TextureDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6F27E0)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F27F0)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6F3D70)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F49F0)
#define MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F49B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TextureDetect_DMGHDBODDOE_TypeDefinitionIndex = 43388;

	class TextureDetect_DMGHDBODDOE
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_DMGHDBODDOE_TypeDefinitionIndex)->GetStaticField(0x4C0B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_DMGHDBODDOE_TypeDefinitionIndex)->GetStaticField(0x4C0B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_DMGHDBODDOE_TypeDefinitionIndex)->GetStaticField(0x4C0C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TextureDetect_DMGHDBODDOE_TypeDefinitionIndex)->GetStaticField(0x4C0C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::TextureDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TextureDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::TextureDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TextureDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TEXTUREDETECT_DMGHDBODDOE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
