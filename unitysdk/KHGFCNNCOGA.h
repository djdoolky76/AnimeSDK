#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHGFCNNCOGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHGFCNNCOGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E844100)
#define KHGFCNNCOGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E844450)
#define KHGFCNNCOGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E843C00)
#define KHGFCNNCOGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E843B70)
#define KHGFCNNCOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E843B20)
#define KHGFCNNCOGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E843DB0)
#define KHGFCNNCOGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E843C80)
#define KHGFCNNCOGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E843EA0)
#define KHGFCNNCOGA_IBEHIFNEKKP_OFFSET UNITYSDK_OFFSET(0x1E843C50)
#define KHGFCNNCOGA_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E843C70)
#define KHGFCNNCOGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E843AB0)
#define KHGFCNNCOGA_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E843C60)
#define KHGFCNNCOGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E844280)
#define KHGFCNNCOGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E844230)
#define KHGFCNNCOGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E843B10)
#define KHGFCNNCOGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E843FA0)
#define KHGFCNNCOGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E844000)

inline static constexpr unsigned int KHGFCNNCOGA_TypeDefinitionIndex = 27180;

	class KHGFCNNCOGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLBJJNGOIDA; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KFNNGCEBINO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KHGFCNNCOGA")->GetStaticField(0x17410);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHGFCNNCOGA")->GetStaticField(0x17418);
		}

		// static const ::System::Object GGPJMDJHGOK; // 0x0
		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHGFCNNCOGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHGFCNNCOGA*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGFCNNCOGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHGFCNNCOGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHGFCNNCOGA* Clone()
		{
			return ((::KHGFCNNCOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IBEHIFNEKKP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_IBEHIFNEKKP_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHGFCNNCOGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHGFCNNCOGA*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHGFCNNCOGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHGFCNNCOGA*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHGFCNNCOGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
