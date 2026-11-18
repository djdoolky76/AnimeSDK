#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_UIPage; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8C4D60)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8C4D70)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8C5700)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8C5CE0)
#define MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C5CA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_UIPage_JOJKLIBPLID_TypeDefinitionIndex = 74893;

	class ConfigUICommon_UIPage_JOJKLIBPLID
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_LGAEHPEFDAF()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_UIPage_JOJKLIBPLID_TypeDefinitionIndex)->GetStaticField(0x388A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_UIPage*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_UIPage*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_UIPage*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_UIPAGE_JOJKLIBPLID_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
