#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGPNAOGHEP.h"
#include "unitysdk/System/Object.h"
class COFMBMIJHNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COFMBMIJHNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E104820)
#define COFMBMIJHNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E104B80)
#define COFMBMIJHNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1042A0)
#define COFMBMIJHNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1041F0)
#define COFMBMIJHNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E104110)
#define COFMBMIJHNB_EJIJCDNBFBH_OFFSET UNITYSDK_OFFSET(0x1E1042F0)
#define COFMBMIJHNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E104330)
#define COFMBMIJHNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E104300)
#define COFMBMIJHNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1044A0)
#define COFMBMIJHNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1040D0)
#define COFMBMIJHNB_KBNAKMDEOGE_OFFSET UNITYSDK_OFFSET(0x1E1042E0)
#define COFMBMIJHNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E104A00)
#define COFMBMIJHNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E104930)
#define COFMBMIJHNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E104100)
#define COFMBMIJHNB_PNELHLHKDBD_OFFSET UNITYSDK_OFFSET(0x1E1042D0)
#define COFMBMIJHNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1046B0)
#define COFMBMIJHNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E104710)

inline static constexpr unsigned int COFMBMIJHNB_TypeDefinitionIndex = 33370;

	class COFMBMIJHNB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KKFDOJGDHHH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OCJEHOEIAOK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MIGPNAOGHEP>* FMAKDLICLJA; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::MIGPNAOGHEP>** StaticGet_AAIJBEHIPHB()
		{
			return (::Google::Protobuf::FieldCodec_1<::MIGPNAOGHEP>**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x1DD60);
		}

		static ::Google::Protobuf::MessageParser_1<::COFMBMIJHNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COFMBMIJHNB*>**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x1DD68);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOICOGIOLOM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x1DD70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKFIACJDAJA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "COFMBMIJHNB")->GetStaticField(0x1DD78);
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

		static ::Google::Protobuf::MessageParser_1<::COFMBMIJHNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COFMBMIJHNB*>*(*)())((::PBYTE)hIl2Cpp + COFMBMIJHNB_JJGHOBBFNJD_OFFSET))();
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
