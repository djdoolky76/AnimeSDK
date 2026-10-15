#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNAEJBKINH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHNAEJBKINH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3912E0)
#define FHNAEJBKINH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3915A0)
#define FHNAEJBKINH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E390E60)
#define FHNAEJBKINH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E390DD0)
#define FHNAEJBKINH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E390D80)
#define FHNAEJBKINH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E390FE0)
#define FHNAEJBKINH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E390EC0)
#define FHNAEJBKINH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3910D0)
#define FHNAEJBKINH_IDEPDCNCEDC_OFFSET UNITYSDK_OFFSET(0x1E390EB0)
#define FHNAEJBKINH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E390D10)
#define FHNAEJBKINH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3913D0)
#define FHNAEJBKINH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E391380)
#define FHNAEJBKINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E390D70)
#define FHNAEJBKINH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3911D0)
#define FHNAEJBKINH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E391230)

inline static constexpr unsigned int FHNAEJBKINH_TypeDefinitionIndex = 32492;

	class FHNAEJBKINH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GBHCNAIGAAB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FHNAEJBKINH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHNAEJBKINH*>**)UnitySDK::FromName("", "FHNAEJBKINH")->GetStaticField(0x17840);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKKLEJKJBBL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FHNAEJBKINH")->GetStaticField(0x17848);
		}

		// static const ::System::Object MFDIEHDFEPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHNAEJBKINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNAEJBKINH*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNAEJBKINH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHNAEJBKINH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHNAEJBKINH*>*(*)())((::PBYTE)hIl2Cpp + FHNAEJBKINH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHNAEJBKINH* Clone()
		{
			return ((::FHNAEJBKINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IDEPDCNCEDC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_IDEPDCNCEDC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHNAEJBKINH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHNAEJBKINH*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHNAEJBKINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNAEJBKINH*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHNAEJBKINH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
