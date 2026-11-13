#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class DOAGEJLCHJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOAGEJLCHJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201EC8B0)
#define DOAGEJLCHJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x201ECB90)
#define DOAGEJLCHJE_CLONE_OFFSET UNITYSDK_OFFSET(0x201EC490)
#define DOAGEJLCHJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201EC400)
#define DOAGEJLCHJE_CTOR_OFFSET UNITYSDK_OFFSET(0x201EC3C0)
#define DOAGEJLCHJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201EC610)
#define DOAGEJLCHJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x201EC4D0)
#define DOAGEJLCHJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201EC730)
#define DOAGEJLCHJE_GFJDMEPNGFB_OFFSET UNITYSDK_OFFSET(0x201EC4C0)
#define DOAGEJLCHJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201EC380)
#define DOAGEJLCHJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201EC9F0)
#define DOAGEJLCHJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201EC950)
#define DOAGEJLCHJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201EC3B0)
#define DOAGEJLCHJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201EC7A0)
#define DOAGEJLCHJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x201EC800)

inline static constexpr unsigned int DOAGEJLCHJE_TypeDefinitionIndex = 30908;

	class DOAGEJLCHJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BPLDOOODONJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_LANJFHKLDDA()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "DOAGEJLCHJE")->GetStaticField(0x37390);
		}

		static ::Google::Protobuf::MessageParser_1<::DOAGEJLCHJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOAGEJLCHJE*>**)UnitySDK::FromName("", "DOAGEJLCHJE")->GetStaticField(0x37398);
		}

		// static const ::System::Object CEKIBAHNILO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOAGEJLCHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOAGEJLCHJE*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOAGEJLCHJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOAGEJLCHJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOAGEJLCHJE*>*(*)())((::PBYTE)hIl2Cpp + DOAGEJLCHJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOAGEJLCHJE* Clone()
		{
			return ((::DOAGEJLCHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GFJDMEPNGFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_GFJDMEPNGFB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOAGEJLCHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOAGEJLCHJE*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOAGEJLCHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOAGEJLCHJE*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOAGEJLCHJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
