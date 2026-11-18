#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E90AC0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E90AD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_WRITE_OFFSET UNITYSDK_OFFSET(0x11E923D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E93250)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM__CTOR_OFFSET UNITYSDK_OFFSET(0x11E93210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex = 46351;

	class ConfigHollowChessboard_FALPFDEOJLM
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_ALDIEKOJGNK()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48630);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_BDMFIKFPPFM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48638);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>*>** StaticGet_DDJMNDCKKDE()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48640);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::Object*>*>** StaticGet_MNDKDFOKLIC()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48648);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48650);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_JNGLFPAKMCI()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48658);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Object*>** StaticGet_PBENMLJEEMM()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48660);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>** StaticGet_KLINPPBJPEI()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::Object*>*>*>** StaticGet_AGLBFLNEIDG()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessPieceSizeType, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48670);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>** StaticGet_ANBBDJHGEBF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_FALPFDEOJLM_TypeDefinitionIndex)->GetStaticField(0x48678);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_FALPFDEOJLM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
