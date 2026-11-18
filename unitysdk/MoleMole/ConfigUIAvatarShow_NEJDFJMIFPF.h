#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIAvatarShow; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190C48B0)
#define MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190C48C0)
#define MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_WRITE_OFFSET UNITYSDK_OFFSET(0x190C4FB0)
#define MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x190C5410)
#define MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF__CTOR_OFFSET UNITYSDK_OFFSET(0x190C53D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShow_NEJDFJMIFPF_TypeDefinitionIndex = 74073;

	class ConfigUIAvatarShow_NEJDFJMIFPF
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAvatarShow_NEJDFJMIFPF_TypeDefinitionIndex)->GetStaticField(0x41AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIAvatarShow*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUIAvatarShow*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOW_NEJDFJMIFPF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
