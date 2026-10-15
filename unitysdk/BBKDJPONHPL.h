#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBKDJPONHPL;
class IFBJJJOBGHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBKDJPONHPL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C7CF0)
#define BBKDJPONHPL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8090)
#define BBKDJPONHPL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C7840)
#define BBKDJPONHPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C77B0)
#define BBKDJPONHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7770)
#define BBKDJPONHPL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C79F0)
#define BBKDJPONHPL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C78A0)
#define BBKDJPONHPL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7C7890)
#define BBKDJPONHPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C7B10)
#define BBKDJPONHPL_HDICINCOPLD_OFFSET UNITYSDK_OFFSET(0x1E7C7870)
#define BBKDJPONHPL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C7730)
#define BBKDJPONHPL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C7EC0)
#define BBKDJPONHPL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C7E20)
#define BBKDJPONHPL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7C7880)
#define BBKDJPONHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7760)
#define BBKDJPONHPL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C7B80)
#define BBKDJPONHPL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C7BE0)

	class BBKDJPONHPL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IFBJJJOBGHB*>* GLOEEOIPHOG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_HLOPLNNNHEO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BBKDJPONHPL")->GetStaticField(0x47ED0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BBKDJPONHPL")->GetStaticField(0x47ED8);
		}

		// static const ::System::Object EIKJGIMGEKB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBKDJPONHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBKDJPONHPL*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKDJPONHPL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BBKDJPONHPL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBKDJPONHPL* Clone()
		{
			return ((::BBKDJPONHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFBJJJOBGHB*>* HDICINCOPLD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFBJJJOBGHB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_HDICINCOPLD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBKDJPONHPL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBKDJPONHPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBKDJPONHPL*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKDJPONHPL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBKDJPONHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBKDJPONHPL*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBKDJPONHPL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
