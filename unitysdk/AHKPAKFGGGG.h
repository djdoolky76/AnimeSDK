#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKPAKFGGGG;
class GMCPCKHHPOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHKPAKFGGGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E273E20)
#define AHKPAKFGGGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E274120)
#define AHKPAKFGGGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E273A00)
#define AHKPAKFGGGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E273950)
#define AHKPAKFGGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E273900)
#define AHKPAKFGGGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E273B80)
#define AHKPAKFGGGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E273A40)
#define AHKPAKFGGGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E273CA0)
#define AHKPAKFGGGG_JCCJEAFCJNN_OFFSET UNITYSDK_OFFSET(0x1E273A30)
#define AHKPAKFGGGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2738C0)
#define AHKPAKFGGGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E273F60)
#define AHKPAKFGGGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E273EC0)
#define AHKPAKFGGGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2738F0)
#define AHKPAKFGGGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E273D10)
#define AHKPAKFGGGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E273D70)

inline static constexpr unsigned int AHKPAKFGGGG_TypeDefinitionIndex = 34781;

	class AHKPAKFGGGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GMCPCKHHPOB*>* FBJEFPJOGKD; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LEEMFDMPNJD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AHKPAKFGGGG")->GetStaticField(0x32050);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHKPAKFGGGG")->GetStaticField(0x32058);
		}

		// static const ::System::Object KOLKGBBJGEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHKPAKFGGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKPAKFGGGG*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKPAKFGGGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHKPAKFGGGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHKPAKFGGGG* Clone()
		{
			return ((::AHKPAKFGGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GMCPCKHHPOB*>* JCCJEAFCJNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GMCPCKHHPOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_JCCJEAFCJNN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHKPAKFGGGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHKPAKFGGGG*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHKPAKFGGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKPAKFGGGG*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHKPAKFGGGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
