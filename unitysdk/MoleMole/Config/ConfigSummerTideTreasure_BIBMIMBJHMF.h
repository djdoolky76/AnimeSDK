#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8A98E0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8A98F0)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8A9B40)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9D20)
#define MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9CE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSummerTideTreasure_BIBMIMBJHMF_TypeDefinitionIndex = 64216;

	class ConfigSummerTideTreasure_BIBMIMBJHMF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSummerTideTreasure_BIBMIMBJHMF_TypeDefinitionIndex)->GetStaticField(0x38860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSummerTideTreasure*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSummerTideTreasure*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSummerTideTreasure*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSummerTideTreasure*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSUMMERTIDETREASURE_BIBMIMBJHMF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
