#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKEGMEPLDI;
class HKHKEMHCHEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJKEGMEPLDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A5830)
#define FJKEGMEPLDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5B30)
#define FJKEGMEPLDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A5410)
#define FJKEGMEPLDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A5360)
#define FJKEGMEPLDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5310)
#define FJKEGMEPLDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A5590)
#define FJKEGMEPLDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A5450)
#define FJKEGMEPLDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A56B0)
#define FJKEGMEPLDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A52D0)
#define FJKEGMEPLDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A5970)
#define FJKEGMEPLDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A58D0)
#define FJKEGMEPLDI_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1E3A5440)
#define FJKEGMEPLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A5300)
#define FJKEGMEPLDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A5720)
#define FJKEGMEPLDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A5780)

	class FJKEGMEPLDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>* NNFMIDOBAGL; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FJKEGMEPLDI")->GetStaticField(0x60C90);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FJKEGMEPLDI")->GetStaticField(0x60C98);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJKEGMEPLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FJKEGMEPLDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJKEGMEPLDI* Clone()
		{
			return ((::FJKEGMEPLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJKEGMEPLDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJKEGMEPLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
