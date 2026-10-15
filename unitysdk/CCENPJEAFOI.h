#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCENPJEAFOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CCENPJEAFOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E046290)
#define CCENPJEAFOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0464F0)
#define CCENPJEAFOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E045E90)
#define CCENPJEAFOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E045E00)
#define CCENPJEAFOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E045DB0)
#define CCENPJEAFOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E045FC0)
#define CCENPJEAFOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E045ED0)
#define CCENPJEAFOI_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x1E045EC0)
#define CCENPJEAFOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0460B0)
#define CCENPJEAFOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E045D70)
#define CCENPJEAFOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E046350)
#define CCENPJEAFOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E046300)
#define CCENPJEAFOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E045DA0)
#define CCENPJEAFOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0461B0)
#define CCENPJEAFOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E046210)

inline static constexpr unsigned int CCENPJEAFOI_TypeDefinitionIndex = 29887;

	class CCENPJEAFOI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DAJAAAPJPNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CCENPJEAFOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CCENPJEAFOI*>**)UnitySDK::FromName("", "CCENPJEAFOI")->GetStaticField(0xCAF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CCENPJEAFOI")->GetStaticField(0xCAF8);
		}

		// static const ::System::Object KKEFDKAOBNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CCENPJEAFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCENPJEAFOI*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCENPJEAFOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CCENPJEAFOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CCENPJEAFOI*>*(*)())((::PBYTE)hIl2Cpp + CCENPJEAFOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CCENPJEAFOI* Clone()
		{
			return ((::CCENPJEAFOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_FMGHOGEBEJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CCENPJEAFOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCENPJEAFOI*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCENPJEAFOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CCENPJEAFOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCENPJEAFOI*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CCENPJEAFOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
