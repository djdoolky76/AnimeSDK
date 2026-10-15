#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMKKEKMHNC;
class KMLOMKCMGHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCMKKEKMHNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7046C0)
#define JCMKKEKMHNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7049C0)
#define JCMKKEKMHNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E704240)
#define JCMKKEKMHNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E704190)
#define JCMKKEKMHNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E704140)
#define JCMKKEKMHNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E704420)
#define JCMKKEKMHNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7042A0)
#define JCMKKEKMHNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E704540)
#define JCMKKEKMHNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7040D0)
#define JCMKKEKMHNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E704800)
#define JCMKKEKMHNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E704760)
#define JCMKKEKMHNC_NKNMNBPJDEM_OFFSET UNITYSDK_OFFSET(0x1E704290)
#define JCMKKEKMHNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E704130)
#define JCMKKEKMHNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7045B0)
#define JCMKKEKMHNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E704610)

	class JCMKKEKMHNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KMLOMKCMGHD*>* AGFPEFFPCOJ; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_BJNDEKBBPGK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JCMKKEKMHNC")->GetStaticField(0x5D940);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JCMKKEKMHNC")->GetStaticField(0x5D948);
		}

		// static const ::System::Object ILBENGAAGFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCMKKEKMHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCMKKEKMHNC*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCMKKEKMHNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JCMKKEKMHNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCMKKEKMHNC* Clone()
		{
			return ((::JCMKKEKMHNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KMLOMKCMGHD*>* NKNMNBPJDEM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KMLOMKCMGHD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_NKNMNBPJDEM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCMKKEKMHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCMKKEKMHNC*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCMKKEKMHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCMKKEKMHNC*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCMKKEKMHNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
