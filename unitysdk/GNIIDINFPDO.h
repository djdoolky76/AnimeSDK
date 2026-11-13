#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNIIDINFPDO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNIIDINFPDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE01050)
#define GNIIDINFPDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE01270)
#define GNIIDINFPDO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE00B20)
#define GNIIDINFPDO_CODMCAGAOPE_OFFSET UNITYSDK_OFFSET(0x1FE00B60)
#define GNIIDINFPDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE00A30)
#define GNIIDINFPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE009A0)
#define GNIIDINFPDO_DNMHIODLIDF_OFFSET UNITYSDK_OFFSET(0x1FE00B50)
#define GNIIDINFPDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE00C80)
#define GNIIDINFPDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE00B70)
#define GNIIDINFPDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE00D90)
#define GNIIDINFPDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE00960)
#define GNIIDINFPDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE01140)
#define GNIIDINFPDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE010E0)
#define GNIIDINFPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE00990)
#define GNIIDINFPDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE00F50)
#define GNIIDINFPDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE00FB0)

inline static constexpr unsigned int GNIIDINFPDO_TypeDefinitionIndex = 30485;

	class GNIIDINFPDO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BKLJKKEDMPN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DPGDDBEACAJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BPHNANHHCEA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNIIDINFPDO")->GetStaticField(0x1A130);
		}

		static ::Google::Protobuf::MessageParser_1<::GNIIDINFPDO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNIIDINFPDO*>**)UnitySDK::FromName("", "GNIIDINFPDO")->GetStaticField(0x1A138);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCBOAFAEBLJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNIIDINFPDO")->GetStaticField(0x1A140);
		}

		// static const ::System::Object GHOIIHHDBLN; // 0x0
		// static const ::System::Object GHPKDDCCIID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNIIDINFPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNIIDINFPDO*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNIIDINFPDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNIIDINFPDO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNIIDINFPDO*>*(*)())((::PBYTE)hIl2Cpp + GNIIDINFPDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNIIDINFPDO* Clone()
		{
			return ((::GNIIDINFPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DNMHIODLIDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_DNMHIODLIDF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CODMCAGAOPE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_CODMCAGAOPE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNIIDINFPDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNIIDINFPDO*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIDINFPDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNIIDINFPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNIIDINFPDO*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNIIDINFPDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
