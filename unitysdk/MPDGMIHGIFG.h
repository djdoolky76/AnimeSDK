#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHDNPMEKPCA;
class MPDGMIHGIFG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPDGMIHGIFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDF0BE0)
#define MPDGMIHGIFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF0EB0)
#define MPDGMIHGIFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDF0690)
#define MPDGMIHGIFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDF0620)
#define MPDGMIHGIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF0610)
#define MPDGMIHGIFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDF08D0)
#define MPDGMIHGIFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDF0750)
#define MPDGMIHGIFG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDF0740)
#define MPDGMIHGIFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDF0A50)
#define MPDGMIHGIFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDF05D0)
#define MPDGMIHGIFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDF0D20)
#define MPDGMIHGIFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDF0CB0)
#define MPDGMIHGIFG_NGOMLDBMEPF_OFFSET UNITYSDK_OFFSET(0x1FDF0720)
#define MPDGMIHGIFG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDF0730)
#define MPDGMIHGIFG_ONMBIFNELDB_OFFSET UNITYSDK_OFFSET(0x1FDF0710)
#define MPDGMIHGIFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDF0600)
#define MPDGMIHGIFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDF0AA0)
#define MPDGMIHGIFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDF0B00)

inline static constexpr unsigned int MPDGMIHGIFG_TypeDefinitionIndex = 32434;

	class MPDGMIHGIFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EHDNPMEKPCA* IPEHFPAIHKH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MPDGMIHGIFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPDGMIHGIFG*>**)UnitySDK::FromName("", "MPDGMIHGIFG")->GetStaticField(0x66090);
		}

		// static const ::System::Object FCDELJIKPMO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPDGMIHGIFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDGMIHGIFG*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDGMIHGIFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPDGMIHGIFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPDGMIHGIFG*>*(*)())((::PBYTE)hIl2Cpp + MPDGMIHGIFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPDGMIHGIFG* Clone()
		{
			return ((::MPDGMIHGIFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_CLONE_OFFSET))(this);
		}

		::EHDNPMEKPCA* ONMBIFNELDB()
		{
			return ((::EHDNPMEKPCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_ONMBIFNELDB_OFFSET))(this);
		}

		::System::Void NGOMLDBMEPF(::EHDNPMEKPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHDNPMEKPCA*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_NGOMLDBMEPF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPDGMIHGIFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPDGMIHGIFG*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPDGMIHGIFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDGMIHGIFG*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPDGMIHGIFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
