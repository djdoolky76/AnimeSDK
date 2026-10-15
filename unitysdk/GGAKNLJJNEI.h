#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGAKNLJJNEI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGAKNLJJNEI_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E4766B0)
#define GGAKNLJJNEI_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E476710)
#define GGAKNLJJNEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E476C00)
#define GGAKNLJJNEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E476F80)
#define GGAKNLJJNEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E476660)
#define GGAKNLJJNEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4765C0)
#define GGAKNLJJNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E476570)
#define GGAKNLJJNEI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E4766D0)
#define GGAKNLJJNEI_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E4766C0)
#define GGAKNLJJNEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4767D0)
#define GGAKNLJJNEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E476720)
#define GGAKNLJJNEI_FJPGINAECGD_OFFSET UNITYSDK_OFFSET(0x1E4766F0)
#define GGAKNLJJNEI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E4766E0)
#define GGAKNLJJNEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4768E0)
#define GGAKNLJJNEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E476500)
#define GGAKNLJJNEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E476E60)
#define GGAKNLJJNEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E476E00)
#define GGAKNLJJNEI_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E476700)
#define GGAKNLJJNEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E476560)
#define GGAKNLJJNEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4769E0)
#define GGAKNLJJNEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E476A40)

	class GGAKNLJJNEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AHDDICLFLFB; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x20
		::System::UInt32 KLINKNMHOCI; // 0x24
		::System::UInt32 GEMFJILOPLL; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GGAKNLJJNEI")->GetStaticField(0x15430);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NANHKNECMEF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GGAKNLJJNEI")->GetStaticField(0x15438);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object LIOCIDAKJOJ; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGAKNLJJNEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GGAKNLJJNEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGAKNLJJNEI* Clone()
		{
			return ((::GGAKNLJJNEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FJPGINAECGD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_FJPGINAECGD_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGAKNLJJNEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGAKNLJJNEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGAKNLJJNEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
