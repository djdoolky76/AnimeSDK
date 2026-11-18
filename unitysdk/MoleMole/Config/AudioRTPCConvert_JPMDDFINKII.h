#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AudioRTPCConvert; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }

#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAB5CB0)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAB5CC0)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_WRITE_OFFSET UNITYSDK_OFFSET(0xFAB5FD0)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAB6210)
#define MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB61D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_JPMDDFINKII_TypeDefinitionIndex = 86646;

	class AudioRTPCConvert_JPMDDFINKII
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AudioRTPCConvert_JPMDDFINKII_TypeDefinitionIndex)->GetStaticField(0x51690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AudioRTPCConvert*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AudioRTPCConvert*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AudioRTPCConvert*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AUDIORTPCCONVERT_JPMDDFINKII_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
