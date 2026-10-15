#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHALMBFHKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMHALMBFHKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E1BE0)
#define EMHALMBFHKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E1E40)
#define EMHALMBFHKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E17E0)
#define EMHALMBFHKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E1750)
#define EMHALMBFHKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E1700)
#define EMHALMBFHKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E1910)
#define EMHALMBFHKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E1820)
#define EMHALMBFHKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E1A00)
#define EMHALMBFHKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E16C0)
#define EMHALMBFHKG_KPPBHFJPLIA_OFFSET UNITYSDK_OFFSET(0x1E2E1810)
#define EMHALMBFHKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E1CA0)
#define EMHALMBFHKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E1C50)
#define EMHALMBFHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E16F0)
#define EMHALMBFHKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E1B00)
#define EMHALMBFHKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E1B60)

inline static constexpr unsigned int EMHALMBFHKG_TypeDefinitionIndex = 32342;

	class EMHALMBFHKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DALNGIGLKJJ; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_DOHDOCNDLDO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EMHALMBFHKG")->GetStaticField(0x53020);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EMHALMBFHKG")->GetStaticField(0x53028);
		}

		// static const ::System::Object ODJIJFJCHHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMHALMBFHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMHALMBFHKG*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHALMBFHKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EMHALMBFHKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMHALMBFHKG* Clone()
		{
			return ((::EMHALMBFHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPPBHFJPLIA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_KPPBHFJPLIA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMHALMBFHKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMHALMBFHKG*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHALMBFHKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMHALMBFHKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMHALMBFHKG*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMHALMBFHKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
