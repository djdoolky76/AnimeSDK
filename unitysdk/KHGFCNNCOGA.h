#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHGFCNNCOGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHGFCNNCOGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E816B50)
#define KHGFCNNCOGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E816EA0)
#define KHGFCNNCOGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E816650)
#define KHGFCNNCOGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8165C0)
#define KHGFCNNCOGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E816570)
#define KHGFCNNCOGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E816800)
#define KHGFCNNCOGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8166D0)
#define KHGFCNNCOGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8168F0)
#define KHGFCNNCOGA_IBEHIFNEKKP_OFFSET UNITYSDK_OFFSET(0x1E8166A0)
#define KHGFCNNCOGA_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E8166C0)
#define KHGFCNNCOGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E816500)
#define KHGFCNNCOGA_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E8166B0)
#define KHGFCNNCOGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E816CD0)
#define KHGFCNNCOGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E816C80)
#define KHGFCNNCOGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E816560)
#define KHGFCNNCOGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8169F0)
#define KHGFCNNCOGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E816A50)

inline static constexpr unsigned int KHGFCNNCOGA_TypeDefinitionIndex = 27180;

	class KHGFCNNCOGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLBJJNGOIDA; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KFNNGCEBINO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KHGFCNNCOGA")->GetStaticField(0x160C0);
		}

		static ::Google::Protobuf::MessageParser_1<::KHGFCNNCOGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHGFCNNCOGA*>**)UnitySDK::FromName("", "KHGFCNNCOGA")->GetStaticField(0x160C8);
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

		static ::Google::Protobuf::MessageParser_1<::KHGFCNNCOGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHGFCNNCOGA*>*(*)())((::PBYTE)hIl2Cpp + KHGFCNNCOGA_JJGHOBBFNJD_OFFSET))();
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
