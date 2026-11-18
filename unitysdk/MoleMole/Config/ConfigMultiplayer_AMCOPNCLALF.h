#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121C8B10)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121C8B20)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_WRITE_OFFSET UNITYSDK_OFFSET(0x121C8EE0)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF__CCTOR_OFFSET UNITYSDK_OFFSET(0x121C9180)
#define MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF__CTOR_OFFSET UNITYSDK_OFFSET(0x121C9140)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMultiplayer_AMCOPNCLALF_TypeDefinitionIndex = 72560;

	class ConfigMultiplayer_AMCOPNCLALF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigMultiplayer_AMCOPNCLALF_TypeDefinitionIndex)->GetStaticField(0x387D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMultiplayer*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMultiplayer*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMULTIPLAYER_AMCOPNCLALF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
