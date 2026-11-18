#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigCGCustomGlobalAnimation.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121BF970)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121BF980)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_WRITE_OFFSET UNITYSDK_OFFSET(0x121BFC90)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x121BFED0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD__CTOR_OFFSET UNITYSDK_OFFSET(0x121BFE90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceLights_AIBBAPAIKPD_TypeDefinitionIndex = 53897;

	class ConfigGachaPerformanceLights_AIBBAPAIKPD
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Color>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_AIBBAPAIKPD_TypeDefinitionIndex)->GetStaticField(0x387B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_AIBBAPAIKPD_TypeDefinitionIndex)->GetStaticField(0x387B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::MoleMole::Config::ConfigCGCustomGlobalAnimation>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceLights_AIBBAPAIKPD_TypeDefinitionIndex)->GetStaticField(0x387C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceLights*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceLights*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCELIGHTS_AIBBAPAIKPD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
