#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGKOAHJCBAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OGKOAHJCBAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F0FDCB0)
#define OGKOAHJCBAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FDF10)
#define OGKOAHJCBAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F0FD8B0)
#define OGKOAHJCBAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0FD820)
#define OGKOAHJCBAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FD7D0)
#define OGKOAHJCBAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F0FD9E0)
#define OGKOAHJCBAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F0FD8F0)
#define OGKOAHJCBAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F0FDAD0)
#define OGKOAHJCBAF_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x1F0FD8E0)
#define OGKOAHJCBAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F0FD790)
#define OGKOAHJCBAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F0FDD70)
#define OGKOAHJCBAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F0FDD20)
#define OGKOAHJCBAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F0FD7C0)
#define OGKOAHJCBAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0FDBD0)
#define OGKOAHJCBAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F0FDC30)

inline static constexpr unsigned int OGKOAHJCBAF_TypeDefinitionIndex = 34673;

	class OGKOAHJCBAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OGKOAHJCBAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OGKOAHJCBAF*>**)UnitySDK::FromName("", "OGKOAHJCBAF")->GetStaticField(0x14A80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OGKOAHJCBAF")->GetStaticField(0x14A88);
		}

		// static const ::System::Object IICKCIKPOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OGKOAHJCBAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OGKOAHJCBAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OGKOAHJCBAF*>*(*)())((::PBYTE)hIl2Cpp + OGKOAHJCBAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OGKOAHJCBAF* Clone()
		{
			return ((::OGKOAHJCBAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OGKOAHJCBAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OGKOAHJCBAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGKOAHJCBAF*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OGKOAHJCBAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
