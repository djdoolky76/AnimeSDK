#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Level { class LevelConfig_Split; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AEF970)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AEF980)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_WRITE_OFFSET UNITYSDK_OFFSET(0x14AF0630)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AF0DD0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF0D90)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex = 80577;

	class LevelConfig_Split_MJINFKBOIIG
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_PBENMLJEEMM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex)->GetStaticField(0x487A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex)->GetStaticField(0x487A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex)->GetStaticField(0x487B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex)->GetStaticField(0x487B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelConfig_Split_MJINFKBOIIG_TypeDefinitionIndex)->GetStaticField(0x487C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Level::LevelConfig_Split*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::LevelConfig_Split*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Level::LevelConfig_Split*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig_Split*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SPLIT_MJINFKBOIIG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
