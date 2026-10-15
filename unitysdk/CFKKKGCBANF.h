#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFKKKGCBANF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFKKKGCBANF_ADGMLOPOONI_OFFSET UNITYSDK_OFFSET(0x1E078010)
#define CFKKKGCBANF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0783E0)
#define CFKKKGCBANF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E078640)
#define CFKKKGCBANF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E077FE0)
#define CFKKKGCBANF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E077F50)
#define CFKKKGCBANF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E077F00)
#define CFKKKGCBANF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E078110)
#define CFKKKGCBANF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E078020)
#define CFKKKGCBANF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E078200)
#define CFKKKGCBANF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E077EC0)
#define CFKKKGCBANF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0784A0)
#define CFKKKGCBANF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E078450)
#define CFKKKGCBANF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E077EF0)
#define CFKKKGCBANF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E078300)
#define CFKKKGCBANF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E078360)

inline static constexpr unsigned int CFKKKGCBANF_TypeDefinitionIndex = 34576;

	class CFKKKGCBANF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKMKIDBEBFH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CFKKKGCBANF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFKKKGCBANF*>**)UnitySDK::FromName("", "CFKKKGCBANF")->GetStaticField(0x120C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PNNGNPLNGIL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CFKKKGCBANF")->GetStaticField(0x120C8);
		}

		// static const ::System::Object FEEGJLAMKLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFKKKGCBANF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFKKKGCBANF*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFKKKGCBANF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFKKKGCBANF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFKKKGCBANF*>*(*)())((::PBYTE)hIl2Cpp + CFKKKGCBANF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFKKKGCBANF* Clone()
		{
			return ((::CFKKKGCBANF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADGMLOPOONI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_ADGMLOPOONI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFKKKGCBANF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFKKKGCBANF*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKKKGCBANF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFKKKGCBANF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFKKKGCBANF*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFKKKGCBANF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
