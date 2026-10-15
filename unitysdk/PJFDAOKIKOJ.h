#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
class PJFDAOKIKOJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJFDAOKIKOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF76720)
#define PJFDAOKIKOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF76A20)
#define PJFDAOKIKOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF762A0)
#define PJFDAOKIKOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF761F0)
#define PJFDAOKIKOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF761A0)
#define PJFDAOKIKOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF76480)
#define PJFDAOKIKOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF76300)
#define PJFDAOKIKOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF765A0)
#define PJFDAOKIKOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF76130)
#define PJFDAOKIKOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF76860)
#define PJFDAOKIKOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF767C0)
#define PJFDAOKIKOJ_MFOADEHHBHD_OFFSET UNITYSDK_OFFSET(0x1DF762F0)
#define PJFDAOKIKOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF76190)
#define PJFDAOKIKOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF76610)
#define PJFDAOKIKOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF76670)

	class PJFDAOKIKOJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>* JOGCKGNKPKA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJFDAOKIKOJ")->GetStaticField(0x45FC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FGOFMIEOJIB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PJFDAOKIKOJ")->GetStaticField(0x45FC8);
		}

		// static const ::System::Object ABCOAKOMPHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJFDAOKIKOJ* Clone()
		{
			return ((::PJFDAOKIKOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>* MFOADEHHBHD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MFOADEHHBHD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
