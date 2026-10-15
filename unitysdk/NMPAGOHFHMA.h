#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMPAGOHFHMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMPAGOHFHMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7CD20)
#define NMPAGOHFHMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7D010)
#define NMPAGOHFHMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7C890)
#define NMPAGOHFHMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7C800)
#define NMPAGOHFHMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7C7B0)
#define NMPAGOHFHMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7C9F0)
#define NMPAGOHFHMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7C8F0)
#define NMPAGOHFHMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB7C8D0)
#define NMPAGOHFHMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7CAE0)
#define NMPAGOHFHMA_JGEOADBGDBB_OFFSET UNITYSDK_OFFSET(0x1EB7C8E0)
#define NMPAGOHFHMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7C770)
#define NMPAGOHFHMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7CE50)
#define NMPAGOHFHMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7CE00)
#define NMPAGOHFHMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB7C8C0)
#define NMPAGOHFHMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7C7A0)
#define NMPAGOHFHMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7CBE0)
#define NMPAGOHFHMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7CC40)

inline static constexpr unsigned int NMPAGOHFHMA_TypeDefinitionIndex = 32623;

	class NMPAGOHFHMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BAJFPPIBKPJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DGCGCAGBFAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NMPAGOHFHMA")->GetStaticField(0x1880);
		}

		static ::Google::Protobuf::MessageParser_1<::NMPAGOHFHMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMPAGOHFHMA*>**)UnitySDK::FromName("", "NMPAGOHFHMA")->GetStaticField(0x1888);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CFDEFHLAKFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMPAGOHFHMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMPAGOHFHMA*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMPAGOHFHMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMPAGOHFHMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMPAGOHFHMA*>*(*)())((::PBYTE)hIl2Cpp + NMPAGOHFHMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMPAGOHFHMA* Clone()
		{
			return ((::NMPAGOHFHMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JGEOADBGDBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_JGEOADBGDBB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMPAGOHFHMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMPAGOHFHMA*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMPAGOHFHMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMPAGOHFHMA*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMPAGOHFHMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
