#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCHCPKMFNNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCHCPKMFNNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E143BA0)
#define DCHCPKMFNNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E143E60)
#define DCHCPKMFNNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E143720)
#define DCHCPKMFNNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E143690)
#define DCHCPKMFNNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E143640)
#define DCHCPKMFNNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1438A0)
#define DCHCPKMFNNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E143780)
#define DCHCPKMFNNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E143990)
#define DCHCPKMFNNC_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E143770)
#define DCHCPKMFNNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1435D0)
#define DCHCPKMFNNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E143C90)
#define DCHCPKMFNNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E143C40)
#define DCHCPKMFNNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E143630)
#define DCHCPKMFNNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E143A90)
#define DCHCPKMFNNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E143AF0)

inline static constexpr unsigned int DCHCPKMFNNC_TypeDefinitionIndex = 25218;

	class DCHCPKMFNNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DCHCPKMFNNC")->GetStaticField(0x24D70);
		}

		static ::Google::Protobuf::MessageParser_1<::DCHCPKMFNNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCHCPKMFNNC*>**)UnitySDK::FromName("", "DCHCPKMFNNC")->GetStaticField(0x24D78);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCHCPKMFNNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCHCPKMFNNC*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCHCPKMFNNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCHCPKMFNNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCHCPKMFNNC*>*(*)())((::PBYTE)hIl2Cpp + DCHCPKMFNNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCHCPKMFNNC* Clone()
		{
			return ((::DCHCPKMFNNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCHCPKMFNNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHCPKMFNNC*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCHCPKMFNNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCHCPKMFNNC*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCHCPKMFNNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
