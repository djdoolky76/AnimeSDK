#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFBPMGGFCEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFBPMGGFCEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E939F90)
#define LFBPMGGFCEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93A250)
#define LFBPMGGFCEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E939B10)
#define LFBPMGGFCEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E939A80)
#define LFBPMGGFCEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E939A30)
#define LFBPMGGFCEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E939C90)
#define LFBPMGGFCEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E939B70)
#define LFBPMGGFCEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E939D80)
#define LFBPMGGFCEO_HHJIHJIGJBN_OFFSET UNITYSDK_OFFSET(0x1E939B60)
#define LFBPMGGFCEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9399C0)
#define LFBPMGGFCEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93A080)
#define LFBPMGGFCEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93A030)
#define LFBPMGGFCEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E939A20)
#define LFBPMGGFCEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E939E80)
#define LFBPMGGFCEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E939EE0)

inline static constexpr unsigned int LFBPMGGFCEO_TypeDefinitionIndex = 33356;

	class LFBPMGGFCEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IJPMDLBCFMP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LFBPMGGFCEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFBPMGGFCEO*>**)UnitySDK::FromName("", "LFBPMGGFCEO")->GetStaticField(0x3A300);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CNBJIBNGDOB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LFBPMGGFCEO")->GetStaticField(0x3A308);
		}

		// static const ::System::Object GFGELHAGJDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFBPMGGFCEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFBPMGGFCEO*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFBPMGGFCEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFBPMGGFCEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFBPMGGFCEO*>*(*)())((::PBYTE)hIl2Cpp + LFBPMGGFCEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFBPMGGFCEO* Clone()
		{
			return ((::LFBPMGGFCEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHJIHJIGJBN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_HHJIHJIGJBN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFBPMGGFCEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFBPMGGFCEO*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFBPMGGFCEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFBPMGGFCEO*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFBPMGGFCEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
