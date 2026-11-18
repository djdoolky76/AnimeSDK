#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class BoxCollisionDetect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA22040)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA22050)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA23480)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA24040)
#define MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BoxCollisionDetect_OBLNKNIHGFD_TypeDefinitionIndex = 70919;

	class BoxCollisionDetect_OBLNKNIHGFD
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionDetect_OBLNKNIHGFD_TypeDefinitionIndex)->GetStaticField(0x50B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionDetect_OBLNKNIHGFD_TypeDefinitionIndex)->GetStaticField(0x50B98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionDetect_OBLNKNIHGFD_TypeDefinitionIndex)->GetStaticField(0x50BA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BoxCollisionDetect_OBLNKNIHGFD_TypeDefinitionIndex)->GetStaticField(0x50BA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::BoxCollisionDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BoxCollisionDetect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::BoxCollisionDetect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BoxCollisionDetect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BOXCOLLISIONDETECT_OBLNKNIHGFD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
