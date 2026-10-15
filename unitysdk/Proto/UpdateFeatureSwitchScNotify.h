#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDOKNMGIDMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class UpdateFeatureSwitchScNotify; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFEE2F0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE5F0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFEDED0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFEDE40)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEDE00)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFEE050)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFEDF10)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFEE170)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFEDDC0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_SWITCHINFOLIST_OFFSET UNITYSDK_OFFSET(0x1DFEDF00)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFEE430)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFEE390)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFEDDF0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFEE1E0)
#define PROTO_UPDATEFEATURESWITCHSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFEE240)

namespace Proto
{
	inline static constexpr unsigned int UpdateFeatureSwitchScNotify_TypeDefinitionIndex = 32096;

	class UpdateFeatureSwitchScNotify : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HDOKNMGIDMB*>* switchInfoList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>**)UnitySDK::FromName("Proto", "UpdateFeatureSwitchScNotify")->GetStaticField(0x4F1A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::HDOKNMGIDMB*>** StaticGet__repeated_switchInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::HDOKNMGIDMB*>**)UnitySDK::FromName("Proto", "UpdateFeatureSwitchScNotify")->GetStaticField(0x4F1A8);
		}

		// static const ::System::Object SwitchInfoListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UpdateFeatureSwitchScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::UpdateFeatureSwitchScNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UpdateFeatureSwitchScNotify* Clone()
		{
			return ((::Proto::UpdateFeatureSwitchScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HDOKNMGIDMB*>* get_SwitchInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HDOKNMGIDMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GET_SWITCHINFOLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::UpdateFeatureSwitchScNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UpdateFeatureSwitchScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UpdateFeatureSwitchScNotify*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UPDATEFEATURESWITCHSCNOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
