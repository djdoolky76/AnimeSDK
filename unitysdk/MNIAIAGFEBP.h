#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNIAIAGFEBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNIAIAGFEBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6C9A0)
#define MNIAIAGFEBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CC10)
#define MNIAIAGFEBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6C3D0)
#define MNIAIAGFEBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6C2E0)
#define MNIAIAGFEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C250)
#define MNIAIAGFEBP_EKFOBGFBHGP_OFFSET UNITYSDK_OFFSET(0x1EA6C420)
#define MNIAIAGFEBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6C590)
#define MNIAIAGFEBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6C440)
#define MNIAIAGFEBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6C6A0)
#define MNIAIAGFEBP_IEMKLKCJCEK_OFFSET UNITYSDK_OFFSET(0x1EA6C430)
#define MNIAIAGFEBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6C1E0)
#define MNIAIAGFEBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6CAD0)
#define MNIAIAGFEBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6CA70)
#define MNIAIAGFEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C240)
#define MNIAIAGFEBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6C860)
#define MNIAIAGFEBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6C8C0)

inline static constexpr unsigned int MNIAIAGFEBP_TypeDefinitionIndex = 25070;

	class MNIAIAGFEBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGONJHMIAAL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDDPICFEDDB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MNIAIAGFEBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNIAIAGFEBP*>**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59660);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EIAHOCECCNK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59668);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HAIKNOLDMMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59670);
		}

		// static const ::System::Object CJCIBNGNGNC; // 0x0
		// static const ::System::Object CHOCGECCOAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNIAIAGFEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNIAIAGFEBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNIAIAGFEBP*>*(*)())((::PBYTE)hIl2Cpp + MNIAIAGFEBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNIAIAGFEBP* Clone()
		{
			return ((::MNIAIAGFEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKFOBGFBHGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EKFOBGFBHGP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEMKLKCJCEK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_IEMKLKCJCEK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNIAIAGFEBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNIAIAGFEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
