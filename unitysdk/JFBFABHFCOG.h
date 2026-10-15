#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBFABHFCOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFBFABHFCOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F4F90)
#define JFBFABHFCOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F5290)
#define JFBFABHFCOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F4B00)
#define JFBFABHFCOG_CLPBIKLGHPG_OFFSET UNITYSDK_OFFSET(0x1E6F4B30)
#define JFBFABHFCOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F4A70)
#define JFBFABHFCOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4A20)
#define JFBFABHFCOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F4C60)
#define JFBFABHFCOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F4B60)
#define JFBFABHFCOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6F4B50)
#define JFBFABHFCOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F4D50)
#define JFBFABHFCOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F49E0)
#define JFBFABHFCOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F50D0)
#define JFBFABHFCOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F5080)
#define JFBFABHFCOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6F4B40)
#define JFBFABHFCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4A10)
#define JFBFABHFCOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F4E50)
#define JFBFABHFCOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F4EB0)

inline static constexpr unsigned int JFBFABHFCOG_TypeDefinitionIndex = 30427;

	class JFBFABHFCOG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMCBFKPHMCC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FHONEDIAILF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JFBFABHFCOG")->GetStaticField(0x5CB00);
		}

		static ::Google::Protobuf::MessageParser_1<::JFBFABHFCOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFBFABHFCOG*>**)UnitySDK::FromName("", "JFBFABHFCOG")->GetStaticField(0x5CB08);
		}

		// static const ::System::Object NMEODHEIPGL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFBFABHFCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBFABHFCOG*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBFABHFCOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFBFABHFCOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFBFABHFCOG*>*(*)())((::PBYTE)hIl2Cpp + JFBFABHFCOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFBFABHFCOG* Clone()
		{
			return ((::JFBFABHFCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLPBIKLGHPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_CLPBIKLGHPG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFBFABHFCOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFBFABHFCOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFBFABHFCOG*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFABHFCOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFBFABHFCOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFBFABHFCOG*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFBFABHFCOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
