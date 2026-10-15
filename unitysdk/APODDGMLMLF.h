#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APODDGMLMLF;
class BOPOBHGDIKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APODDGMLMLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67AE70)
#define APODDGMLMLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67B1E0)
#define APODDGMLMLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67A9C0)
#define APODDGMLMLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67A930)
#define APODDGMLMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67A8F0)
#define APODDGMLMLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67AB70)
#define APODDGMLMLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67AA20)
#define APODDGMLMLF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E67AA00)
#define APODDGMLMLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67ACA0)
#define APODDGMLMLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67A8B0)
#define APODDGMLMLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67B020)
#define APODDGMLMLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67AF80)
#define APODDGMLMLF_NONMHMACDDG_OFFSET UNITYSDK_OFFSET(0x1E67AA10)
#define APODDGMLMLF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E67A9F0)
#define APODDGMLMLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67A8E0)
#define APODDGMLMLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67AD10)
#define APODDGMLMLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67AD70)

inline static constexpr unsigned int APODDGMLMLF_TypeDefinitionIndex = 32425;

	class APODDGMLMLF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BOPOBHGDIKN*>* FGGDAGFFDII; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LECKOJGONDK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "APODDGMLMLF")->GetStaticField(0x42810);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "APODDGMLMLF")->GetStaticField(0x42818);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ICEKAEFCFNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::APODDGMLMLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APODDGMLMLF*))((::PBYTE)hIl2Cpp + APODDGMLMLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APODDGMLMLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + APODDGMLMLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::APODDGMLMLF* Clone()
		{
			return ((::APODDGMLMLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APODDGMLMLF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOPOBHGDIKN*>* NONMHMACDDG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOPOBHGDIKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_NONMHMACDDG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APODDGMLMLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::APODDGMLMLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APODDGMLMLF*))((::PBYTE)hIl2Cpp + APODDGMLMLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + APODDGMLMLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APODDGMLMLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::APODDGMLMLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APODDGMLMLF*))((::PBYTE)hIl2Cpp + APODDGMLMLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + APODDGMLMLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
