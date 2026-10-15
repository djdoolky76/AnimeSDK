#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
class PMEHLELAFJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMEHLELAFJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7CDB0)
#define PMEHLELAFJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D140)
#define PMEHLELAFJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7C900)
#define PMEHLELAFJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7C870)
#define PMEHLELAFJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C830)
#define PMEHLELAFJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7CAB0)
#define PMEHLELAFJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7C960)
#define PMEHLELAFJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF7C950)
#define PMEHLELAFJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7CBD0)
#define PMEHLELAFJI_HHPPFDBKMLC_OFFSET UNITYSDK_OFFSET(0x1DF7C930)
#define PMEHLELAFJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7C7F0)
#define PMEHLELAFJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7CF80)
#define PMEHLELAFJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7CEE0)
#define PMEHLELAFJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF7C940)
#define PMEHLELAFJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C820)
#define PMEHLELAFJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7CC40)
#define PMEHLELAFJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7CCA0)

inline static constexpr unsigned int PMEHLELAFJI_TypeDefinitionIndex = 28455;

	class PMEHLELAFJI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>* NPIFGBKJOAC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PMEHLELAFJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMEHLELAFJI*>**)UnitySDK::FromName("", "PMEHLELAFJI")->GetStaticField(0x3F8F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::GCJCLFOLBPP*>** StaticGet_GPLGMIDEONO()
		{
			return (::Google::Protobuf::FieldCodec_1<::GCJCLFOLBPP*>**)UnitySDK::FromName("", "PMEHLELAFJI")->GetStaticField(0x3F8F8);
		}

		// static const ::System::Object DECGLGGCELI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMEHLELAFJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEHLELAFJI*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEHLELAFJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMEHLELAFJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMEHLELAFJI*>*(*)())((::PBYTE)hIl2Cpp + PMEHLELAFJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMEHLELAFJI* Clone()
		{
			return ((::PMEHLELAFJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>* HHPPFDBKMLC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GCJCLFOLBPP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_HHPPFDBKMLC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMEHLELAFJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMEHLELAFJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMEHLELAFJI*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMEHLELAFJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEHLELAFJI*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMEHLELAFJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
