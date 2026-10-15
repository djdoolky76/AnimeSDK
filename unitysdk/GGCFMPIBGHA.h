#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
class GGCFMPIBGHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGCFMPIBGHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E479080)
#define GGCFMPIBGHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E479360)
#define GGCFMPIBGHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E478C60)
#define GGCFMPIBGHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E478BD0)
#define GGCFMPIBGHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E478B90)
#define GGCFMPIBGHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E478DE0)
#define GGCFMPIBGHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E478CA0)
#define GGCFMPIBGHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E478F00)
#define GGCFMPIBGHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E478B50)
#define GGCFMPIBGHA_LKJABHDNGDI_OFFSET UNITYSDK_OFFSET(0x1E478C90)
#define GGCFMPIBGHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4791C0)
#define GGCFMPIBGHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E479120)
#define GGCFMPIBGHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E478B80)
#define GGCFMPIBGHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E478F70)
#define GGCFMPIBGHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E478FD0)

	class GGCFMPIBGHA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* ONHHGGFNDDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_FNGJDLMNOHJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GGCFMPIBGHA")->GetStaticField(0x15970);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GGCFMPIBGHA")->GetStaticField(0x15978);
		}

		// static const ::System::Object MHALDDACAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGCFMPIBGHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGCFMPIBGHA*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCFMPIBGHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GGCFMPIBGHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGCFMPIBGHA* Clone()
		{
			return ((::GGCFMPIBGHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>* LKJABHDNGDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AKMCODLAEKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_LKJABHDNGDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGCFMPIBGHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGCFMPIBGHA*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGCFMPIBGHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGCFMPIBGHA*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGCFMPIBGHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
