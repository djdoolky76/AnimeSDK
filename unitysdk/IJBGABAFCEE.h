#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJBGABAFCEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJBGABAFCEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E690C00)
#define IJBGABAFCEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E690E80)
#define IJBGABAFCEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E690740)
#define IJBGABAFCEE_CLPBIKLGHPG_OFFSET UNITYSDK_OFFSET(0x1E690790)
#define IJBGABAFCEE_CNKPDNMEFKD_OFFSET UNITYSDK_OFFSET(0x1E690780)
#define IJBGABAFCEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6906B0)
#define IJBGABAFCEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E690660)
#define IJBGABAFCEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6908A0)
#define IJBGABAFCEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6907A0)
#define IJBGABAFCEE_FOIHDAHHBKJ_OFFSET UNITYSDK_OFFSET(0x1E690770)
#define IJBGABAFCEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6909A0)
#define IJBGABAFCEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E690620)
#define IJBGABAFCEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E690CC0)
#define IJBGABAFCEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E690C70)
#define IJBGABAFCEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E690650)
#define IJBGABAFCEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E690AA0)
#define IJBGABAFCEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E690B00)

inline static constexpr unsigned int IJBGABAFCEE_TypeDefinitionIndex = 28995;

	class IJBGABAFCEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMCBFKPHMCC; // 0x18
		::System::Boolean BDPHPGFFFDM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJBGABAFCEE")->GetStaticField(0x51D00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FHONEDIAILF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IJBGABAFCEE")->GetStaticField(0x51D08);
		}

		// static const ::System::Object AGBPCDPMDOB; // 0x0
		// static const ::System::Object NMEODHEIPGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJBGABAFCEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJBGABAFCEE*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBGABAFCEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJBGABAFCEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJBGABAFCEE* Clone()
		{
			return ((::IJBGABAFCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CLONE_OFFSET))(this);
		}

		::System::Boolean FOIHDAHHBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_FOIHDAHHBKJ_OFFSET))(this);
		}

		::System::Void CNKPDNMEFKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CNKPDNMEFKD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CLPBIKLGHPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CLPBIKLGHPG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJBGABAFCEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJBGABAFCEE*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBGABAFCEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJBGABAFCEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJBGABAFCEE*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJBGABAFCEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
