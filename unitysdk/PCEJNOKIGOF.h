#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOLCGIOGIBP;
class PCEJNOKIGOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCEJNOKIGOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DED9BB0)
#define PCEJNOKIGOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED9E90)
#define PCEJNOKIGOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DED9790)
#define PCEJNOKIGOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DED9700)
#define PCEJNOKIGOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED96C0)
#define PCEJNOKIGOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DED9910)
#define PCEJNOKIGOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DED97D0)
#define PCEJNOKIGOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DED9A30)
#define PCEJNOKIGOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DED9680)
#define PCEJNOKIGOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DED9CF0)
#define PCEJNOKIGOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DED9C50)
#define PCEJNOKIGOF_NHNPKDAIKLL_OFFSET UNITYSDK_OFFSET(0x1DED97C0)
#define PCEJNOKIGOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DED96B0)
#define PCEJNOKIGOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DED9AA0)
#define PCEJNOKIGOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DED9B00)

inline static constexpr unsigned int PCEJNOKIGOF_TypeDefinitionIndex = 26240;

	class PCEJNOKIGOF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* KCHFJNEFCDE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PCEJNOKIGOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCEJNOKIGOF*>**)UnitySDK::FromName("", "PCEJNOKIGOF")->GetStaticField(0x2E630);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>** StaticGet_CLHOEPIPJKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>**)UnitySDK::FromName("", "PCEJNOKIGOF")->GetStaticField(0x2E638);
		}

		// static const ::System::Object LALJFALNFPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCEJNOKIGOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCEJNOKIGOF*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCEJNOKIGOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCEJNOKIGOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCEJNOKIGOF*>*(*)())((::PBYTE)hIl2Cpp + PCEJNOKIGOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCEJNOKIGOF* Clone()
		{
			return ((::PCEJNOKIGOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* NHNPKDAIKLL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_NHNPKDAIKLL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCEJNOKIGOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCEJNOKIGOF*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCEJNOKIGOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCEJNOKIGOF*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCEJNOKIGOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
