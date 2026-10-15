#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBACEFIACOI;
class LMAKFCIHCMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBACEFIACOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50C080)
#define HBACEFIACOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50C380)
#define HBACEFIACOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50BC00)
#define HBACEFIACOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50BB50)
#define HBACEFIACOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50BB00)
#define HBACEFIACOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50BDE0)
#define HBACEFIACOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50BC60)
#define HBACEFIACOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50BF00)
#define HBACEFIACOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50BA90)
#define HBACEFIACOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50C1C0)
#define HBACEFIACOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50C120)
#define HBACEFIACOI_MKLEAPILMDJ_OFFSET UNITYSDK_OFFSET(0x1E50BC50)
#define HBACEFIACOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50BAF0)
#define HBACEFIACOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50BF70)
#define HBACEFIACOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50BFD0)

	class HBACEFIACOI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LMAKFCIHCMA*>* JJGPEMGKOJO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBACEFIACOI")->GetStaticField(0x2D690);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CKIPKJCLHOJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HBACEFIACOI")->GetStaticField(0x2D698);
		}

		// static const ::System::Object CBJHMABEANP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBACEFIACOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBACEFIACOI*))((::PBYTE)hIl2Cpp + HBACEFIACOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBACEFIACOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBACEFIACOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBACEFIACOI* Clone()
		{
			return ((::HBACEFIACOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LMAKFCIHCMA*>* MKLEAPILMDJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LMAKFCIHCMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_MKLEAPILMDJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBACEFIACOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBACEFIACOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBACEFIACOI*))((::PBYTE)hIl2Cpp + HBACEFIACOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBACEFIACOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBACEFIACOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBACEFIACOI*))((::PBYTE)hIl2Cpp + HBACEFIACOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBACEFIACOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
