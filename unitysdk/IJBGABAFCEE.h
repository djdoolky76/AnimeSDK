#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJBGABAFCEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJBGABAFCEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E663580)
#define IJBGABAFCEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E663800)
#define IJBGABAFCEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6630C0)
#define IJBGABAFCEE_CLPBIKLGHPG_OFFSET UNITYSDK_OFFSET(0x1E663110)
#define IJBGABAFCEE_CNKPDNMEFKD_OFFSET UNITYSDK_OFFSET(0x1E663100)
#define IJBGABAFCEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E663030)
#define IJBGABAFCEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E662FE0)
#define IJBGABAFCEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E663220)
#define IJBGABAFCEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E663120)
#define IJBGABAFCEE_FOIHDAHHBKJ_OFFSET UNITYSDK_OFFSET(0x1E6630F0)
#define IJBGABAFCEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E663320)
#define IJBGABAFCEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E662FA0)
#define IJBGABAFCEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E663640)
#define IJBGABAFCEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6635F0)
#define IJBGABAFCEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E662FD0)
#define IJBGABAFCEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E663420)
#define IJBGABAFCEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E663480)

inline static constexpr unsigned int IJBGABAFCEE_TypeDefinitionIndex = 28995;

	class IJBGABAFCEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMCBFKPHMCC; // 0x18
		::System::Boolean BDPHPGFFFDM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IJBGABAFCEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJBGABAFCEE*>**)UnitySDK::FromName("", "IJBGABAFCEE")->GetStaticField(0x4F530);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FHONEDIAILF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IJBGABAFCEE")->GetStaticField(0x4F538);
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

		static ::Google::Protobuf::MessageParser_1<::IJBGABAFCEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJBGABAFCEE*>*(*)())((::PBYTE)hIl2Cpp + IJBGABAFCEE_JJGHOBBFNJD_OFFSET))();
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
