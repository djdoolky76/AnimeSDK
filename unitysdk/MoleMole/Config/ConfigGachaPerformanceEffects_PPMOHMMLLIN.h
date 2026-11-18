#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131E3C30)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131E3C40)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_WRITE_OFFSET UNITYSDK_OFFSET(0x131E43D0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x131E4890)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN__CTOR_OFFSET UNITYSDK_OFFSET(0x131E4850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceEffects_PPMOHMMLLIN_TypeDefinitionIndex = 87505;

	class ConfigGachaPerformanceEffects_PPMOHMMLLIN
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_PPMOHMMLLIN_TypeDefinitionIndex)->GetStaticField(0x4C090);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceEffects_PPMOHMMLLIN_TypeDefinitionIndex)->GetStaticField(0x4C098);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGachaPerformanceEffects*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigGachaPerformanceEffects*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEEFFECTS_PPMOHMMLLIN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
