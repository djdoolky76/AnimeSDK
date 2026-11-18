#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x164290A0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x164290B0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_WRITE_OFFSET UNITYSDK_OFFSET(0x16429460)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x164296F0)
#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x164296B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_BKOOCKPBNIM_TypeDefinitionIndex = 40524;

	class LevelShootGameConfig_BKOOCKPBNIM
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_BKOOCKPBNIM_TypeDefinitionIndex)->GetStaticField(0x44B10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_BKOOCKPBNIM_TypeDefinitionIndex)->GetStaticField(0x44B18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_BKOOCKPBNIM_TypeDefinitionIndex)->GetStaticField(0x44B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(LevelShootGameConfig_BKOOCKPBNIM_TypeDefinitionIndex)->GetStaticField(0x44B28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::LevelShootGameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::LevelShootGameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelShootGameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_BKOOCKPBNIM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
