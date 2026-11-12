#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGJFECBCCL;
class NJGBAAOPAOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBGJFECBCCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA01100)
#define JBGJFECBCCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA01400)
#define JBGJFECBCCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA00C80)
#define JBGJFECBCCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA00BD0)
#define JBGJFECBCCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA00B80)
#define JBGJFECBCCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA00E60)
#define JBGJFECBCCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA00CE0)
#define JBGJFECBCCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA00F80)
#define JBGJFECBCCL_JFENPNKDNNO_OFFSET UNITYSDK_OFFSET(0x1FA00CD0)
#define JBGJFECBCCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA00B10)
#define JBGJFECBCCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA01240)
#define JBGJFECBCCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA011A0)
#define JBGJFECBCCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA00B70)
#define JBGJFECBCCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA00FF0)
#define JBGJFECBCCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA01050)

inline static constexpr unsigned int JBGJFECBCCL_TypeDefinitionIndex = 29786;

	class JBGJFECBCCL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NJGBAAOPAOI*>* DNEGCPEICDO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JBGJFECBCCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBGJFECBCCL*>**)UnitySDK::FromName("", "JBGJFECBCCL")->GetStaticField(0x5B7F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::NJGBAAOPAOI*>** StaticGet_EMGMHKKJPNC()
		{
			return (::Google::Protobuf::FieldCodec_1<::NJGBAAOPAOI*>**)UnitySDK::FromName("", "JBGJFECBCCL")->GetStaticField(0x5B7F8);
		}

		// static const ::System::Object JNJNDDPKJHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBGJFECBCCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGJFECBCCL*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGJFECBCCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBGJFECBCCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBGJFECBCCL*>*(*)())((::PBYTE)hIl2Cpp + JBGJFECBCCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBGJFECBCCL* Clone()
		{
			return ((::JBGJFECBCCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJGBAAOPAOI*>* JFENPNKDNNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJGBAAOPAOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_JFENPNKDNNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBGJFECBCCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBGJFECBCCL*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGJFECBCCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBGJFECBCCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBGJFECBCCL*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBGJFECBCCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
