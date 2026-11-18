#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E6B160)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E6B170)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_WRITE_OFFSET UNITYSDK_OFFSET(0x11E6CD10)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E6DD00)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6DCC0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_KLPBHFGLPKB_TypeDefinitionIndex = 51781;

	class CharacterScriptConfig_KLPBHFGLPKB
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_KLPBHFGLPKB_TypeDefinitionIndex)->GetStaticField(0x485E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_KLPBHFGLPKB_TypeDefinitionIndex)->GetStaticField(0x485E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_KLPBHFGLPKB_TypeDefinitionIndex)->GetStaticField(0x485F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_KLPBHFGLPKB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
