#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHFMPLAJCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFHFMPLAJCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F864850)
#define HFHFMPLAJCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F864B10)
#define HFHFMPLAJCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8643D0)
#define HFHFMPLAJCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F864340)
#define HFHFMPLAJCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8642F0)
#define HFHFMPLAJCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F864550)
#define HFHFMPLAJCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F864430)
#define HFHFMPLAJCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F864640)
#define HFHFMPLAJCC_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1F864420)
#define HFHFMPLAJCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F864280)
#define HFHFMPLAJCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F864940)
#define HFHFMPLAJCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8648F0)
#define HFHFMPLAJCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8642E0)
#define HFHFMPLAJCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F864740)
#define HFHFMPLAJCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8647A0)

inline static constexpr unsigned int HFHFMPLAJCC_TypeDefinitionIndex = 25708;

	class HFHFMPLAJCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HFHFMPLAJCC")->GetStaticField(0x2AF40);
		}

		static ::Google::Protobuf::MessageParser_1<::HFHFMPLAJCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFHFMPLAJCC*>**)UnitySDK::FromName("", "HFHFMPLAJCC")->GetStaticField(0x2AF48);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFHFMPLAJCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFHFMPLAJCC*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFHFMPLAJCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFHFMPLAJCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFHFMPLAJCC*>*(*)())((::PBYTE)hIl2Cpp + HFHFMPLAJCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFHFMPLAJCC* Clone()
		{
			return ((::HFHFMPLAJCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFHFMPLAJCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFHFMPLAJCC*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFHFMPLAJCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFHFMPLAJCC*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFHFMPLAJCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
