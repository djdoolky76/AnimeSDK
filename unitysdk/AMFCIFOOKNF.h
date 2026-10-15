#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFCIFOOKNF;
class NMHHIBMCJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMFCIFOOKNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E520620)
#define AMFCIFOOKNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E520990)
#define AMFCIFOOKNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E520170)
#define AMFCIFOOKNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5200E0)
#define AMFCIFOOKNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5200A0)
#define AMFCIFOOKNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E520320)
#define AMFCIFOOKNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5201D0)
#define AMFCIFOOKNF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5201B0)
#define AMFCIFOOKNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E520450)
#define AMFCIFOOKNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E520060)
#define AMFCIFOOKNF_KKFBIFLBMHL_OFFSET UNITYSDK_OFFSET(0x1E5201C0)
#define AMFCIFOOKNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5207D0)
#define AMFCIFOOKNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E520730)
#define AMFCIFOOKNF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5201A0)
#define AMFCIFOOKNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E520090)
#define AMFCIFOOKNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5204C0)
#define AMFCIFOOKNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E520520)

inline static constexpr unsigned int AMFCIFOOKNF_TypeDefinitionIndex = 31438;

	class AMFCIFOOKNF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NMHHIBMCJHI*>* CLLAOPHFJCH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NDKHFNGMBBO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AMFCIFOOKNF")->GetStaticField(0x3C410);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMFCIFOOKNF")->GetStaticField(0x3C418);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OFJIDCOCJLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMFCIFOOKNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFCIFOOKNF*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFCIFOOKNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMFCIFOOKNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMFCIFOOKNF* Clone()
		{
			return ((::AMFCIFOOKNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMHHIBMCJHI*>* KKFBIFLBMHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMHHIBMCJHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_KKFBIFLBMHL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMFCIFOOKNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMFCIFOOKNF*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMFCIFOOKNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFCIFOOKNF*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMFCIFOOKNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
