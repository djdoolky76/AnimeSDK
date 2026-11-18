#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigLevelSound; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1654A440)
#define MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1654A450)
#define MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1654A6A0)
#define MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1654A880)
#define MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1654A840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelSound_HMOIPGJPGAM_TypeDefinitionIndex = 84183;

	class ConfigLevelSound_HMOIPGJPGAM
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelSound_HMOIPGJPGAM_TypeDefinitionIndex)->GetStaticField(0x3E9D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigLevelSound_HMOIPGJPGAM_TypeDefinitionIndex)->GetStaticField(0x3E9D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigLevelSound*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigLevelSound*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigLevelSound*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelSound*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_HMOIPGJPGAM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
