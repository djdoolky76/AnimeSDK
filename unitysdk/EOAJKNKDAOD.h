#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAJKNKDAOD;
class HBFODNLIBFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOAJKNKDAOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C85B0)
#define EOAJKNKDAOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C8950)
#define EOAJKNKDAOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C80B0)
#define EOAJKNKDAOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C7FF0)
#define EOAJKNKDAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7FA0)
#define EOAJKNKDAOD_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E2C8110)
#define EOAJKNKDAOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C82C0)
#define EOAJKNKDAOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C8130)
#define EOAJKNKDAOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C83E0)
#define EOAJKNKDAOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C7F30)
#define EOAJKNKDAOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C8780)
#define EOAJKNKDAOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C86E0)
#define EOAJKNKDAOD_MODJOKJAJAL_OFFSET UNITYSDK_OFFSET(0x1E2C8100)
#define EOAJKNKDAOD_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E2C8120)
#define EOAJKNKDAOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7F90)
#define EOAJKNKDAOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C8450)
#define EOAJKNKDAOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C84B0)

inline static constexpr unsigned int EOAJKNKDAOD_TypeDefinitionIndex = 26587;

	class EOAJKNKDAOD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HBFODNLIBFI*>* LMJKIKOHHMD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::HBFODNLIBFI*>** StaticGet_LPLBOLJNNNF()
		{
			return (::Google::Protobuf::FieldCodec_1<::HBFODNLIBFI*>**)UnitySDK::FromName("", "EOAJKNKDAOD")->GetStaticField(0x2B7F0);
		}

		static ::Google::Protobuf::MessageParser_1<::EOAJKNKDAOD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EOAJKNKDAOD*>**)UnitySDK::FromName("", "EOAJKNKDAOD")->GetStaticField(0x2B7F8);
		}

		// static const ::System::Object AAIPCJOMHNC; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOAJKNKDAOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOAJKNKDAOD*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOAJKNKDAOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EOAJKNKDAOD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EOAJKNKDAOD*>*(*)())((::PBYTE)hIl2Cpp + EOAJKNKDAOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOAJKNKDAOD* Clone()
		{
			return ((::EOAJKNKDAOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HBFODNLIBFI*>* MODJOKJAJAL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HBFODNLIBFI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_MODJOKJAJAL_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOAJKNKDAOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOAJKNKDAOD*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOAJKNKDAOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOAJKNKDAOD*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOAJKNKDAOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
