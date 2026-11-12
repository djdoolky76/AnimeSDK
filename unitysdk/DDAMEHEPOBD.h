#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAMEHEPOBD;
class MBPDIPLJMKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDAMEHEPOBD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1F4527A0)
#define DDAMEHEPOBD_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1F452820)
#define DDAMEHEPOBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F452C30)
#define DDAMEHEPOBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4530A0)
#define DDAMEHEPOBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F452750)
#define DDAMEHEPOBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F452680)
#define DDAMEHEPOBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F452630)
#define DDAMEHEPOBD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1F4527B0)
#define DDAMEHEPOBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F452890)
#define DDAMEHEPOBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F452830)
#define DDAMEHEPOBD_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1F4527F0)
#define DDAMEHEPOBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F452930)
#define DDAMEHEPOBD_GLDKEOMJEBI_OFFSET UNITYSDK_OFFSET(0x1F452800)
#define DDAMEHEPOBD_HLEOFMBAIKL_OFFSET UNITYSDK_OFFSET(0x1F4527D0)
#define DDAMEHEPOBD_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1F4527E0)
#define DDAMEHEPOBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4525C0)
#define DDAMEHEPOBD_JPAPEJBMCON_OFFSET UNITYSDK_OFFSET(0x1F4527C0)
#define DDAMEHEPOBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F452F90)
#define DDAMEHEPOBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F452EC0)
#define DDAMEHEPOBD_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1F452810)
#define DDAMEHEPOBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F452620)
#define DDAMEHEPOBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4529B0)
#define DDAMEHEPOBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F452A10)

inline static constexpr unsigned int DDAMEHEPOBD_TypeDefinitionIndex = 29740;

	class DDAMEHEPOBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MBPDIPLJMKN*>* EJGPLBIGAJK; // 0x18
		::System::UInt32 KLINKNMHOCI; // 0x20
		::System::UInt32 HDAIPLJBGAB; // 0x24
		::System::UInt32 NPFBAFODCBI; // 0x28
		::System::UInt32 BIBJLJPBEGM; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::DDAMEHEPOBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDAMEHEPOBD*>**)UnitySDK::FromName("", "DDAMEHEPOBD")->GetStaticField(0x27190);
		}

		static ::Google::Protobuf::FieldCodec_1<::MBPDIPLJMKN*>** StaticGet_MEKNLBBHAND()
		{
			return (::Google::Protobuf::FieldCodec_1<::MBPDIPLJMKN*>**)UnitySDK::FromName("", "DDAMEHEPOBD")->GetStaticField(0x27198);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object MEEPAJDICIE; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object BAAJCNPLNLK; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAMEHEPOBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDAMEHEPOBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDAMEHEPOBD*>*(*)())((::PBYTE)hIl2Cpp + DDAMEHEPOBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDAMEHEPOBD* Clone()
		{
			return ((::DDAMEHEPOBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 JPAPEJBMCON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_JPAPEJBMCON_OFFSET))(this);
		}

		::System::Void HLEOFMBAIKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_HLEOFMBAIKL_OFFSET))(this, a1);
		}

		::System::UInt32 IOIFPHAMFDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MBPDIPLJMKN*>* GLDKEOMJEBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MBPDIPLJMKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_GLDKEOMJEBI_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDAMEHEPOBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDAMEHEPOBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
