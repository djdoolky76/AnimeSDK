#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEHOGIENDKC;
class LAJDMCJIBOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAJDMCJIBOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC0A7D0)
#define LAJDMCJIBOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0AAD0)
#define LAJDMCJIBOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC0A3B0)
#define LAJDMCJIBOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC0A300)
#define LAJDMCJIBOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0A2B0)
#define LAJDMCJIBOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC0A530)
#define LAJDMCJIBOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC0A3F0)
#define LAJDMCJIBOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC0A650)
#define LAJDMCJIBOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC0A270)
#define LAJDMCJIBOP_LNOAKMCOBFO_OFFSET UNITYSDK_OFFSET(0x1FC0A3E0)
#define LAJDMCJIBOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC0A910)
#define LAJDMCJIBOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC0A870)
#define LAJDMCJIBOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC0A2A0)
#define LAJDMCJIBOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC0A6C0)
#define LAJDMCJIBOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC0A720)

inline static constexpr unsigned int LAJDMCJIBOP_TypeDefinitionIndex = 33128;

	class LAJDMCJIBOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>* JCBHLCMNAPO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::KEHOGIENDKC*>** StaticGet_JEOPIHDPNOC()
		{
			return (::Google::Protobuf::FieldCodec_1<::KEHOGIENDKC*>**)UnitySDK::FromName("", "LAJDMCJIBOP")->GetStaticField(0x25E80);
		}

		static ::Google::Protobuf::MessageParser_1<::LAJDMCJIBOP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAJDMCJIBOP*>**)UnitySDK::FromName("", "LAJDMCJIBOP")->GetStaticField(0x25E88);
		}

		// static const ::System::Object BMCFBKDGLNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAJDMCJIBOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJDMCJIBOP*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAJDMCJIBOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAJDMCJIBOP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAJDMCJIBOP*>*(*)())((::PBYTE)hIl2Cpp + LAJDMCJIBOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAJDMCJIBOP* Clone()
		{
			return ((::LAJDMCJIBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>* LNOAKMCOBFO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KEHOGIENDKC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_LNOAKMCOBFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAJDMCJIBOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJDMCJIBOP*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAJDMCJIBOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJDMCJIBOP*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAJDMCJIBOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
