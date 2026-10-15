#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELHDNEGGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OELHDNEGGBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE2E660)
#define OELHDNEGGBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2E8C0)
#define OELHDNEGGBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE2E260)
#define OELHDNEGGBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE2E1D0)
#define OELHDNEGGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2E180)
#define OELHDNEGGBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE2E390)
#define OELHDNEGGBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE2E2A0)
#define OELHDNEGGBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE2E480)
#define OELHDNEGGBB_IOEMIGKJOAG_OFFSET UNITYSDK_OFFSET(0x1DE2E290)
#define OELHDNEGGBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE2E140)
#define OELHDNEGGBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE2E720)
#define OELHDNEGGBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE2E6D0)
#define OELHDNEGGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE2E170)
#define OELHDNEGGBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE2E580)
#define OELHDNEGGBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE2E5E0)

	class OELHDNEGGBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NADMPFLLLME; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OELHDNEGGBB")->GetStaticField(0x15830);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AMENAKGFOPI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OELHDNEGGBB")->GetStaticField(0x15838);
		}

		// static const ::System::Object LCOBHLBDBMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OELHDNEGGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELHDNEGGBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OELHDNEGGBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OELHDNEGGBB* Clone()
		{
			return ((::OELHDNEGGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOEMIGKJOAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_IOEMIGKJOAG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OELHDNEGGBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OELHDNEGGBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OELHDNEGGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OELHDNEGGBB*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OELHDNEGGBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
