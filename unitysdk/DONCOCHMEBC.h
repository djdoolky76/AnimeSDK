#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DONCOCHMEBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DONCOCHMEBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F75ECA0)
#define DONCOCHMEBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F75EF00)
#define DONCOCHMEBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F75E8A0)
#define DONCOCHMEBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F75E810)
#define DONCOCHMEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F75E7C0)
#define DONCOCHMEBC_DBKOHFCBALN_OFFSET UNITYSDK_OFFSET(0x1F75E8D0)
#define DONCOCHMEBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F75E9D0)
#define DONCOCHMEBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F75E8E0)
#define DONCOCHMEBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F75EAC0)
#define DONCOCHMEBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F75E780)
#define DONCOCHMEBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F75ED60)
#define DONCOCHMEBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F75ED10)
#define DONCOCHMEBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F75E7B0)
#define DONCOCHMEBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F75EBC0)
#define DONCOCHMEBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F75EC20)

inline static constexpr unsigned int DONCOCHMEBC_TypeDefinitionIndex = 28333;

	class DONCOCHMEBC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHOAHNOMNNI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NLFGLEPGEKP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DONCOCHMEBC")->GetStaticField(0x39070);
		}

		static ::Google::Protobuf::MessageParser_1<::DONCOCHMEBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DONCOCHMEBC*>**)UnitySDK::FromName("", "DONCOCHMEBC")->GetStaticField(0x39078);
		}

		// static const ::System::Object ALLMADBJBKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DONCOCHMEBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DONCOCHMEBC*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DONCOCHMEBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DONCOCHMEBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DONCOCHMEBC*>*(*)())((::PBYTE)hIl2Cpp + DONCOCHMEBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DONCOCHMEBC* Clone()
		{
			return ((::DONCOCHMEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DBKOHFCBALN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_DBKOHFCBALN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DONCOCHMEBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DONCOCHMEBC*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DONCOCHMEBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DONCOCHMEBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DONCOCHMEBC*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DONCOCHMEBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
