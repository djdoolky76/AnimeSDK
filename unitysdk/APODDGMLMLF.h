#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APODDGMLMLF;
class BOPOBHGDIKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define APODDGMLMLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64D7B0)
#define APODDGMLMLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64DB20)
#define APODDGMLMLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64D300)
#define APODDGMLMLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64D270)
#define APODDGMLMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64D230)
#define APODDGMLMLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64D4B0)
#define APODDGMLMLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64D360)
#define APODDGMLMLF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E64D340)
#define APODDGMLMLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64D5E0)
#define APODDGMLMLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64D1F0)
#define APODDGMLMLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64D960)
#define APODDGMLMLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64D8C0)
#define APODDGMLMLF_NONMHMACDDG_OFFSET UNITYSDK_OFFSET(0x1E64D350)
#define APODDGMLMLF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E64D330)
#define APODDGMLMLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64D220)
#define APODDGMLMLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64D650)
#define APODDGMLMLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64D6B0)

inline static constexpr unsigned int APODDGMLMLF_TypeDefinitionIndex = 32425;

	class APODDGMLMLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BOPOBHGDIKN*>* FGGDAGFFDII; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::APODDGMLMLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::APODDGMLMLF*>**)UnitySDK::FromName("", "APODDGMLMLF")->GetStaticField(0x4AC90);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOPOBHGDIKN*>** StaticGet_LECKOJGONDK()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOPOBHGDIKN*>**)UnitySDK::FromName("", "APODDGMLMLF")->GetStaticField(0x4AC98);
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

		static ::Google::Protobuf::MessageParser_1<::APODDGMLMLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::APODDGMLMLF*>*(*)())((::PBYTE)hIl2Cpp + APODDGMLMLF_JJGHOBBFNJD_OFFSET))();
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
