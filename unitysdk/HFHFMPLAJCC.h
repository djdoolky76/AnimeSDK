#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHFMPLAJCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFHFMPLAJCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56A3C0)
#define HFHFMPLAJCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56A680)
#define HFHFMPLAJCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E569F40)
#define HFHFMPLAJCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E569EB0)
#define HFHFMPLAJCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E569E60)
#define HFHFMPLAJCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56A0C0)
#define HFHFMPLAJCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E569FA0)
#define HFHFMPLAJCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56A1B0)
#define HFHFMPLAJCC_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E569F90)
#define HFHFMPLAJCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E569DF0)
#define HFHFMPLAJCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56A4B0)
#define HFHFMPLAJCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56A460)
#define HFHFMPLAJCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E569E50)
#define HFHFMPLAJCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56A2B0)
#define HFHFMPLAJCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56A310)

inline static constexpr unsigned int HFHFMPLAJCC_TypeDefinitionIndex = 25230;

	class HFHFMPLAJCC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFHFMPLAJCC")->GetStaticField(0x34970);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HFHFMPLAJCC")->GetStaticField(0x34978);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFHFMPLAJCC_JJGHOBBFNJD_OFFSET))();
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
