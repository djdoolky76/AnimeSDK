#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x165501A0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x165501B0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_WRITE_OFFSET UNITYSDK_OFFSET(0x16550340)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x165504A0)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16550460)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_BFMCMGPFAAP_TypeDefinitionIndex = 54378;

	class ConfigUICoopTeam3D_BFMCMGPFAAP
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_BFMCMGPFAAP_TypeDefinitionIndex)->GetStaticField(0x3E9E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICoopTeam3D_BFMCMGPFAAP_TypeDefinitionIndex)->GetStaticField(0x3E9E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICoopTeam3D*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICoopTeam3D*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_BFMCMGPFAAP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
