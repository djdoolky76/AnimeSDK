#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PACMGHKKGKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PACMGHKKGKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEBCF80)
#define PACMGHKKGKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD240)
#define PACMGHKKGKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBCB00)
#define PACMGHKKGKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBCA70)
#define PACMGHKKGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBCA20)
#define PACMGHKKGKN_EEFPAHPIAMH_OFFSET UNITYSDK_OFFSET(0x1DEBCB50)
#define PACMGHKKGKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBCC80)
#define PACMGHKKGKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBCB60)
#define PACMGHKKGKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBCD70)
#define PACMGHKKGKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBC9B0)
#define PACMGHKKGKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEBD070)
#define PACMGHKKGKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBD020)
#define PACMGHKKGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBCA10)
#define PACMGHKKGKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBCE70)
#define PACMGHKKGKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEBCED0)

inline static constexpr unsigned int PACMGHKKGKN_TypeDefinitionIndex = 30716;

	class PACMGHKKGKN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AJDFNDKBLNN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PACMGHKKGKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PACMGHKKGKN*>**)UnitySDK::FromName("", "PACMGHKKGKN")->GetStaticField(0x2B5D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FMPKBMIDBJE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PACMGHKKGKN")->GetStaticField(0x2B5D8);
		}

		// static const ::System::Object GEJFEJFINFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PACMGHKKGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PACMGHKKGKN*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PACMGHKKGKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PACMGHKKGKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PACMGHKKGKN*>*(*)())((::PBYTE)hIl2Cpp + PACMGHKKGKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PACMGHKKGKN* Clone()
		{
			return ((::PACMGHKKGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEFPAHPIAMH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_EEFPAHPIAMH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PACMGHKKGKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PACMGHKKGKN*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PACMGHKKGKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PACMGHKKGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PACMGHKKGKN*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PACMGHKKGKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
