#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUISound; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B949F50)
#define MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B949F60)
#define MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_WRITE_OFFSET UNITYSDK_OFFSET(0x1B94A1C0)
#define MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B94A3A0)
#define MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94A360)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_CKPAILFGCGK_TypeDefinitionIndex = 91077;

	class ConfigUISound_CKPAILFGCGK
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISound_CKPAILFGCGK_TypeDefinitionIndex)->GetStaticField(0x4D7D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUISound*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUISound*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUISound*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CKPAILFGCGK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
