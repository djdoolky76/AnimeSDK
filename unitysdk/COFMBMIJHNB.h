#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGPNAOGHEP.h"
#include "unitysdk/System/Object.h"
class COFMBMIJHNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COFMBMIJHNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E131DC0)
#define COFMBMIJHNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E132120)
#define COFMBMIJHNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E131840)
#define COFMBMIJHNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E131790)
#define COFMBMIJHNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1316B0)
#define COFMBMIJHNB_EJIJCDNBFBH_OFFSET UNITYSDK_OFFSET(0x1E131890)
#define COFMBMIJHNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1318D0)
#define COFMBMIJHNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1318A0)
#define COFMBMIJHNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E131A40)
#define COFMBMIJHNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E131670)
#define COFMBMIJHNB_KBNAKMDEOGE_OFFSET UNITYSDK_OFFSET(0x1E131880)
#define COFMBMIJHNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E131FA0)
#define COFMBMIJHNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E131ED0)
#define COFMBMIJHNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1316A0)
#define COFMBMIJHNB_PNELHLHKDBD_OFFSET UNITYSDK_OFFSET(0x1E131870)
#define COFMBMIJHNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E131C50)
#define COFMBMIJHNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E131CB0)

inline static constexpr unsigned int COFMBMIJHNB_TypeDefinitionIndex = 33370;

	class COFMBMIJHNB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OCJEHOEIAOK; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>* FMAKDLICLJA; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KKFDOJGDHHH; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x21090);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FOICOGIOLOM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x21098);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OKFIACJDAJA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x210A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AAIJBEHIPHB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x210A8);
		}

		// static const ::System::Object OBAGKABDNMJ; // 0x0
		// static const ::System::Object GAHEDLPFBHP; // 0x0
		// static const ::System::Object BKBEJDJJLMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COFMBMIJHNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COFMBMIJHNB*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFMBMIJHNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + COFMBMIJHNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COFMBMIJHNB* Clone()
		{
			return ((::COFMBMIJHNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>* PNELHLHKDBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_PNELHLHKDBD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KBNAKMDEOGE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_KBNAKMDEOGE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJIJCDNBFBH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_EJIJCDNBFBH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COFMBMIJHNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COFMBMIJHNB*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMBMIJHNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COFMBMIJHNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COFMBMIJHNB*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COFMBMIJHNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
